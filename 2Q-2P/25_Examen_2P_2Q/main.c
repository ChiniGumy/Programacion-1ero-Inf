#include <stdio.h>

/*

    Realice un programa donde se ingrese la nota final de 10 alumnos y su promedio ,

    Ingrese el nombre  y curso  y materia completo del alumno

    Ingrese la nota del alumno 
    
    Si tiene menos de 7 presente mensaje “REPROBADO”. Caso contrario presente mensaje “APROBADO”.

    finalmente, presente el promedio del curso de las notas.

*/

void main(){

    float nota_alumno, nota_curso;
    char nombre[30], curso[30], materia[30];

    printf("\nIngrese el curso:  ");
    scanf(" %[^\n]", curso);

    printf("Ingrese la materia:  ");
    scanf(" %[^\n]", materia);

    for (int i = 1; i <= 10; i++){

        printf("\nIngrese nombre del alumno [%d]:  ", i);
        scanf(" %[^\n]", nombre);

        printf("Ingrese nota de %s:  ", nombre);
        scanf("%f", &nota_alumno);

        printf("\nAlumno: %s", nombre);
        printf("\nNota: %.2f", nota_alumno);

        nota_curso += nota_alumno;

        if (nota_alumno >= 7)
            printf("\nAprobado\n");
        else
            printf("\nReprobado\n");

        printf("\n------------------------------------------\n");

    }

    printf("\nCurso: %s", curso);
    printf("\nMateria: %s", materia);

    printf("\nPromedio del curso: %.2f", nota_curso / 10);

}