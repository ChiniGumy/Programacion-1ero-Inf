#include <stdio.h>

void main(){

    #define PRECIO_GENERAL 20
    #define PRECIO_TRIBUNA 30
    #define PRECIO_PALCO 40
    #define PRECIO_SUITE 50

    int codigo, numero_entradas;
    float total_pagar, precio_entrada;

    int pregunta ,continuar = 1, general=0, tribuna=0, palco=0, suite=0, total_hinchas=0;

    while (continuar == 1){

        printf("\nIngrese el codigo de la localidad:  ");
        scanf("%d", &codigo);

        printf("\nIngrese numero de entradas a comprar:.. ");
        scanf("%d", &numero_entradas);

        switch (codigo){

            case 1:
                precio_entrada = PRECIO_GENERAL;
                general += numero_entradas;
                break;
            
            case 2:
                precio_entrada = PRECIO_TRIBUNA;
                tribuna += numero_entradas;
                break;

            case 3:
                precio_entrada = PRECIO_PALCO;
                palco += numero_entradas;
                break;

            case 4:
                precio_entrada = PRECIO_SUITE;
                suite += numero_entradas;
                break;

            default:
                printf("\nCodigo no valido! Terminando programa...\n");
                break;
        }

        total_pagar = precio_entrada * numero_entradas;

        printf("\nPrecio de la entrada: %2.f", precio_entrada);
        printf("\nTotal de entradas: %d", numero_entradas);
        printf("\nTotal a pagar: %.2f", total_pagar);

        printf("\n\nDesea continuar? (1 = si / 0 = no) :  ");
        scanf("%d", &pregunta);

        if (pregunta == 1){
            continuar = 1;

        } else {
            continuar = 0;
        }

    }

    printf("\n\nHinchas en general: %d", general);
    printf("\nTotal ganancia general: $ %d", general * PRECIO_GENERAL);

    printf("\n\nHinchas en tribuna: %d", tribuna);
    printf("\nTotal ganancia tribuna: $ %d", tribuna * PRECIO_TRIBUNA);

    printf("\n\nHinchas en palco: %d", palco);
    printf("\nTotal ganancia palco: $ %d", palco * PRECIO_PALCO);

    printf("\n\nHinchas en suite: %d", suite);
    printf("\nTotal ganancia suite: $ %d", suite * PRECIO_SUITE);

    printf("\n\nHinchas en total: %d", general + tribuna + palco + suite);
    
    printf("\nGanancia total: $ %d", (general * PRECIO_GENERAL) + (tribuna * PRECIO_TRIBUNA) +
    (palco * PRECIO_PALCO) + (suite * 50));

}