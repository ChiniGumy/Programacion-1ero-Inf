#include <stdio.h>

/*
    REALICE UN PROGRAMA QUE INGRESE EL NÚMERO DEL MES, EL NÚMERO DE LA SEMANA,
    EL DÍA Y EL AÑO,LUEGO PRESENTE LA FECHA DE LA SIGUIENTE FORMA:
*/

void main(){

    int numero_mes, dia_semana, dia, ano;

    printf("\nIngrese numero de mes:.. ");
    scanf("%d", &numero_mes);

    printf("Ingrese numero del dia en la semana:.. ");
    scanf("%d", &dia_semana);

    printf("Ingrese numero del dia en el mes:.. ");
    scanf("%d", &dia);

    printf("Ingrese el ano:.. ");
    scanf("%d", &ano);

    switch (numero_mes){

        case 1:
            printf("\nMes: Enero");
            break;

        case 2:
            printf("\nMes: Febrero");
            break;

        case 3:
            printf("\nMes: Marzo");
            break;

        case 4:
            printf("\nMes: Abril");
            break;

        case 5:
            printf("\nMes: Mayo");
            break;

        case 6:
            printf("\nMes: Junio");
            break;

        case 7:
            printf("\nMes: Julio");
            break;

        case 8:
            printf("\nMes: Agosto");
            break;

        case 9:
            printf("\nMes: Septiembre");
            break;

        case 10:
            printf("\nMes: Octubre");
            break;

        case 11:
            printf("\nMes: Noviembre");
            break;

        case 12:
            printf("\nMes: Diciembre");
            break;

        default:
            printf("Mes no existe! Ingresar un numero del 1 al 12");
            break;
    }

    switch (dia_semana){

        case 1:
            printf("\nDia de la semana: Lunes");
            break;

        case 2:
            printf("\nDia de la semana: Martes");
            break;

        case 3:
            printf("\nDia de la semana: Miercoles");
            break;

        case 4:
            printf("\nDia de la semana: Jueves");
            break;

        case 5:
            printf("\nDia de la semana: Viernes");
            break;

        case 6:
            printf("\nDia de la semana: Sabado");
            break;

        case 7:
            printf("\nDia de la semana: Domingo");
            break;

        default:
            printf("\nNumero no existe! Ingresar numero del 1 al 7!");
            break;
    }

    printf("\nDia del mes: %d", dia);
    printf("\nAno: %d", ano);
}