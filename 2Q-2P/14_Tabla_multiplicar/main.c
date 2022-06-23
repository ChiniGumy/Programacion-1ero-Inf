#include <stdio.h>

void main(){

    int numero;

    printf("\nIntroduzca un numero entero:  ");
    scanf("%d", &numero);

    printf("\nLa tabla de multiplicar del %d es:\n", numero);

    for (int i = 1; i <= 12; i++){
        printf("\n%d * %d = %d", i, numero, i * numero);
    }
}