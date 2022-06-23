#include <stdio.h>

/*
    Realice un programa que ingrese el nombre del estudiante, el curso, la materia, la nota del primer quimestre
    y segundo quimestre, calcule el promedio:

        -   Si la nota es mayor o igual a 7 presenta mensaje 'aprobado'.
        -   Si la nota mayor o igual a 5 presente mensaje 'supletorio'.
        -   Si la nota es menor a 5 presente mensaje 'remedial'.
*/


void main(){

    char estudiante[25], materia[25], curso[25];
    float nota_1Q, nota_2Q, nota_final;

    printf("\nIngrese el nombre del estudiante:.. ");
    scanf("%s", estudiante);

    printf("Ingrese el curso de %s:.. ", estudiante);
    scanf("%s", curso);

    printf("Ingrese la materia:.. ");
    scanf("%s", materia);

    printf("\nIngrese nota del primer quimestre:.. ");
    scanf("%f", &nota_1Q);

    printf("Ingrese nota del segundo quimestre:.. ");
    scanf("%f", &nota_2Q);

    nota_final = (nota_1Q + nota_2Q) / 2;

    if (nota_final >= 7)
        printf("Aprobado - %.2f", nota_final);

    else if (nota_final >= 5)
        printf("Supletorio - %.2f", nota_final);

    else
        printf("Remedial - %.2f", nota_final);

}