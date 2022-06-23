#include <stdio.h>

/*
    REALICE UN PROGRAMA QUE CLAVE SEA 1234, DEBE TENER UN MÁXIMO DE 5 INTENTOS,
    EN CADA INTENTODEBE APARECER EL MENSAJE, LE QUEDAN "TANTOS" INTENTOS.
*/

void main(){

    int contrasena = 1234, conf_contrasena;

    printf("\nInicio de sesion\n");

    for (int i = 1; i < 6; i++){

        printf("Confirmar la contrasena:  ");
        scanf("%d", &conf_contrasena);

        if (conf_contrasena == contrasena){
            printf("\nContrasenas correctas");
            break;
        
        } else {
            printf("\nContrasena incorrecta! Intentos restantes: %d\n", 5 - i);
        }
    }
}