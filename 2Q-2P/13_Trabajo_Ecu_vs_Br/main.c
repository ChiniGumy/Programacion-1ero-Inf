#include <stdio.h>
#include <stdlib.h>

void main(){

    #define PRECIO_GENERAL 12
    #define PRECIO_TRIBUNA 18
    #define PRECIO_PALCO 25
    #define PRECIO_SUITE 40

    #define EDAD_MINIMA 18
    #define EDAD_MAXIMA 65

    #define DOSIS_MINIMAS 2
    
    int numero_dosis, edad, codigo, numero_entradas;
    float total_pagar, precio_entrada;
    char socio;

    printf("\nIngrese la edad el hincha:.. ");
    scanf("%d", &edad);

    printf("Ingrese la cantidad de dosis se ha puesto el hincha:.. ");
    scanf("%d", &numero_dosis);

    if (numero_dosis < DOSIS_MINIMAS || edad < EDAD_MINIMA || edad > EDAD_MAXIMA){
        printf("Datos no validos! Terminando programa...");
        exit(1);
    }

    printf("\nIngrese el codigo de la localidad:...\n");
    scanf("%d", &codigo);

    switch (codigo){

        case 1: precio_entrada = PRECIO_GENERAL;
            break;
        
        case 2: precio_entrada = PRECIO_TRIBUNA;
            break;

        case 3: precio_entrada = PRECIO_PALCO;
            break;

        case 4: precio_entrada = PRECIO_SUITE;
            break;

        default: printf("\nCodigo no valido! Terminando programa...\n"); exit(1);
            break;
    }

    printf("\nIngrese numero de entradas a comprar:.. ");
    scanf("%d", &numero_entradas);

    printf("El hincha es socio (s/n):.. ");
    scanf(" %c", &socio);

    total_pagar = precio_entrada * numero_entradas;

    if (socio == 's'){

        total_pagar = total_pagar - (total_pagar * 0.10);
        printf("\nSe aplico un descuento del 10%% por ser socio\n");
    }

    printf("\nPrecio de la entrada: %2.f", precio_entrada);
    printf("\nTotal de entradas: %d", numero_entradas);
    printf("\nTotal a pagar: %.2f", total_pagar);
}