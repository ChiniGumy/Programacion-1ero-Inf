#include <stdio.h>

void main(){

    int numero;

    printf("Ingrese numero:.. ");
    scanf("%d", &numero);

    if (numero >= 0){
        printf("El numero es positivo");
    } else {
        printf("El numero es negativo");
    }
}