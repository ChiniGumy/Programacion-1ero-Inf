#include <stdio.h>

void main(){

    int i = 1, tabla;

    printf("\nIngrese tabla de multiplicar a ver:  ");
    scanf("%d", &tabla);

    printf("\nTabla de multiplicar: %d", tabla);

    while (i <= 12){
        printf("\n%d * %d = %d", tabla, i, tabla * i);
        i++;
    }
}