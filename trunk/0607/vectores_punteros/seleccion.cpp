// $Id$

// m�todos de ordenaci�n: m�todo de selecci�n

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void seleccion(int v[], int N)
// m�todo de ordenaci�n por seleci�n: busca el menor de una serie
{
   int i, k, posMin; 
   int aux;  // del tipo de lo que vamos a ordenar
   for(i=0; i<N-1; i++)
   {
        posMin=i;
        for(k=i+1; k<N; k++)
              if( v[k] < v[posMin] )  // comparaci�n: c�mo vamos a ordenar
                      posMin=k;
        // coloca el m�nimo en v[i]
        aux=v[i];  // intercambio
        v[i]=v[posMin];
        v[posMin]=aux;

   }
}

void seleccion_str(char v[][40], int N)
{
     // programar ....
   int i, k, posMin; 
   char aux[40];  // del tipo de lo que vamos a ordenar
   for(i=0; i<N-1; i++)
   {
        posMin=i;
        for(k=i+1; k<N; k++)
              if(strcmp(v[k],v[posMin]) > 0)  // comparaci�n: c�mo vamos a ordenar
                      posMin=k;
        // coloca la menor en v[i]
        strcpy(aux,v[i]);  // intercambio
        strcpy(v[i], v[posMin]);
        strcpy(v[posMin], aux);
     }

}


int main(void)
{
    int vector[10] = {4,5,7,2,8,9,3,5,6,11};   //vector de 10 enteros
    char nombres[10][40] = {"Marcos", "Juan", "Maria", "Ana", "Pilar", "Miguel",
                           "Elena"}; // 7 nombres
    int i;
    // aplicamos la funci�n
    seleccion(vector, 10);

    // ver resultado
    for (i=0; i< 10; i++)
        printf("%d, ", vector[i]);
    printf("\n");
    
    seleccion_str(nombres, 7);
    for (i=0; i< 7; i++)
        printf("%s, ", nombres[i]);
    printf("\n");

  system("pause"); // Detiene la consola
  
}
