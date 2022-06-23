#include <stdio.h>
#include <conio.h>

void main(){

    char nombres[25], fecha[25];

    printf("\nIngrese su nombre y apellido:  ");
    scanf(" %[^\n]", nombres);

    printf("\nIngrese su fecha de nacimiento:  ");
    scanf(" %[^\n]", fecha);

    printf("\nSu nombre es:  %s", nombres);
    printf("\nSu fecha de nacimiento es:  %s", fecha);

}