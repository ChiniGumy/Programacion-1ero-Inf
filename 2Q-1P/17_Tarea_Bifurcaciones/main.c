#include <stdio.h>
#include <stdlib.h>

void ejercicio_1();
void ejercicio_2();

void main(){

    printf("\n================ Ejercicio #1 ================\n\n");
    
    ejercicio_1();

    printf("\n\n================ Ejercicio #2 ================\n");

    ejercicio_2();
}

/* 
    La ley del anciano contempla un descuento del 50% en el valor de los servicios púbicos y privados para 
    todas las personas mayores o iguales a 65 años. Elabore un programa que lea el número de meses que adeuda
    una persona en impuestos municipales y el valor a pagar. Además, lea su edad. 
    Visualice el total a pagar y el total del descuento si es que hay descuentos. 
*/

void ejercicio_1(){

    const float DESCUENTO = 0.50; const int TERCERA_EDAD = 65;

    char nombre[25];
    int edad, meses_adeudados;
    float valor_mensual, total_pagar;

    printf("Ingrese el nombre del civil:.. ");
    scanf("%s", nombre);

    printf("Ingrese la edad %s:.. ", nombre);
    scanf("%d", &edad);

    printf("Meses adeudados %s:.. ", nombre);
    scanf("%d", &meses_adeudados);

    printf("Valor mensual a pagar %s:.. ", nombre);
    scanf("%f", &valor_mensual);

    total_pagar = meses_adeudados * valor_mensual;

    if (edad >= TERCERA_EDAD){
        printf("\nSe aplico un descuento del 50%% por ser mayor de edad\n");
        total_pagar = total_pagar - (total_pagar * DESCUENTO);
    }

    printf("\nTotal a pagar: $%.2f\n", total_pagar);
}

/*
    El GRAN CHEF por aniversario ofrece a sus clientes un descuento del 25% solo a los consumos
    superiores a $25 y un 15% de recargo a todos sus valores asi como el impuesto al valor agregado.
*/

void ejercicio_2(){

    const float DESCUENTO = 0.25, RECARGO = 0.15, IMPUESTO = 0.12;
    float consumo, total_pagar, impuesto_pagar;

    printf("Ingrese el consumo total:.. ");
    scanf("%f", &consumo);

    impuesto_pagar = consumo * IMPUESTO;

    if (consumo > 25){
        printf("Descuento de un 25%% al consumo y una recarga del 15%% al impuesto");
        consumo -= consumo * DESCUENTO;
        impuesto_pagar -= impuesto_pagar * RECARGO;
    }

    total_pagar = consumo + impuesto_pagar;

    printf("\nEl consumo a pagar es:      $%.2f", consumo);
    printf("\nEl impueso a pagar es:      $%.2f", impuesto_pagar);
    printf("\nEl valor total a pagar es:  $%.2f", total_pagar);

    
}
