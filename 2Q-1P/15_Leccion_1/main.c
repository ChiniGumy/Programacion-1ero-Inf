#include <stdio.h>
#include <math.h>

void main(){

    float a, b;
    float formula;

    printf("\nIngresar primera cantidad:.. ");
    scanf("%f", &a);

    printf("Ingresar segunda cantidad:.. ");
    scanf("%f", &b);

    formula = (pow(a, 2)) + (2 * a * b) + (pow(b, 2));

    printf("\nExpresion:  %.2f^2 + 2(%.2f)(%.2f) + %.2f^2", a, a, b, b);
    printf("\nResultado:  %.2f", formula);
}