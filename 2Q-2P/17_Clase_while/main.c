#include <stdio.h>

void main(){

    int i = 1; float nota, total;

    while (i <= 5){

        printf("Ingrese la nota del alumno [%d]:  ", i);
        scanf("%f", &nota);
    
        total += nota;
        i++;
    }

    printf("Nota total: %.2f", total / 5);

}