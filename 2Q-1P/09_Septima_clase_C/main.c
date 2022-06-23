#include <stdio.h>

void main(){

    float nota_parcial_1, nota_parcial_2;
    char nombre_alumno[25];
    char paralelo[25], curso[25];

    float nota_final;

    printf("\nIngrese el nombre del alumno:.. ");
    scanf("%s", &nombre_alumno);

    printf("Ingrese el curso de %s:.. ", nombre_alumno);
    scanf("%s", &curso);

    printf("Ingrese el paralelo de %s:.. ", nombre_alumno);
    scanf("%s", &paralelo);

    printf("\n---------------------------------------------------\n");

    printf("\nIngrese nota del primer parcial de %s:.. ", nombre_alumno);
    scanf("%f", &nota_parcial_1);

    printf("Ingrese nota del segundo parcial de %s:.. ", nombre_alumno);
    scanf("%f", &nota_parcial_2);

    printf("\n---------------------------------------------------\n");

    nota_final = (nota_parcial_1 + nota_parcial_2) / 2;

    printf("\nEstudiante: %s\n", nombre_alumno);
    printf("Curso: %s\n", curso);
    printf("Paralelo: %s\n", paralelo);

    printf("\nNota 1er parcial: %.2f\n", nota_parcial_1);
    printf("Nota 2do parcial: %.2f\n", nota_parcial_2);
    printf("Nota final: %.2f\n", nota_final);
    printf("\n80%% de la nota final: %.2f", nota_final * 0.8);
}