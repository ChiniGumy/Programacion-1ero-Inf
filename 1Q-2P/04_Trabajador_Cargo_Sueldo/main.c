#include <stdio.h>

/*
    Realice un programa que ingrese el nombre de un trabajador, el cargo y el sueldo, si el sueldo es mayor a
    400$ presentar el mensaje, no se paga trasnporte' caso contrario presenta mensaje 'se paga trasnporte'.
    Sabiendo que por trasnporte se adiciona $50, presentar, valor a cobrar.
*/

void main(){

    char nombre_trabajador[20], cargo_trabajador[20];
    float sueldo_trabajador, valor_cobrar;

    printf("\nIngrese el nombre del trabajador:.. ");
    scanf("%s", &nombre_trabajador);

    printf("Ingrese el cargo de %s:.. ", nombre_trabajador);
    scanf("%s", &cargo_trabajador);

    printf("Ingrese el sueldo de %s:.. ", nombre_trabajador);
    scanf("%f", &sueldo_trabajador);

    // ----- Logica ----- //

    valor_cobrar = sueldo_trabajador;

    if (valor_cobrar >= 400){
        printf("\nno se paga trasporte\n");
    } else {
        printf("\nSe paga transporte\n");
        valor_cobrar = valor_cobrar + 50;
    }

    printf("sueldo a cobrar: $%.2f", valor_cobrar);
}