# -*- coding: cp1252 -*-
"""
$Id$
Ej 113
Pide un texto que no tenga may�sculas. Si hay una letra may�scula,
vuelve a pedir el texto
"""

texto = raw_input("Introduce una frase toda en min�sculas: ")
while not texto.islower():
    # vuelve a pedir el texto si hay alguna may�scula
    texto = raw_input("Introduce una frase toda en min�sculas: ")
print "Texto introducido", texto
