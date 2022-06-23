#include <stdio.h>
#include <string.h>

void ejemplo_strlen(){

    char nombre[50] = "David Sanchez Romero"; 

    printf("\n\n======== Funcion strlen ========\n" );
    printf("\nDevuelve la longitud de la cadena.\n");

    printf("\nCadena: %s\n", nombre);
    printf("La longitud de la cadena es: %d\n", strlen(nombre));
}

void ejemplo_strlwr(){

    char string[50] = "HOLA MUNDO"; 

    printf("\n\n======== Funcion strlwr ========\n" );
    printf("\nConvierte una cadena de caracteres de letra mayuscula a letra minuscula.\n");

    printf("\nCadena original: %s", string);
    printf("Cadena con funcion strlwr: %s\n", strlwr(string));
}

void ejemplo_strupr(){

    char string[30] = "hola mundo"; 

    printf("\n\n======== Funcion strupr ========\n" );
    printf("\nDevuelve una expresion de caracteres en mayuscula.\n");

    printf("Cadena original: %s\n", string);
    printf("Cadena con funcion strupl: %s\n", strupr(string));
}

void ejemplo_strncat(){
    
    char cad1[25];
    char *cad2 = "Bienvenidos ";

    printf("\n\n======== Funcion strncat ========\n" );
    printf(
        "\nConcatena una serie de caracters a una cadena. Esta funcion anade los primeros numeros de "
        "caracteres de la cadena 2 en cadena 1 y termina la cadena.\n"
    );

    strcpy(cad1, "Amigos ");
    strncat(cad1, cad2, 12);
    printf("\n%s\n", cad1);
}

void ejemplo_strncpy(){

    char cad1[20];
    char *cad2 = "Bienvenidos Amigos";

    printf("\n\n======== Funcion strncpy ========\n" );
    printf("\nCopia el numero de caracteres de una cadena de caracteres, dependendiendo del numero que quiere " 
"tomar como copia.\n");

    strncpy(cad1, cad2, 12);
    cad1[12];
    printf("\n%s\n", cad1);
}

void ejemplo_strrev(){

    char car[20];
    printf("\n\n======== Funcion strrev ========\n" );
    printf("\nInivierte una cadena de caracteres (hola => aloh).\n");

    printf("\nIngrese una cadena de caracteres:.. ");
    scanf("%s", car);
    strrev(car);
    printf("\nLa cadena invertida es: %s\n", car);
}