#include <stdio.h>

// Realice un programa que ingrese 5 valores y presente el mayor

void main(){

    int num1, num2, num3, num4, num5;

    printf("Ingrese primer numero:.. ");
    scanf("%d", &num1);

    printf("Ingrese segundo numero:.. ");
    scanf("%d", &num2);

    printf("Ingrese tercer numero:.. ");
    scanf("%d", &num3);

    printf("Ingrese cuarto numero:.. ");
    scanf("%d", &num4);

    printf("Ingrese quinto numero:.. ");
    scanf("%d", &num5);

    if (num1 > num2 && num1 > num3 && num1 > num4 && num1 > num5){
        printf("\nPrimer numero (%d) es mayor", num1);

    } else if (num2 > num1 && num2 > num3 && num2 > num4 && num2 > num5){
        printf("\nSegundo numero (%d) es mayor", num2);

    } else if (num3 > num1 && num3 > num2 && num3 > num4 && num3 > num5){
        printf("\nTercer numero (%d) es mayor", num3);

    } else if (num4 > num1 && num4 > num2 && num4 > num3 && num4 > num5){
        printf("\nCuarto numero (%d) es mayor", num4);
        
    } else {
        printf("\nQuinto numero (%d) es mayor", num5);
    }
}