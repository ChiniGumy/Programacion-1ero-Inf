#include <stdio.h>

void main(){

    float cheque_depositar, total_pagar;
    char nombre[25];

    printf("\nIngrese nombre del cliente:.. ");
    scanf("%s", nombre);

    printf("Ingrese el valor del cheque:.. ");
    scanf("%f", &cheque_depositar);

    total_pagar = cheque_depositar;

    total_pagar = total_pagar - (total_pagar * 0.01) - (total_pagar * 0.03);

    printf("Total a pagar: $%.2f", total_pagar);
}