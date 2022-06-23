#include <stdio.h>

void main(){

    float precio_producto, subtotal, total_pagar, iva;
    char nombre[25], producto [25];
    int cantidad_comprar;

    printf("\nIngrese nombre del cliente:.. ");
    scanf("%s", nombre);

    printf("Ingrese nombre del producto:.. ");
    scanf("%s", producto);

    printf("Ingrese el precio del producto:.. ");
    scanf("%f", &precio_producto);

    printf("Ingrese la cantidad a comprar del producto:.. ");
    scanf("%d", &cantidad_comprar);

    subtotal = cantidad_comprar * precio_producto;
    iva = subtotal * 0.12;
    total_pagar = subtotal + iva;

    printf("\nSubtotal: %.2f", subtotal);
    printf("\nIva: %.2f", iva);
    printf("\nTotal a pagar: %.2f", total_pagar);
}