#include <stdio.h>

/*
    Elabore un programa que lea el numero del dia del mes, y los minutos que le quedan de saldo a su celular.
    si el numero del dia es inferioir a 24 o los minutos son mayores a cero. visualice el mensaje "Todavia
    puede llamar de su celular" caso contrario "su saldo ha expirado"
*/

void main(){

    int numero_mes, minutos;

    printf("\nIngrese el numero del dia del mes:.. ");
    scanf("%d",&numero_mes);

    printf("\nIngrese los minutos:.. ");
    scanf("%d",&minutos);

    if (numero_mes <= 24 || minutos > 0)
        printf("\nTodavia puede llamar de su celular");
    else 
        printf("\nSu saldo ha expirado");
}

