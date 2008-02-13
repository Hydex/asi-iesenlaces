/*----------------------------------------------------------------
|  Autor:                                                         |
|  Fecha:                               Versi�n: 1.0              |
|-----------------------------------------------------------------|
|  Descripci�n del Programa:                                      |
|                                                                 |
| ----------------------------------------------------------------*/

// Incluir E/S y Librer�as Standard
#include <stdio.h>
#include <stdlib.h>
#define TAM  10000
#define MULTI 5

// Zona de Declaraci�n de Constantes

// Zona de Declaraci�n de Tipos

// Zona de Cabeceras de Procedimientos y Funciones

// Programa Principal
int main()
{
    // Zona de Declaraci�n de Variables del Programa principal
    int vectorEnt[TAM];
    int buscaMultiplos[] = {4,7,2,9,6};
    int multiplos[MULTI]={0};  // m�ltiplos de 2, 3, 4, 5, 6
     
    char vectorChar[TAM];
    int i, j;
    
    for (i=0; i<TAM; i++)  // int i --> variable local en c++
        vectorEnt[i] = i * 2;
        
    for (i=0; i<TAM; i++)
        printf("%6d :: ", vectorEnt[i]);
    
    printf("\n\n");
    /*
    for (i=0; i<TAM; i++)  // int i --> variable local en c++
        vectorChar[i] = 'a' + i;

    for (i=0; i<TAM; i++)
        printf("%c [%d] :: ", vectorChar[i], vectorChar[i]);
        
      */  
        
        
    for (i=0; i<TAM; i++){
        for(j=0; j< MULTI; j++)
             if(vectorEnt[i] % (2+j) == 0) multiplos[j]+= 1;
             }
    printf ("Contenido vector m�ltiplos\n");
    for (i=0; i < MULTI; i++)
        printf("M�ltiplos de %d: %6d\n", 2+i, multiplos[i]);
     
        
    for (i=0; i<TAM; i++){
        printf ("Introduce un vector: ", buscaMultiplos[i]);
        scanf(" %d", buscaMultiplos[i]);
        }
    
    system("Pause");    // Hacer una pausa
    return 0;           // Valor de retorno al S.O.
}

// Implementaci�n de Procedimientos y Funciones




