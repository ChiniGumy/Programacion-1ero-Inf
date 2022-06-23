#include <stdio.h>

void main(){

    int numero;
    float residuo;

    printf("Ingese numero:.. ");
    scanf("%d", &numero);

    residuo = numero % 7;

    if (residuo == 0){
        printf("El numero ingresado es multiplo de 7");
    } else {
        printf("El numero ingresado no es multiplo de 7");
    }
}