#include <stdio.h>

// Realice un programa que ingrese la nota de 20 alumnos y presente la nota y al final su promedio

void main(){

    float nota, nota_total;

    for (int i = 1; i <= 20; i++){

        printf("\nIngrese la nota del alumno [%d]:  ", i);
        scanf("%f", &nota);

        printf("Nota alumno [%d]:  %.2f\n", i, nota);

        nota_total = nota_total + nota;

        printf("Nota salon: %.2f\n", nota_total);

    }
    printf("\nPromedio del salon: %.2f\n", nota_total / 20);
}