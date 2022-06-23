#include <stdio.h>

void main(){

    char nombre_prducto[50];
    int cantidad;
    float precio;
    float subtotal, iva, total_pagar;

    printf("\nIngresa nombre del producto:.. ");
    scanf("%s", &nombre_prducto);

    printf("\nIngresa precio del producto:.. ");
    scanf("%f", &precio);

    printf("\nIngresa la cantidad del producto a comprar:.. ");
    scanf("%d", &cantidad);

    subtotal = precio * cantidad;
    iva = subtotal * 0.12;

    total_pagar = subtotal + iva;

    printf("\nEl subtotal a pagar es:     %.2f$\n", subtotal);
    printf("El iva a pagar es:          %.2f$\n", iva);
    printf("El total a pagar es:        %.2f$\n", total_pagar);
}