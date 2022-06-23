#include <stdio.h>

/*
    En una exportadora de camarones tiene diferentes clases de camarones que se muestran en la siguiente tabla.

    Realice un programa que ingrese la clase del camarón y visualice su clase y precio por kilos,
    luego ingrese en número de kilos a exportar y presente el valor a cancelar.

*/


void main(){

    const float Precio_Kilo_A = 3.00, Precio_Kilo_B = 5.00, Precio_Kilo_C = 7.00, Precio_Kilo_D = 12.00;

    int cantidad_kilos;
    float total_pagar;
    char codigo; char clase[25];

    printf("\n ------------------------------------------ ");
    printf("\n|  Codigo  |   Tamano         |   Precio   |");
    printf("\n|----------|------------------|------------|");
    printf("\n|     A    |   Normal         |    $3.00   |");
    printf("\n|     B    |   Medium         |    $5.00   |");
    printf("\n|     C    |   Premium        |    $7.00   |");
    printf("\n|     D    |   Super Premium  |   $12.00   |");
    printf("\n ------------------------------------------ ");

    printf("\n\nIngrese codigo de clase:.. ");
    scanf(" %c", &codigo);

    printf("Ingrese la cantidad de kilos a comprar:.. ");
    scanf("%d", &cantidad_kilos);

    if (codigo == 'A' || codigo == 'a'){
        total_pagar = cantidad_kilos * Precio_Kilo_A;
        printf("\nClase de camaron: Normal");
        printf("\nPrecio por kilo: $%.2f",Precio_Kilo_A);

    } else if (codigo == 'B' || codigo == 'b'){
        total_pagar = cantidad_kilos * Precio_Kilo_B;
        printf("\nClase de camaron: Medium");
        printf("\nPrecio por kilo: $%.2f",Precio_Kilo_B);

    } else if (codigo == 'C' || codigo == 'c'){
        total_pagar = cantidad_kilos * Precio_Kilo_C;
        printf("\nClase de camaron: Premium");
        printf("\nPrecio por kilo: $%.2f",Precio_Kilo_C);

    } else if (codigo == 'D' || codigo == 'd'){
        total_pagar = cantidad_kilos * Precio_Kilo_D;
        printf("\nClase de camaron: Super Premium");
        printf("\nPrecio por kilo: $%.2f",Precio_Kilo_D);

    } else { printf("\nCodigo no existe...");}

    printf("\nCantidad de kilos: %d", cantidad_kilos);
    printf("\nTotal a pagar: $%2.f", total_pagar);
}