#include <stdio.h>

/*
    Una camaronera que exporta sus productos por cajas segun la siguiente lista de precio:

    ┌───────────────────────────────────┐
    │  Codigo  │   Tamano   │   Precio  │
    ├──────────│────────────│───────────┤
    │     1    │   Junior   │   $5.00   │
    │     2    │   Jumbo    │   $7.00   │
    │     3    │  Especial  │  $12.00   │
    └───────────────────────────────────┘

    Realice un programa que ingrese el codigo de la caja del camaron y el numero del cajas a exportar, visualice
    automaticamente el tamano, el precio y el total a pagar.
*/

void main(){

    int cantidad_cajas, codigo;
    float total_pagar;

    printf("\n    ----------------------------------- ");
    printf("\n   |  Codigo  |   Tamano   |   Precio  |");
    printf("\n   |----------|------------|-----------|");
    printf("\n   |     1    |   Junior   |   $5.00   |");
    printf("\n   |     2    |   Jumbo    |   $7.00   |");
    printf("\n   |     3    |  Especial  |  $12.00   |");
    printf("\n    ----------------------------------- \n");


    printf("\nIngrese el codigo de caja que va a comprar:.. ");
    scanf("%d", &codigo);

    printf("Ingrese la cantidad de cajas que va a comprar:.. ");
    scanf("%d", &cantidad_cajas);

    if (codigo == 1){
        printf("\nTamano de caja de camarones: Junior\n");
        total_pagar = cantidad_cajas * 5;

    } else if (codigo == 2){
        printf("\nTamano de caja de camarones: Jumbo\n");
        total_pagar = cantidad_cajas * 7;

    } else if (codigo == 3){
        printf("\nTamano de caja de camarones: Especial\n");
        total_pagar = cantidad_cajas * 12;

    } else {
        printf("\nCodigo no existe\n");
    }

    printf("Cantidad de cajas que compro: %d\n", cantidad_cajas);
    printf("Total a pagar: $%.2f\n", total_pagar);

}