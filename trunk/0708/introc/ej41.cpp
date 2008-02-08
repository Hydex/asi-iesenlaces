/*----------------------------------------------------------------
|  Autor:  $Id$                                                   |
|  Fecha:  $Date$                             Versi�n: 1.0        |
|-----------------------------------------------------------------|
|  Descripci�n del Programa:  Ejercicio 41 del libro              |
|      Es May�scula / es min�scula                              |
| ----------------------------------------------------------------*/

// Incluir E/S y Librer�as Standard
#include <stdio.h>
#include <stdlib.h>

// Zona de Declaraci�n de Constantes

// Zona de Declaraci�n de Tipos

// Zona de Cabeceras de Procedimientos y Funciones

// Programa Principal
int main()
{
    // Zona de Declaraci�n de Variables del Programa principal
    char letra;
    
    // Leer letra
    printf("Escribe una letra: ");
    scanf("%c", &letra);
    
    // mostrar May�scula / min�scula
    if ((letra >= 'a') && (letra <= 'z')){  // && --> and  ; || --> or
       printf("Es min�scula\n");  // no obligatorio llaves porque s�lo una sentencia
       printf("\n");
       }
    else
        if ((letra >= 'A') && (letra <= 'Z'))
           printf("Es may�scula\n");  
        else printf("No es una letra\n");  
    
    // if comprimido   (test) ? loquehace s� : loquehace no ;
    ((letra >= 'a') && (letra <= 'z')) ?  
            printf("--> Es min�scula\n") : 
            printf("--> Es may�scula\n"); 

    system("Pause");    // Hacer una pausa
    return 0;           // Valor de retorno al S.O.
}

// Implementaci�n de Procedimientos y Funciones




