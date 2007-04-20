// $Id$
// Explicacion del programa

#include <stdio.h>
#include <stdlib.h>



/* DEFINICION
El m�todo de b�squeda binaria consiste en dividir el intervalo de b�squeda en dos partes,
comparando el elemento buscado con el que ocupa la posici�n central del intervalo actual. Si
son iguales la b�squeda ha terminado con exito, sino se redefine el intervalo de b�squeda a la
mitad del actual que contiene los valores mayores o menores que el central, seg�n que el
elemento que se busca sea mayor o menor que el central.
El proceso termina cuando se encuentra el valor buscado, o bien cuando el intervalo de
b�squeda se anula.
*/



int bus_bin(int v[], int x, int n)
/* buscamos en el vector v el valor x. 
n indica el tama�o del vector
*/
{
    int izq=0, cen, der=n-1, sw=0;   
    /* izq: indice izquierdo
       cen: posicion central
       der: indice derecho
       sw: encontrado
       */
    while(izq<=der && sw==0)
    {
         cen = (izq+der)/2;
         if(v[cen]==x)  // depende del tipo de datos del vector
            sw=1;   // activamos variable de encontrado --> para el proceso del b�squeda
         else if(x>v[cen])  // depende del tipo y de lo buscado
                  izq=cen+1;
              else
                  der=cen-1;
    }
    if(sw==1)
             return cen;  // devuelve la posici�n, no el elemento
    else
             return -1;  // si no encuentra: posici�n no v�lida
}

     

int bus_bin_rec(int v[], int x, int izq, int der)
/* buscamos en el vector v el valor x. 
*/
{
    int cen;   
           
    cen = (izq+der)/2;
    if(v[cen]==x)  // depende del tipo de datos del vector
            return cen;
    else if (izq > der)
            return -1;
    else if(x>v[cen])  // depende del tipo y de lo buscado
            return bus_bin_rec(v, x, cen+1, der);
    else
            return bus_bin_rec(v, x, izq, cen-1);

}

     
               

int main(void)
{
    int pares[256], i, resultado;
    // inicializar vector de prueba
    for (i=0; i< 256; i++)
        pares[i]=i*2;
        
    // resultado = bus_bin(pares, 101, 256);
    resultado = bus_bin_rec(pares, 351, 0, 255);
    if (resultado == -1)
       printf("El elemento no est� en el vector\n");
    else
        printf("El elemento buscado est� en la posici�n %d (--> %d)\n", 
                   resultado, pares[resultado] );
        
    

  system("pause"); // Detiene la consola
  
}






