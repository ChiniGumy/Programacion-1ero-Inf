#include <stdio.h>

/*
    Cuando una variable es sometida a varias condiciones es recomendable utilizar la estructura SWITCH - CASE.
    La orden CASE permite evaluar varias condiciones y ejecutar la primera que se resulte.
*/

void main(){

    int numero;

    printf("\nElige un numero del 1 al 3:.. ");
    scanf("%d", &numero);

    switch (numero){

        case 1:
            printf("Escribiste 1");
            break;
        
        case 2:
            printf("Escribiste 2");
            break;

        case 3:
            printf("Escribiste 3");
            break;


        default:
            printf("Escribiste un numero menor a 3 o mayor a 3");
            break;
    }
}