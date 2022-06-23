#include <stdio.h>

/* 
    Realice un programa que ingrese el nombre de un alumno, el curso y la nota de los dos quimestres,
    luego sume y divida para dos. Si la nota final es 10 presente el mensaje "exonerado",caso contrario
    finalice el programa.
*/

void main(){


    char nombre_alumno[20], curso[35];
    float nota_1Q, nota_2Q;
    float nota_final;

    printf("\nIngrese nombre del alumno:.. ");
    scanf("%s", &nombre_alumno);

    printf("Ingrese curso de %s:.. ", nombre_alumno);
    scanf("%s", &curso);

    printf("Ingrese nota del primer quimestre:.. ");
    scanf("%f", &nota_1Q);

    printf("Ingrese nota del segundo quimestre:.. ");
    scanf("%f", &nota_2Q);

    nota_final = (nota_1Q + nota_2Q) / 2;

    if (nota_final == 10){
        printf("Exonerado");
    } else {
        printf("Terminando programa...");
    }

}