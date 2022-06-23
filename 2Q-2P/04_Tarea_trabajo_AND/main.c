#include <stdio.h>

/*
    Una persona es admitida para un empleo si tiene entre 25 y 35 años de edad. Elabore un programa que
    lea el nombre y la edad para una persona y luego visualice el mensaje "ADMITIDO PARA EL TRABAJO" o "
    NO ES ADMITIDO PARA EL TRABAJO" según corresponda.
*/

void main(){

    int edad;

    printf("\nIngrese edad de la persona:.. ");
    scanf("%d", &edad);
    
    if (edad >= 25 && edad <= 35)
        printf("Admitido para el trabajo");
    else
        printf("No es admitido para el trabajo");
}