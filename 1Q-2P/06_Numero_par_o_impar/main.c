#include <stdio.h>

void main(){

    int numero;
    float residuo;

    printf("Ingrese numero:.. ");
    scanf("%d", &numero);

    residuo = numero % 2;

    if (residuo == 0){
        printf("El numero es par");
    } else {
        printf("El numero es impar");
    }
}