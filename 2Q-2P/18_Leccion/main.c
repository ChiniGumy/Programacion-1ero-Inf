#include <stdio.h>
#include <conio.h>

/*
    Realice un programa que ingrese el nombre y la edad de 10 trabajadores y visualícelos luego presente
    el promedio de la edad de los trabajadores; finalmente preguntar si desea repetir si o no el programa.
*/

void main(){

    int edad, pregunta;
    char nombre[25];
    float edades;

    int seguir = 1;

    while (seguir == 1){

        for (int trabajador = 1; trabajador <= 10; trabajador++){

            printf("\nIngrese el nombre del trabajador [%d]:  ", trabajador);
            scanf("%s", nombre);

            printf("Ingese la edad del trabajador %s:  ", nombre);
            scanf("%d", &edad);

            edades += edad;

        }

        printf("\nPromedio de edades: %.2f\n", edades / 10);

        printf("\nDesea seguir ejecutando el programa? ( 1 = seguir / 0 = terminar ) :  ");
        scanf("%d", &pregunta);

        if (pregunta == 1){

            system("cls");
            printf("\nEl programa continuara...\n");
            seguir = 1;

        } else {

            system("cls");
            printf("\nTerminando programa...\n");
            seguir = 0;
        }
    }
}