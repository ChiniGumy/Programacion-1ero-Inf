#include <stdio.h>

/*
    Realice un programa en C que diga como titulo, INICIO DE SESIÓN, Luego pida el ingreso de USUARIO:
    CONTRASEÑA Y CONFIRMAR CONTRASEÑA. Finalmente Presente los mensajes: "CONTRASEÑAS CORRECTAS", CONTINÚE,
    o "LAS CONTRASEÑAS NO COINCIDEN, VUELVA A INTENTARLO" Solo podrá realizar 3 intentos.
*/

void main(){

    char usuario[25];
    int contrasena, conf_contrasena;

    printf("\nInicio de sesion\n");

    printf("\nIngrese el usuario:  ");
    scanf("%s", usuario);

    printf("Ingrese la contrasena:  ");
    scanf("%d", &contrasena);

    for (int i = 0; i <= 3; i++){

        printf("Confirmar la contrasena:  ");
        scanf("%d", &conf_contrasena);

        if (conf_contrasena == contrasena){
            printf("\nContrasenas correctas");
            break;
        
        } else {
            printf("\nContrasena incorrecta! Intentos restantes: %d\n", 3 - i);
        }
    }
}