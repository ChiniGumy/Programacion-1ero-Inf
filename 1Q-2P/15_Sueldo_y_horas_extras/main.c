#include <stdio.h>

/*
    Realice un programa que ingrese el nombre de un trabajador el cargo que ocupa y las horas trabajadas,
    se sabe que se gana $5 la hora pero si trabaja horas extras, es decir mas de 40 horas, 
    gana $8 las horas extras, presente el valor a cobrar.
*/

void main(){

    const float paga = 5.00, paga_extra = 8.00;

    char nombre[25], cargo[25];
    float horas_trabajadas, total_pagar;

    printf("\nIngrese nombre del trabajador:.. ");
    scanf("%s", nombre);

    printf("Ingrese el cargo de %s:.. ");
    scanf("%s", cargo);

    printf("Ingrese horas trabajadas:.. ");
    scanf("%f", &horas_trabajadas);

    printf("\nTrabajador: %s", nombre);
    printf("\nCargo: %s", cargo);

    if (horas_trabajadas < 40){
        printf("\n\nPaga por hora: $%.2f", paga);
        total_pagar = paga * horas_trabajadas;
        
    } else {
        printf("\n\nPaga por hora: $%.2f", paga_extra);
        total_pagar = paga_extra * horas_trabajadas;
    }

    printf("\nHoras trabajadas: %.2f", horas_trabajadas);
    printf("\n\nTotal a pagar: $%.2f", total_pagar);

}