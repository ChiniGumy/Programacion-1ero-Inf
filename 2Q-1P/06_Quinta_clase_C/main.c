#include <stdio.h>

void main(){

    float num1, num2;

    printf("Ingrese el primer numero:.. ");
    scanf("%f", &num1);

    printf("Ingrese el segundo numero:.. ");
    scanf("%f", &num2);

    printf("El resultado de %10.0f / %5.0f = %10.2f ", num1, num2, num1 / num2);
}