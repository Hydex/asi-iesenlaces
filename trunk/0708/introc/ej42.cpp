/*----------------------------------------------------------------
|  Autor: $Id$                                                    |
|  Fecha: $Date$                        Versi�n: 1.0              |
|-----------------------------------------------------------------|
|  Descripci�n del Programa:                                      |
|     N�mero m�s cercano al primero                               |
| ----------------------------------------------------------------*/

// Incluir E/S y Librer�as Standard
#include <stdio.h>
#include <stdlib.h>
#include <iostream.h>

// Zona de Declaraci�n de Constantes

// Zona de Declaraci�n de Tipos

// Zona de Cabeceras de Procedimientos y Funciones

// Programa Principal
int main()
{
    // Zona de Declaraci�n de Variables del Programa principal
    int num1, num2, num3, num4, num5;  // para almacenar los numeros
    int cercano;                       // m�s cercano
    // Pedir los 5 n�meros
    cout << "Escribe cinco n�meros (separados por espacios)" << endl;
    cin >> num1 >> num2 >> num3 >> num4 >> num5;
    
    cercano = num2;  // en cercano almacenaremos el n�mero que buscamos
    if (abs(num3 - num1) < abs(cercano - num1))
       cercano = num3;
    if (abs(num4 - num1) < abs(cercano - num1))
       cercano = num4;
    if (abs(num5 - num1) < abs(num1 - cercano))
       cercano = num5;
    // mostramos soluci�n
    cout << "El n�mero m�s cercano a " << num1 << " es " 
                                   << cercano << endl;
    
    
    // 
    
    system("Pause");    // Hacer una pausa
    return 0;           // Valor de retorno al S.O.
}

// Implementaci�n de Procedimientos y Funciones
