# -*- coding: cp1252 -*-
# $Id$

""" 
Lee una serie de n�meros hasta que introducimos un n�mero negativo.

Muestra el n�mero de entradas y la suma de los n�meros
"""


# Pedir primero

num = input('Introduzca un n�mero (negativo para terminar): ')
# Inicializar
suma = 0 # para acumular los n�meros introducidos
veces = 0 # para contar los n�meros que introduce el usuario

# Nuevas variables
mayor = num
menor = num

# Repetici�n
while num >= 0:
    suma = suma + num
    veces = veces + 1
    if num > mayor:
        mayor = num
    if num < menor:
        menor = num
    num = input('Introduzca un n�mero (negativo para terminar): ')    

# Salida
print 'Ha introducido', veces, 'n�meros que suman', suma
print 'N�mero mayor:', mayor, 'y n�mero menor:', menor












