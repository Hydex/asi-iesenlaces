# -*- coding: cp1252 -*-
"""
Ej 112.
Solicita un n�mero entre 0 y 10 (ambos incluidos)
"""

numero = int(raw_input("Introduzca un n�mero: "))

while numero < 0 or numero > 10:
    # vuelve a pedir el n�mero si est� mal
    numero = int(raw_input("Introduzca un n�mero: "))
    
print "Numero introducido: ", numero

raw_input("Pulsa intro para continuar ")
