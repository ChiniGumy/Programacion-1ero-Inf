#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

#include "libreria_math.h"
#include "libreria_string.h"

// ----- Main ----- //

void main(){

    // ----- Funciones para elegir ----- //

    const int funcion_abs = 1, funcion_ceil = 2 , funcion_floor = 3 , funcion_pow = 4 , 
    funcion_pow10 = 5 , funcion_sqrt = 6 , funcion_modf = 7;

    const int funcion_strlen = 8 , funcion_strlwr = 9 , funcion_strupr = 10 ,
    funcion_strncat = 11 , funcion_strcpy = 12 , funcion_strrev = 13;

    int opcion;
    int terminar = 1;
    int seguir;

    // ----- Usuario GUI ----- //

    printf("\n======== Menu de Funciones de <math.h> & <string.h> ========\n");

    printf (

        "\n-------- Funciones de <math.h> --------\n\n"
        " Funcion    abs()     [1]\n"
        " Funcion   ceil()     [2]\n"
        " Funcion  floor()     [3]\n"
        " Funcion    pow()     [4]\n"
        " Funcion  pow10()     [5]\n"
        " Funcion   sqrt()     [6]\n"
        " Funcion   modf()     [7]\n"

        "\n-------- Funciones de <string.h> --------\n\n"
        " Funcion   strlen()   [8]\n"
        " Funcion   strlwr()   [9]\n"
        " Funcion   strupr()   [10]\n"
        " Funcion  strncat()   [11]\n"
        " Funcion   strcpy()   [12]\n"
        " Funcion   strrev()   [13]\n\n"

    );

    while (terminar == 1) {

        // ----- Ingreso ----- //

        printf("Porfavor ingrese el numero de la funcion que quiere ver:  ");
        scanf("%d", &opcion);

        // ----- Afirmacion del scanf ----- //

        while (opcion < 1 || opcion > 13){

            printf("Funcion no esta en la lista, porfavor ingrese de nuevo!\n\n");
            printf("Porfavor ingrese el numero de la funcion que quiere ver:.. ");

            scanf("%d", &opcion);
        }

        // ----- Condicion ----- //

            // <math.h>

        if (opcion == funcion_abs){
            ejemplo_abs();

        } else if (opcion == funcion_ceil){
            ejemplo_ceil();

        } else if (opcion == funcion_floor){
            ejemplo_floor();
            
        } else if (opcion == funcion_pow){
            ejemplo_pow();

        } else if (opcion == funcion_pow10){
            ejemplo_pow10();

        } else if (opcion == funcion_sqrt){
            ejemplo_sqrt();

        } else if (opcion == funcion_modf){
            ejemplo_modf();
        }

            // <string.h>

        else if (opcion == funcion_strlen){
            ejemplo_strlen();

        } else if (opcion == funcion_strlwr){
            ejemplo_strlwr();

        } else if (opcion == funcion_strupr){
            ejemplo_strupr();
            
        } else if (opcion == funcion_strncat){
            ejemplo_strncat();

        } else if (opcion == funcion_strcpy){
            ejemplo_strncpy();

        } else if (opcion == funcion_strrev){
            ejemplo_strrev();
        }

        // ----- Seguir con el programa ----- //

        // ! Para poder borrar el buffer de entrada de los char se pone un espacio antes del "%c"

        printf("\nQuisiera seguir viendo otras funciones? (si = 1 / no = 0):.. ");
        scanf("%d", &seguir);

        while (seguir > 1 || seguir < 0){
            printf("Opcion no valida, porfavor ingrese de nuevo!\n");
            scanf("%d", &seguir);
        }

        if (seguir == 1){
            terminar = 1;
            printf("\nEl programa continuara\n\n");
            system("cls");
            printf (

                "\n-------- Funciones de <math.h> --------\n\n"
                " Funcion    abs()     [1]\n"
                " Funcion   ceil()     [2]\n"
                " Funcion  floor()     [3]\n"
                " Funcion    pow()     [4]\n"
                " Funcion  pow10()     [5]\n"
                " Funcion   sqrt()     [6]\n"
                " Funcion   modf()     [7]\n"

                "\n-------- Funciones de <string.h> --------\n\n"
                " Funcion   strlen()   [8]\n"
                " Funcion   strlwr()   [9]\n"
                " Funcion   strupr()   [10]\n"
                " Funcion  strncat()   [11]\n"
                " Funcion   strcpy()   [12]\n"
                " Funcion   strrev()   [13]\n\n"

            );

        } else {
            terminar = 0;
            system("cls");
            printf("El programa termino\n");
        }
    }
}