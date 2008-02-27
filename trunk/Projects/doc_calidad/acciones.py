# -*- coding: cp1252 -*-
"""
(c) lm morillas 2008
Crea un html con la informaci�n del archivo de acciones abiertas.

1. Punto de partida: archivo .xls de excel con informaci�n de acciones abiertas
2. Se crea el archivo .csv eliminando filas vac�as o sin contenido v�lido. La primera fila son las cabeceras de las columnas. Se eliminan tambi�n las columnas vac�as.
3. El programa crea "a pelo" un html. Se imprime, para luego poderlo redirigir.
4. La primera columna contendr� los enlaces a los archivos, que estar�n en un directorio recogido por la variable path_archivos.
5. Forma de uso:
    * el archivo .csv se llamar� acciones_calidad.csv, en el mismo directorio que el programa.
    * configurar el path
    * ejecutar python acciones.py > acciones.html

"""

import os, glob
import csv

# IMPORTANTE: path donde est�n los documentos
PATH_ARCHIVOS = r'acciones de mejora'

# Abrir con cvs el archivo
f = csv.reader(open('acciones_calidad.csv'))

# Lista de acciones. La primera fila ser�n los t�tulos
acciones = []

for l in f:
    acciones.append(l)

# Separo t�tulos
titulos =  acciones[0]

# Acciones de mejora
acciones = acciones[1:]

# Composici�n del html
titulo = "Listado de acciones correctivas, preventivas o de mejora"
doc = """<html>
 <head>
    <title>%s</title>
    <meta http-equiv="Content-Type" content="text/html; charset=UTF-8" />
    <link rel="stylesheet" href="layout.css" type="text/css"/>
  </head>
    <body><h1>%s</h1><p>&nbsp;</p><div id="datos">""" % (titulo, titulo)
tabla = '<table class="tabla">\n<tr>'

# Los t�tulos van en un <th>
for c in titulos:
    tabla += '<th>%s</th>' % c
tabla += '</tr>'

# Filas para las acciones que NO est�n CERRADAS
for accion in acciones:
    accion = [a.replace('"', '') for a in accion]
    if not accion[5] == 'Cerrada':
        codigo = accion[0]
        fila = '<tr>\n'
        ruta = glob.glob(os.path.join(PATH_ARCHIVOS,codigo.replace('/', '_')+'*'))
        if ruta:
            ruta = ruta[0]
        # si no se encuentra la ruta del archivo
        else: ruta="error"  

        celda = '<td><a href="%s" target="_blank">%s</a></td>\n' % (ruta, codigo)

        fila += celda
        for acc in accion[1:]:
            celda = '<td>%s</td>\n' % acc
            fila += celda
        fila += '</tr>\n'
        tabla += fila
tabla += '</tabla></div>'
                
# Al final imprime el doc .html                
print doc + tabla +'</body></html>'
