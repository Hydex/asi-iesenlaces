/*----------------------------------------------------------------
|  Autor:                                                         |
|  Fecha:                               Versi�n: 1.0              |
|-----------------------------------------------------------------|
|  Descripci�n del Programa:                                      |
|  Lee una cadena de caracteres y la codifica (letra a letra)     |
| ----------------------------------------------------------------*/

// Incluir E/S y Librer�as Standard
#include <stdio.h>
#include <stdlib.h>
#define MAX 10

// Zona de Declaraci�n de Constantes

// Zona de Declaraci�n de Tipos

// Zona de Cabeceras de Procedimientos y Funciones

// Programa Principal
int main()
{
    // Zona de Declaraci�n de Variables del Programa principal
    char cadena[MAX+1];
    char cadenaEnc[MAX+1];
    int i;
    printf("Cadena antes de inicializar --> %s\n", cadenaEnc);
    printf ("Introduce la cadena a encriptar: ");
    gets(cadena);
    
    for (i=0; cadena[i]!='\0'; i++)
        if ( cadena[i]== 'z' || cadena[i]=='Z' )  // or --> ||  and --> &&  not --> !
           cadenaEnc[i] = cadena[i] - 25;
        else 
           cadenaEnc[i] = cadena[i]+1;
    // escribo el NULL
    cadenaEnc[i] = '\0';
    
    printf("--> %s\n", cadenaEnc);

    // MAAAAAAALLLLL
    for (i=0; i < MAX +1 ; i++)
           cadenaEnc[i] = cadena[i]+1;

    system("Pause");    // Hacer una pausa
    return 0;           // Valor de retorno al S.O.
}

// Implementaci�n de Procedimientos y Funciones
