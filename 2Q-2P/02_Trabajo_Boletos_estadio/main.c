#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*
    Por motivos de la eñiminatoria, se hace una revision de precios
    de las localidades del estadio segun la tabla siguiente:

    ---------------------------------------
    |  Codigo  |   Localidad   |  Precio  |
    |----------|---------------|----------|
    |     A    |    General    |  $15.00  |
    |     B    |  Preferencia  |  $20.00  |
    |     C    |    Tribuna    |  $30.00  |
    |     D    |     Palco     |  $35.00  |
    |     E    |     Suite     |  $45.00  |
    ---------------------------------------

    Realice un programa que ingrese el nombre del aficionado, el número de cédula, la edad,
    el código de la localidad, el número de entradas a comprar y el rival a jugar.

    Calcule y visualice el total a pagar sabiendo que hay un impuesto del 5% al deporte.
*/

void main(){

    const float PRECIO_GENERAL = 15.0, PRECIO_PREFERENCIA = 20.0, PRECIO_TRIBUNA = 30.0,
                PRECIO_PALCO = 35.0, PRECIO_SUITE = 45.0, PORCENTAJE_DEPORTE = 0.05;

    char local[25], visitante[25], nombre[25], localidad[25];
    char codigo;
    int cedula, edad, entradas;
    float total_pagar;


    printf("\n---------------------- Equipos ----------------------\n");

    printf("\nIngrese el equipo local:.. ");
    scanf(" %s", local);

    printf("Ingrese el equipo visitante:.. ");
    scanf(" %s", visitante);

    printf("\n\n---------------------- Hincha ----------------------\n");

    printf("\nIngrese el nombre del hincha:.. ");
    scanf(" %s", nombre);

    printf("Ingrese la cedula de %s:.. ", nombre);
    scanf("%d", &cedula);

    printf("\n\n---------------------- Entrada ----------------------\n");

    printf("\n      ------------------------------------- ");
    printf("\n     |  Codigo  |   Localidad   |  Precio  |");
    printf("\n     |----------|---------------|----------|");
    printf("\n     |     A    |    General    |  $15.00  |");
    printf("\n     |     B    |  Preferencia  |  $20.00  |");
    printf("\n     |     C    |    Tribuna    |  $30.00  |");
    printf("\n     |     D    |     Palco     |  $35.00  |");
    printf("\n     |     E    |     Suite     |  $45.00  |");
    printf("\n      -------------------------------------\n");


    printf("\nIngrese el codigo de la localidad:.. ");
    scanf(" %c", &codigo);

    printf("Ingrese el numero de entradas a comprar:.. ");
    scanf("%d", &entradas);

    if (codigo == 'a' || codigo == 'A'){
        total_pagar = PRECIO_GENERAL;
      
    } else if (codigo == 'b' || codigo == 'B'){
        total_pagar = PRECIO_PREFERENCIA;
        
    } else if (codigo == 'c' || codigo == 'C'){
        total_pagar = PRECIO_TRIBUNA;

    } else if (codigo == 'd' || codigo == 'D'){
        total_pagar = PRECIO_PALCO;

    } else if (codigo == 'e' || codigo == 'E'){
        total_pagar = PRECIO_SUITE;

    } else { printf("Codigo no existe..."); }

    printf("\n\n---------------------- Factura ----------------------\n");
    
    printf("\nPartido: %s vs %s", local, visitante);

    printf("\n\nLocalidad: %c", codigo);
    printf("\nCantidad de entradas: %d", entradas);

    printf("\n\nSubtotal:      $%2.f", total_pagar * entradas);
    printf("\nTotal a pagar: $%.2f\n", total_pagar * entradas + (total_pagar * 0.05));
}  