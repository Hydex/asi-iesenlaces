# -*- coding: cp1252 -*-
# cuenta las letras de un fichero de texto
import pprint  # para imprimir el diccionario

def cuentaLetras(fichero):
    """Abro el fichero y leo letra a letra
"""
    # abrir el fichero para lectura
    f = open(fichero)

    # crear variables
    letras = {}  # diccionario vac�o

    # procesar fichero letra a letra
    letra = f.read(1)
    while letra:
        if letra.isalpha():
            letra = letra.lower()  # conversi�n a min�sculas
            letras[letra] = letras.get(letra,0) + 1  # Incrementamos su valor: si no exist�a, pondr� 1
        letra = f.read(1)
    f.close()
    return letras

def cuentaLetras2(fichero):
    """Leo el fichero entero y proceso letra a letra
"""
    # abrir el fichero para lectura
    f = open(fichero)

    # crear variables
    letras = {}  # diccionario vac�o

    # procesar fichero letra a letra
    contenido = f.read()
    for letra in contenido:
        if letra.isalpha():
            letra = letra.lower()  # conversi�n a min�sculas
            letras[letra] = letras.get(letra,0) + 1  # Incrementamos su valor: si no exist�a, pondr� 1
    f.close()
    return letras

def cuentaPalabras(fichero):
    """Leo el fichero entero y proceso letra a letra
"""
    # abrir el fichero para lectura
    f = open(fichero)

    # crear variables
    palabras = {}  # diccionario vac�o

    # procesar fichero letra a letra
    contenido = f.read()
    listaPalabras = contenido.split(' ')
    for palabra in listaPalabras:
        if palabra.isalpha():
            palabras[palabra] = palabras.get(palabra, 0) +1
    f.close()
    return palabras

def masUsada(dicc):
    """ dicc: parejas--> letra:repeticiones
"""
    repeticiones = dicc.values()
    repeticiones.sort()
    for k in dicc.keys():
        if dicc[k] == repeticiones[-1]:
            print 'Letra m�s usada', k
        

# utilizo primera funci�n
letras = cuentaLetras('muestraletras.py')
# mostrar resultado
pprint.pprint(letras)
print '*' * 40
# utilizo segunda funci�n
letras = cuentaLetras2('muestraletras.py')
# mostrar resultado
pprint.pprint(letras)
print '*' * 40
# utilizo funci�n cuentaPalabras
palabras = cuentaPalabras('muestraletras.py')
pprint.pprint(palabras)
