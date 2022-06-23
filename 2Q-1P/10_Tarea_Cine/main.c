#include <stdio.h> 

/*
    Realice un programa que ingrese el nombre de la pelicula que va a ver, la sala, el precio y la 
    cantidad de entradas, calcule el subtotal, el iva , el 3% al ice y el total a pagar. Presente 
    el nombre del cliente, la sala y el precio a pagar. Ejemplo: 
    
    el usuario XXXXXXXXXX , compro en la sala XXXXXX, y debe cancelar, XXXX.
    Gracias por su compra.
*/

void main(){

    char nombre_cliente[50], nombre_pelicula[50];
    int sala_cine, cantidad_entradas;
    float precio_entrada, subtotal, iva, ice, total_pagar;

    printf(
        "\nCartelera 29 de Octubre del 2021\n"
        "Sala 1: Star Wars\n"
        "Sala 2: Venom\n"
        "Sala 3: Raya\n"
        "Sala 4: Misfit\n"
        "Sala 5: Your Name\n"
    );

    printf("\nIngrese el nombre del cliente:.. ");
    scanf("%s", &nombre_cliente);

    printf("Ingrese el nombre de la pelicula:.. ");
    scanf("%s", &nombre_pelicula);

    printf("Ingrese la sala de la pelicula:.. ");
    scanf("%d", &sala_cine);

    printf("Ingrese precio de la entrada:.. ");
    scanf("%f", &precio_entrada);

    printf("Ingrese cantidad de las entradas:.. ");
    scanf("%d", &cantidad_entradas);

    subtotal = precio_entrada * cantidad_entradas;

    iva = subtotal * 0.12;

    ice = subtotal * 0.03;

    total_pagar = subtotal + iva + ice;


    printf("\n============ Factura ============\n");
    
    printf("\nCliente:                %s\n", nombre_cliente);
    printf("Pelicula:               %s\n", nombre_pelicula);
    printf("Precio de entrada:      %.2f\n", precio_entrada);
    printf("Cantidad de entradas:   %d\n", cantidad_entradas);
    printf("Subtotal:               %.2f\n", subtotal);
    printf("Total a pagar:          %.2f", total_pagar);
}