#include <stdio.h>

void main(){

    int numero;

    printf("Ingrese numero de mes:.. ");
    scanf("%d", &numero);

    if (numero == 1)
        printf("Enero");

    else if (numero == 2)
        printf("Febrero");
    
    else if (numero == 3)
        printf("Marzo");

    else if (numero == 4)
        printf("Abril");

    else if (numero == 5)
        printf("Mayo");

    else if (numero == 6)
        printf("Junio");
    
    else if (numero == 7)
        printf("Julio");
    
    else if (numero == 8)
        printf("Agosto");
    
    else if (numero == 9)
        printf("Septiembre");

    else if (numero == 10)
        printf("Octubre");
     
    else if (numero == 11)
        printf("Noviembre");

    else if (numero == 12)
        printf("Diciembre");

    else 
        printf("Mes no existe");
}