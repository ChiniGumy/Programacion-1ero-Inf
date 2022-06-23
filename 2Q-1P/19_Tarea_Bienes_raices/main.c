#include <stdio.h>

/*
    Una empresa de bienes raíces ofrece casas de interés social bajo las siguientes condiciones.
    Si el ingreso del comprador es menor a $3,000.00 la entrada será del 15% del costo de la
    casa y el resto se distribuirá en pagos mensuales a pagar en 10 años, caso contrario, deberá
    pagar de entrada el 30% del costo de la casa y el resto se distribuye en pagos mensuales
*/

void main(){

    float ingresos_comprador, total_pagar, costo_casa, entrada;
   
    printf("\nIngrese los ingesos del comprador:.. ");
    scanf("%f",&ingresos_comprador);

    printf("Ingrese el costo de la casa:.. ");
    scanf("%f",&costo_casa);

    printf("\n=================================================================\n\n");

    if (ingresos_comprador < 3000){

        entrada = costo_casa * 0.15;
        total_pagar = costo_casa - entrada;
        total_pagar = total_pagar / 120;

        printf("El enganche sera de: $%.2f\n",entrada);
        printf("El pago mensual por 10 anos sera de: $%.2f\n",total_pagar);

    } else {

        entrada = costo_casa * 0.30;
        total_pagar = costo_casa - entrada;
        total_pagar = total_pagar / 84;

        printf("La entrada sera de: $%.2f\n", entrada);
        printf("El pago mensual por 10 anos sera de: $%.2f\n",total_pagar);
    }
}