#include <stdio.h>

/* 
    Realice un programa que ingrese 3 número enteros y luego visualicela suma del 1ro con el 3ro,
    la resta del 3ro con el 2do, la multiplicación del 2do con el 1ro y la división del 3ro con el 1ro 
*/

void main(){

    int num1, num2, num3;

    printf("Ingrese el primer numero:.. ");
    scanf("%d", &num1);

    printf("Ingrese el segundo numero:.. ");
    scanf("%d", &num2);

    printf("Ingrese el tercer numero:.. ");
    scanf("%d", &num3);

    printf("\nLa suma entre %d y %d es: %d\n", num1, num3, num1 + num3);

    printf("\nLa resta entre %d y %d es: %d\n", num3, num2, num3 - num2);

    printf("\nLa multiplicacion entre %d y %d es: %d\n", num2, num1, num2 * num1);

    printf("\nLa divison entre %d y %d es: %d", num3, num1, num3 / num1);

}