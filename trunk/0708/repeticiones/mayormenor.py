# -*- coding: cp1252 -*-
"""
$Id$

Trabajos con series de n�meros
Mayor, menor, media ...
Cuidado con los valores no v�lidos al procesar una serie
"""

num = int(raw_input("Introduce un num positivo: "))
mayor = num     # candidato el primero
menor = num
total = 0
veces = 0

while num >=0:
    if num > mayor:  # Sustituir el que hab�amos guardado antes
        mayor = num
    if num < menor:  # Sustituir el que hab�amos guardado antes
        menor = num
    veces += 1
    total += num
    num = int(raw_input("Introduce un num positivo: "))


print "El mayor es", mayor
print "El menor es", menor          
print "Suma de los n�meros", total
print "Media de los n�meros", total / float(veces)











