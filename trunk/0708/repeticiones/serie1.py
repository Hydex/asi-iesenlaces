# -*- coding: cp1252 -*-
"""
$Id$

Serie de 1 a 100 con salto cada 10 n�meros
"""
for x in range(1,101):
    print "%3d" % x,    # reserva 3 espacios por n�mero
    if x % 10 == 0:     # hace un salto cada 10 n�meros
        print
