#include <stdio.h>

// Realice un programa que ingrese 3 numeros y presente el mayor.

void main(){

    int a, b, c;

    printf("Ingrese primer numero:.. ");
    scanf("%d", &a);

    printf("Ingrese segundo numero:.. ");
    scanf("%d", &b);

    printf("Ingrese tercer numero:.. ");
    scanf("%d", &c);

    if (a > b){

        if (a > c)
            printf("\nPrimer numero (%d) es mayor", a);
        else {
            printf("\nTercer numero (%d) es mayor", c);
        }

    } else {

        if (b > c)
            printf("\nSegundo numero (%d) es mayor", b);
        else {
            printf("\nTercer numero (%d) es mayor", c);
        } 
    }
}