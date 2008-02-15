/*----------------------------------------------------------------
|  Autor:                                                         |
|  Fecha:                               Versi�n: 1.0              |
|-----------------------------------------------------------------|
|  Descripci�n del Programa:                                      |
|   Rellena un vector con 10 n�meros diferentes    
    Los muestra ordenados de menor a mayor                                                          |
| ----------------------------------------------------------------*/

// Incluir E/S y Librer�as Standard
#include <stdio.h>
#include <stdlib.h>
#define TAM 10

// Zona de Declaraci�n de Constantes

// Zona de Declaraci�n de Tipos

// Zona de Cabeceras de Procedimientos y Funciones

// Programa Principal
int main()
{
    // Zona de Declaraci�n de Variables del Programa principal
    int numero[TAM], i, aux, validos=0, esta;
    
    while (validos < TAM){
        printf("Introduzca un n�mero: ");
        scanf("%d", &aux);
        esta = 0;  // variable bandera: indica si el n�mero est� en el vector
        for (i=0; i<validos; i++)  // si est�, activamos bandera
            if (aux == numero[i]){
               esta = 1;
               printf("Repe\n");
               break; 
               }
        if (esta == 0){   // comprobamos si est� --> (i == validos)
           numero[validos] = aux;
           validos += 1;  
           }
        }

    // ordenar el vector
    
              
    for (i=0; i<TAM; i++)
        printf("%d, ", numero[i]);
        
    

    system("Pause");    // Hacer una pausa
    return 0;           // Valor de retorno al S.O.
}

// Implementaci�n de Procedimientos y Funciones
