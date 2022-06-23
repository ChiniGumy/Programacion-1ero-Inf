#include <stdio.h>

/*
    En la unidad educativa Espiritu Santo, se aplica un descuento del 30%, sabiendo que la pension es de
    400 dolares mensuales, cuando el padre de familia tiene mas de 2 hijos estudiando en el colegio. Realice
    un programa que ingrese el nombre del representante y el numero de hijos que estudian, luego presente
    el valor a pagar.
*/

void main(){

    const float pension_mensual = 400, descuento = 0.30; const int num_hijos = 2;

    char nombre_representante[30];
    int numero_hijos;
    float precio_pagar;

    printf("\nIngrese el nombre del representante:.. ");
    scanf("%s", nombre_representante);

    printf("Ingrese el numero de hijos tiene %s:.. ", nombre_representante);
    scanf("%d", &numero_hijos);

    precio_pagar = numero_hijos * pension_mensual;

    printf("\n==============================================\n");

    if (numero_hijos > 2){
        printf("\nSe aplico un descuento de 30%% por tener %d hijos matriculados", numero_hijos);
        precio_pagar = precio_pagar - (precio_pagar * descuento);
    }

    printf("\n\nEl total a pagar es: $%.2f", precio_pagar);
}