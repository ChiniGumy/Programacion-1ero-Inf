#include <stdio.h>

/* 
    Realice un programa que ingrese el nombre del trabajador, el sueldo por horas y las horas trabajadas, 
    calcule y visualice el sueldo, el descuento al IESS(9.35) y el total a recibir.
*/

void main(){

    char nombre_trabajador[50];
    float horas_trabajadas, sueldo_por_pagar;
    float total_recibir, subtotal, IESS;

    printf("\nIngrese el nombre del trabajador:.. ");
    scanf("%s", &nombre_trabajador);

    printf("\nIngrese las horas trabajadas:.. ");
    scanf("%f", &horas_trabajadas);

    printf("\nIngrese el sueldo por hora:.. ");
    scanf("%f", &sueldo_por_pagar);

    subtotal = horas_trabajadas * sueldo_por_pagar;
    IESS = subtotal * 0.0935;
    total_recibir = subtotal - IESS;


    printf("\n       Trabajador:      %s\n", nombre_trabajador);
    printf("Horas que trabajo:      %.2f", horas_trabajadas);

    printf("\n-----------------------------------\n");

    printf("           Sueldo:      %.2f $\n", subtotal);
    printf("   Aporte al IESS:      %.2f $\n", IESS);
    printf("     Sueldo Total:      %.2f $", total_recibir);
}