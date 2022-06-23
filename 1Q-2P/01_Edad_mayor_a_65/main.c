#include <stdio.h>

// Realice un programa que presente el mensaje "es adulto mayor", si su edad es igual o mayor a 65

void main(){
    int edad;

    printf("\nIngrese su edad:.. ");
    scanf("%d", &edad);

    if (edad >= 65){
        printf("Usted es un adulto mayor");
    } else {
        printf("Usted no es un adulto mayor");
    }
}