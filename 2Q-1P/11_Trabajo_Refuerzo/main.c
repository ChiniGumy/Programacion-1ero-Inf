#include <stdio.h>

/*
    En cierto colegio, el promedio quimestral se calcula de la siguiente manera: 

    - 10% de la nota es el cuaderno al día.
    - 30% las lecciones.
    - 20% los deberes.
    - 40% los exámenes. 

    Si todas las calificaciones son sobre 10.
    Elabore un programa que ingrese el nombre del alumno, y las notas del cuaderno, lección, deberes y exámenes.
    visualice el promedio quimestral. 
*/

void main(){

    char nombre_alumno[50];
    float cuaderno, lecciones, deberes, examenes, quimestre;
    float p_cuaderno, p_lecciones, p_deberes, p_examenes, p_quimestre;
    
    p_cuaderno = 0.10;
    p_lecciones = 0.30;
    p_deberes = 0.20;
    p_examenes = 0.40;

    printf("Ingrese nombre del estudiante:.. ");
    scanf("%s", nombre_alumno);

    printf("Ingrese nota del cuaderno:.. ");
    scanf("%f", &cuaderno);

    printf("Ingrese nota de lecciones:.. ");
    scanf("%f", &lecciones);

    printf("Ingrese nota de deberes:.. ");
    scanf("%f", &deberes);

    printf("Ingrese nota de examenes:.. ");
    scanf("%f", &examenes);

    cuaderno = cuaderno * p_cuaderno;
    lecciones = lecciones * p_lecciones;
    deberes = deberes * p_deberes;
    examenes = examenes * p_examenes;

    quimestre = cuaderno + lecciones + deberes + examenes;
    
    printf("\n                 Alumno:     %s\n", nombre_alumno);
    printf("\n      Promedio cuaderno:     %.2f\n", cuaderno);
    printf("     Promedio lecciones:     %.2f\n", lecciones);
    printf("       Promedio deberes:     %.2f\n", deberes);
    printf("      Promedio examenes:     %.2f\n", examenes);
    printf("\n   Prom edio Quimestral:     %.2f", quimestre);
}