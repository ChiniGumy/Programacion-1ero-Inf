#include <stdio.h>
#include <conio.h>

void main(){

    char nombre[50];                              // declaracion de variable con una capacidad de 35 caracteres

    puts("Ingresa tu nombre y apellido:.. ");     // puts() == printf()

    gets(nombre);                                 // gets() == scanf()

    puts("Tu nombre es ");                        // con puts no se pueden combinar

    puts(nombre);

}