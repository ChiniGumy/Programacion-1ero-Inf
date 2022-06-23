#include <stdio.h>
#include <math.h>

void ejemplo_abs(){

    int num;

    printf("\n\n======== Funcion abs ========\n" );
    printf("\nProvee el valor absoluto.\n");
    printf("\nIngrese un numero:.. ");
    scanf("%d", &num);

    printf("El valor absoluto de %d es %d\n", num, abs(num));
}

void ejemplo_ceil(){
    
    float num;

    printf("\n\n======== Funcion ceil ========\n" );
    printf("\nRedondea un numero entero a un numero mayor al proximo ingresado.\n");
    printf("\nIngrese un numero:.. ");
    scanf("%f", &num);

    printf("Se redondeo el numero %.2f a: %.2f\n", num, ceil(num) );
}

void ejemplo_floor(){

    float x, num;

    printf("\n\n======== Funcion floor ========\n" );
    printf("\nRedondea un numero entero con decimal ingresado, al numero entero pero para abajo.\n");
    printf("\nIngrese un numero:.. ");
    scanf("%f", &num);

    x = floor(num);

    printf("Se redondeo el numero %.2f a: %.2f\n", num, x);
}

void ejemplo_pow(){

    float num;
    int potencia;

    printf("\n\n======== Funcion pow ========\n" );
    printf("\nDevuelve un numero, a la potencia de un numero ingresado.\n");
    printf("\nIngrese un numero:.. ");
    scanf("%f", &num);

    printf("Ingrese una potencia:.. ");
    scanf("%d", &potencia);

    printf("El resultado de %.2f ^ %d es: %.2f\n", num, potencia, pow(num, potencia));
}

void ejemplo_pow10(){

    float num;

    printf("\n\n======== Funcion pow10 ========\n" );
    printf("\nDevuelve el numero 10 elevado a la potencia ingresada.\n");
    printf("\nIngrese un numero:.. ");
    scanf("%f", &num);

    printf("El resultado de %.2f ^ 10 es: %.2f\n", num, pow(num, 10));

    printf(
        "\nAl momento de escribir el codigo, aunque haya importado la libreria, no me reconocia\n"
        "la funcion pow10 asi que opte por usar la funcion pow y elevarlo a 10 manualmente.\n"
    );
}

void ejemplo_sqrt(){
    float x, num;

    printf("\n\n======== Funcion sqrt ========\n" );
    printf("\nExtrae la raiz cuadrada de una expresion numerica.\n");
    printf("\nIngrese un numero:.. ");
    scanf("%f", &num);

    x = sqrt(num);

    printf("La raiz cuadrada de %.2f es: %.2f\n", num, x);
}

void ejemplo_modf(){

    double num, dec, ent;

    
    printf("\n\n======== Funcion modf ========\n" );
    printf("\nSepara un numero de tipo float, es decir una cifra entera con decimales "
           "y presenta su parte entera y decimal.\n");

    printf("\nIngrese un numero:.. ");
    scanf("%lf", &num);

    dec = modf(num, &ent);

    printf("Parte entera %.2f y decimal %.2f\n", ent, dec);
}