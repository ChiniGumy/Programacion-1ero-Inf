# include <stdio.h>

void main(){

    int num1; 
    int num2;
    int suma;

    printf("\nIngrese primer numero:.. ");
    scanf("%d", &num1);

    printf("Ingrese segundo numero:.. ");
    scanf("%d", &num2);

    suma = num1 + num2;
    printf("Resultado de %d + %d = %d", num1, num2, suma);
}
