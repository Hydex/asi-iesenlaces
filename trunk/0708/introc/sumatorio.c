#include <stdio.h>
#include <math.h>

// siempre funci�n principal: main 
/* devuelve entero, void: indeterminado */
int main(void)
{
   /* obligatorio marcar inicio y final de bloque con {} */
   
   int a, b, i;  /* obligatorio declarar variables: 
                    tipo y nombre*/ 
                    /* sentencias acaban con ;  */
   float s;
   
   /* l�mites */
   printf("L�mite inferior: ");
   scanf("%d", &a);  /* lee de la pantalla.
                     Indicar: tipo de dato y direcci�n de var */
   while (a < 0){
         printf("No puede ser negativo\n");
         printf("L�mite inferior: ");
         scanf("%d", &a);
   }
   
   printf("L�mite superior: ");
   scanf("%d", &b); 
   
   while (b < a){
         printf("No puede ser menor que %d", a);
         printf("L�mite superior: ");
         scanf("%d", &b);
   }
   
   /* c�lculo del sumatorio */
   s = 0.0;
   for (i = a; i<=b; i++){
       s += sqrt(i);
       }
   printf("Sumatorio de ra�ces ");
   printf("de %d a %d: %.2f \n", a, b, s);
   
   system("pause");
   return 0;
}
