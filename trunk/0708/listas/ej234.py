# -*- coding: cp1252 -*-
#$Id$

"""
Dise�a un programa que elimine de una lista todos los elementos de 
valor par y muestre por pantalla el resultado.
(Ejemplo: si trabaja con la lista [1, -2, 1, -5, 0, 3] �sta pasar�
 a ser [1, 1, -5, 3].)
"""

# m�todo 1: con while
lista = [1, -2, 1, -5, 0, 3]

i = 0
while i < len(lista):
    if lista[i] % 2 == 0:
        del lista[i]
    else:
        i += 1
print lista

# m�todo 2: usar remove
lista = [1, -2, 1, -5, 0, 3]
for el in lista:
    if el%2 == 0:
        lista.remove(el)
print lista
