#include <stdio.h>

void main(){

    float kb, byte, mb;
    printf("\nIngrese la cantidad en Kb:.. ");
    scanf("%f", &kb);

    byte = kb * 1024;
    mb = kb / 1024;

    printf("\nConversion a Byte:    %.2f", byte);
    printf("\nConversion a Kb:      %.2f", kb);
}