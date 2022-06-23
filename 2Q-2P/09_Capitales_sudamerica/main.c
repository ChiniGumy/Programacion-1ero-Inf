#include <stdio.h>

/*
    REALICE UN PROGRAMA QUE VISUALICE LA CAPITAL DE LOS PAISES DE SUDAMERICA SEGÚN
    SEA EL CÓDIGO DE INGRESO SEGÚN LA SIGUENTE TABLA
*/


void main(){

    int codigo;

    printf("Ingrese Codigo del pais:.. ");
    scanf("%d", &codigo);

    switch (codigo){

        case 1:
            printf("Argentina: Buenos Aires");
            break;

        case 2:
            printf("Brasil: Brasilia");
            break;
        
        case 3:
            printf("Ecuador: Quito");
            break;

        case 4:
            printf("Chile: Santigo");
            break;

        case 5:
            printf("Colombia: Bogota");
            break;

        case 6:
            printf("Peru: Lima");
            break;
                    
        case 7:
            printf("Venezuela: Caracas");
            break;
                    
        case 8:
            printf("Uruguay: Montevideo");
            break;
                    
        case 9:
            printf("Paraguay: Asuncion");
            break;      
            
        case 10:
            printf("Bolivia: Sucre");
            break;      

        default:
            printf("Codigo no existe, ingrese un codigo del 1 al 10");
            break;
    }

}