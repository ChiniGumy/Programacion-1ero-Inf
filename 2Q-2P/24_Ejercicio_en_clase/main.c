#include <stdio.h>

/*

ingresar el nombre completo del estudiante, el curso, la materia, y la nota del 1 y 2 Quim.

ingresar num de estudiante por curso


*/


void main(){

    float nota_1Q, nota_2Q, nota_total, notas_estudiantes;
    char nombre[30], curso[30], materia[30];
    int cantidad_estudiantes;


    printf("\nIngrese el curso:  ");
    scanf(" %[^\n]", curso);
    
    printf("Ingrese la materia:  ");
    scanf(" %[^\n]", materia);

    printf("Ingrese cuantos estudiantes tiene el curso:  ");
    scanf("%d", &cantidad_estudiantes);

    for (int i = 1; i <= cantidad_estudiantes; i++){

        printf("\nIngrese nombre del estudiante [%d]:  ", i);
        scanf(" %[^\n]", nombre);

        printf("Ingrese nota del primer quimestre:  ");
        scanf("%f", &nota_1Q);

        printf("Ingrese nota del segundo quimestre:  ");
        scanf("%f", &nota_2Q);

        nota_total = (nota_1Q + nota_2Q) / 2;
        notas_estudiantes += nota_total;

        printf("\nEstudiante: %s", nombre);
        printf("\nPromedio: %.2f", nota_total);

        if (nota_total <= 6)
            printf("\nSupletorio\n");
        
        else
            printf("\nAprobado\n");

        printf("\n-------------------------------------------------------\n");

    }

    printf("\nMateria: %s", materia);
    printf("\nCurso: %s", curso);
    printf("\nAlumnos: %d", cantidad_estudiantes);

    printf("\nPromedio total: %.2f", notas_estudiantes / cantidad_estudiantes);

}