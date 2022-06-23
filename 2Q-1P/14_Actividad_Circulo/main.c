#include <stdio.h>
#include <conio.h>

void main(){

    const int DIAMETRO = 2;
    const float PI = 3.1416;

    float radio, diametro, perimetro, area;

    printf("\nIngrese el radio:.. ");
    scanf("%f", &radio);

    diametro = DIAMETRO * radio;
    perimetro = PI * 2 * radio;
    area = PI * radio * radio;

    printf("\nEl diametro es:    %.2f", diametro);
    printf("\nEl perimetro es:   %.2f", perimetro);
    printf("\nEl area es:        %.2f", area);

    getch();
}