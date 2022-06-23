#include <stdio.h>

/*
    Realice un programa que ingrese el nombre del cliente, el nombre del producto, el precio y la cantidad.
    Calcule el precio a pagar, si la persona es de la tercera edad paga el 50% de acuerdo a la ley.
    Finalmente, presente el total a pagar.
*/

int main(){

    const int TERCERA_EDAD = 65;

    char nombre_cliente[30], nombre_producto[30]; 
    int edad_cliente;

    float precio_producto;
    int cantidad_comprar;
    
    char descuento;
    float total_pagar;


    // ----- Cliente ----- //

    printf("Ingrese nombre del cliente:.. ");
    scanf("%s", &nombre_cliente);

    printf("Ingrese edad del cliente:.. ");
    scanf("%d", &edad_cliente);

    // ----- Producto ----- //

    printf("Ingrese nombre del producto:.. ");
    scanf("%s", &nombre_producto);

    printf("Ingrese precio del producto:.. ");
    scanf("%f", &precio_producto);

    printf("Ingrese cantidad del producto:.. ");
    scanf("%d", &cantidad_comprar);


    // ----- Condicion ----- //

    total_pagar = precio_producto * cantidad_comprar;

    if (edad_cliente >= TERCERA_EDAD){
        total_pagar = total_pagar / 2;
        descuento = 's';
    } else {
        descuento = 'n';
    }

    // ------ Factura ------ //

    printf("\n============ Factura ============");
    printf("\nCliente:        %s", nombre_cliente);
    printf("\nEdad:           %s", nombre_cliente);
    printf("\nProducto:       %s", nombre_producto);
    printf("\nPrecio:         %.2f", precio_producto);
    printf("\nCantidad:       %d", cantidad_comprar);

    printf("\nDescuento:      %c", descuento);

    printf("\n");
    printf("\nTotal a Pagar   %.2f", total_pagar);

}