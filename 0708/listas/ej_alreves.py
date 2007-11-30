# -*- coding: cp1252 -*-
"""
Escribe una funci�n alReves(lista) que de la vuelta a una lista
"""

def alReves(lista):
    nueva = []
    for el in lista:
        nueva.insert(0, el)   # usando m�todo insert(posici�n, elemento)
    return nueva

def alReves2(lista):
    nueva = []
    for el in lista:
        nueva = [el] + nueva
    return nueva



milista =  [4,5,6,7]

print milista
print alReves(milista)
print alReves2(milista)


















