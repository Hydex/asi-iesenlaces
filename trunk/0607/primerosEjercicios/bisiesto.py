# -*- coding: cp1252 -*-
#$Id$

"""
Dice si un a�o es bisiesto o no
"""

# Pedir a�o
anno = input("Introduzca el a�o: ")

# cacular si es bisiesto y mostrar

if (not anno%400) or (anno % 4 == 0 and anno % 100):
    salida = "es bisiesto"
else:
    salida = "no es bisiesto"

print 'El a�o', anno, salida
