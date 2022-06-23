#include <stdio.h>

/*

    ┌────────────────────────────────────────────────────────┐
    │  Codigo  |   Tipos de Camarones  |   Precio por libra  │
    ├────────────────────────────────────────────────────────┤
    │    1     |       Extra           |       $  3.50       │
    │    2     |       Premium         |       $  8.50       │
    │    3     |       Super Premium   |       $ 12.50       │
    └────────────────────────────────────────────────────────┘
    
*/


void main(){

    int codigo, kilos_comprar;
    float total_pagar;

    printf("\nIngrese el Codigo del tipo de camaron:.. ");
    scanf("%d", &codigo);

    printf("Ingrese los Kilos a comprar:.. ");
    scanf("%d", &kilos_comprar);

    switch (codigo){
            
        case 1:
            printf("\nTipo Extra - Precio: $3.50\n");
            total_pagar = 3.50 * kilos_comprar;
            break;
        
        case 2:
            printf("\nTipo Premium - Precio: $8.50\n");
            total_pagar = 8.50 * kilos_comprar;
            break;

        case 3:
            printf("\nTipo Super Premium - Precio: $12.50\n");
            total_pagar = 12.50 * kilos_comprar;
            break;

        default:
            printf("Codigo no valido!");
            break;
    }

    printf("Total a pagar: $%.2f", total_pagar);

}