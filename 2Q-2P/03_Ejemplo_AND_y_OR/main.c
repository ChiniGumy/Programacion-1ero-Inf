#include <stdio.h>

// En el cuartel se aceptan para inscribirse a chicos de 18 años en adelante y de 1.65 para ser aceptados.

void main(){

    int edad; float estatura;

    printf("\nIngresar edad del civil:.. ");
    scanf("%d", &edad);

    printf("Ingresar la estatura del civil:.. ");
    scanf("%f", &estatura);

    if (edad >= 18 && estatura >= 1.65){
        printf("Ingresa al cuartel");

    } else{
        printf("No ingresa al cuartel");
    }
}