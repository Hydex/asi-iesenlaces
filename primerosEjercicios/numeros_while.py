# -*- coding: cp1252 -*-
# $Id$
"""
Imprime los m�ltiplos de un n�mero que introduce el usuario,
menores que un n�mero que introduce el mismo
"""
limite = input('Introduzca el n�mero hasta el que ver la serie: ')
base = raw_input('Introduzca n�meros para ver m�ltiplos: ')  # Primer n�mero
base = int(base)
num = base

while num < limite:
    print num
    num = num + base
    

