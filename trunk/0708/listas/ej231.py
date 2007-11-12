# -*- coding: cp1252 -*-
#$Id$

"""
Dise�a un programa que lea una cadena y muestre por pantalla una lista con todas sus
palabras en min�sculas. La lista devuelta no debe contener palabras repetidas.
"""
cadena = raw_input("Introduzca una frase: ")

minusculas = []

for palabra in cadena.split():
    # recorre frase partida en palabras.
    # s�lo a�ade as min�sculas que no estaban antes en la lista minusculas
    if palabra.islower() and palabra not in minusculas:
        minusculas.append(palabra)

print minusculas
