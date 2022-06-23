#include <stdio.h>

/*
    Realice un programa que permita ingresar el peso de una persona y la altura o estatura,
    luego obtener su imc y finalmente presentar el dialogo segun la siguiente tabla:
*/

void main(){

    float peso, altura, imc;

    printf("\n  ------------------------------------------------------------------------- ");
    printf("\n |     Indice masa corporal    |              Tu rango                     |");
    printf("\n | ----------------------------------------------------------------------- |");
    printf("\n |          15 O MENOS         |   DELGADEZ MUY SEVERA                     |");
    printf("\n |          15 - 15.9          |   DELGADEZ SEVERA                         |");
    printf("\n |          16 - 18.4          |   DELGADEZ                                |");
    printf("\n |          18.5 - 24.9        |   PESO SALUDABLE                          |");
    printf("\n |          25 - 29.9          |   SOBREPESO                               |");            
    printf("\n |          30 - 34.9          |   OBESIDAD MODERADA                       |");
    printf("\n |          35 - 39.9          |   OBESIDAD SEVERA                         |");
    printf("\n |          40 O Mas           |   OBESIDAD MUY SEVERA (OBESIDAD MORBIDA)  |");
    printf("\n  ------------------------------------------------------------------------- ");

    printf("\n\nIngrese su peso:.. ");
    scanf("%f", &peso);

    printf("Ingrese su altura:.. ");
    scanf("%f", &altura);

    imc = peso / (altura * altura);

    if (imc <= 15)
        printf("\nDelgadez muy severa");

    else if (imc >= 16 && imc <= 18.4)
        printf("\nDelgadez");

    else if (imc >= 18.5 && imc <= 24.9)
        printf("\nPeso saludable");

    else if (imc >= 25 && imc <= 29.9)
        printf("\nSobrepeso");

    else if (imc >= 30 && imc <= 34.9)
        printf("\nObesidad moderada");

    else if (imc >= 35 && imc <= 39.9)
        printf("\nObesidad severa");

    else 
        printf("\nObesidad muy severa (Obesidad morbida)");

}