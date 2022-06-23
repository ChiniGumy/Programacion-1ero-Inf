#include <stdio.h>

/*
    Para que un ciudadano apruebe el servicio militar debe tener entre
    18 y 25 años de edady una estatura mínimade 165 cm de altura.

    Realice un programa que ingrese a 10 aspirantes a ingresar al servicio militar;
    Ingrese su nombre completo, su edad y su altura en centímetros; si el aspirante
    tiene entre 18 y 25 años y mas de 165 cm presente el mensaje “ADMITIDO AL SERVICIOMILITAR”,
    caso contrario presente el mensaje “NO ES ADMITIDO AL SERVICION MILITAR”. Finalmente,
    presente la edad promedio solo de las personas admitidas al servicio militar.
*/

void main(){

    int edad, altura, admitidos = 0, no_admitidos = 0;
    float promedio_edades;
    char nombre[25];

    for (int i = 1; i <= 10; i++){

        printf("\nIngrese nombre del aspirante [%d]:  ", i);
        scanf("%s", nombre);

        printf("Ingrese la edad del aspirante [%d]:  ", i);
        scanf("%d", &edad);

        printf("Ingrese la altura del aspirante [%d] (cm):  ", i);
        scanf("%d", &altura);

        if ((edad >= 18 && edad <= 25) && altura > 165){
            printf("\nAdmitido al servicio militar\n");
            admitidos++;

        } else {
            printf("\nNo es admitido al servicio militar\n");
            no_admitidos++;
        }

        printf("\nNombre del cadete: %s", nombre);
        printf("\nEdad del cadete: %d", edad);
        printf("\nAltura del cadete: %d\n", altura);

        printf("\n---------------------------------------------------\n");

        promedio_edades += edad;
    }
    printf("\nCadetes admitidos:  %d", admitidos);
    printf("\naspirantes no admitidos:  %d", no_admitidos);
    printf("\nPromedio de las edades: %.2f", promedio_edades / 10);
}