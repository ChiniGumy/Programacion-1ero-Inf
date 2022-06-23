#include <stdio.h>

/*
    Unas camisas se venden a $20 cada una. Elabore un programa que lea el número de camisas,
    a comprar y luego presente el subtotal, el 12% del iva y el total a pagar.
*/

void main(){
    
    const int PRECIO_CAMISA = 20;
    const int PORCENTAJE_IVA = 0.12;

    int cantidad_comprar;
    float subtotal, total_pagar, iva;


    printf("\nPrecio de Camisas: $20");
    printf("\nIngrese numero de camisetas a comprar:.. ");
    scanf("%d", &cantidad_comprar);

    subtotal = cantidad_comprar * PRECIO_CAMISA;
    iva = subtotal * 0.12;
    total_pagar = subtotal + iva;

    printf("\n============ factura ============");

    printf("\nCamisetas Compradas:    %d\n", cantidad_comprar);
    printf("Subtotal:               %.2f\n", subtotal);
    printf("Iva:                    %.2f\n", iva);
    printf("Total a pagar:          %.2f\n", total_pagar);
}