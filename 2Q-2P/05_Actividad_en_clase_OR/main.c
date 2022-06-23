#include <stdio.h>

/*
    El siguiente programa visualiza el mensaje "Usted puede jubilarse", cuando el tragbajador tiene
    65 años de edad o mas de 30 años de aporte. Caso contrario se visualiza "Ustes no puede jubilarse".
*/

void main(){

    int edad, aportes;

    printf("\nIngrese edad del civil:.. ");
    scanf("%d", &edad);

    printf("Ingrese los aportes del civil:.. ");
    scanf("%d", &aportes);

    if (edad > 65 || aportes > 30)
        printf("Usted puede jubilarse");
    else
        printf("Usted no puede jubilarse");
}