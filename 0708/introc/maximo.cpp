#include <stdio.h>
#include <stdlib.h>

/*
a = int(raw_input(�Dame el primer n�umero: �))
b = int(raw_input(�Dame el segundo n�umero: �))

if a >= b:
     maximo = a
else:
     maximo = b

print �El m�aximo es�, maximo
*/

int main(void){
    //declaraci�n de variables
    int a, b, maximo;
    // toma de datos
    printf("Dame el primer n�mero: ");
    scanf("%d", &a);
    
    printf("Dame el segundo n�mero: ");
    scanf("%d", &b);
    
    if (a >= b)
       maximo = a;
    else
        maximo = b;
    
    printf("El m�ximo es %d\n", maximo);
    
    system("pause");
    return 0;
}


