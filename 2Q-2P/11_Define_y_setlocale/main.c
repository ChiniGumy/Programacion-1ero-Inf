#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(int argc, char *argv[]){

    setlocale(LC_ALL, "");

    #define MAXDIA 31                       // define una constante
    #define MAXMES 12                       // define una constante

    int numero_dias, numero_mes, dia_ano;

    printf("\nCalculo del dia del año (no bisiesto)\n");

    printf("Introduzca el numero del dia:.. ");
    scanf("%d", &numero_dias);

    printf("Introduzca el numero de mes:.. ");
    scanf("%d", &numero_mes);

    if (numero_dias >= 1 && numero_mes <= MAXDIA && numero_mes >= 1 && numero_mes <= MAXMES){

        switch (numero_mes){

            case 1: dia_ano = numero_dias;
                break;
        
            case 2: dia_ano = numero_dias + 31;
                break;

            case 3: dia_ano = numero_dias + 59;
                break;

            case 4: dia_ano = numero_dias + 90;
                break;

            case 5: dia_ano = numero_dias + 120;
                break;

            case 6: dia_ano = numero_dias + 151;
                break;

            case 7: dia_ano = numero_dias + 181;
                break;

            case 8: dia_ano = numero_dias + 212;
                break;

            case 9: dia_ano = numero_dias + 243;
                break;

            case 10: dia_ano = numero_dias + 273;
                break;

            case 11: dia_ano = numero_dias + 304;
                break;

            case 12: dia_ano = numero_dias + 334;
                break;

            default: puts("Datos no validos!");
        }
    }

    if (numero_mes != 0){
        
        printf("El %d del %d es el dia %d del agno", numero_dias, numero_mes, dia_ano);

    } else { printf("Los datos no son validos!"); }

    return 0;
}