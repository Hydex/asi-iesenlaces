# -*- coding: cp1252 -*-
# $Id$
# $Author$

# Mensaje ayuda
print "Este programa muestra una frase al rev�s"

# Pedir datos
saludo = raw_input('Introduce una frase: ')

# Busco final
final = (len(saludo)+1)*-1

# Muestro frase al rev�s
# Range desde -1 hasta el tama�o de la frase(en negativo) menos 1
# El "paso" es negativo porque va descendiendo
for indice in range(-1, final, -1):
    print saludo[indice], # , para que no imprima el salto de l�nea
print 

# Ahora lo hacemos sin �ndices: concatenando las letras
alreves = "" # creamos nueva variable
for letra in saludo:
    alreves = letra + alreves
print "Segunda versi�n del programa"
print alreves
