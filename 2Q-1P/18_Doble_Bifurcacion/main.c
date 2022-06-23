#include <stdio.h>

void main(){

    float horas_trabajadas, sueldo_hora, sueldo_pagar;
    printf ("\nIngrese sueldo por horas:.. ");
    scanf ("%f", &sueldo_hora);
  
	printf ("\nIngrese horas trabajadas:..");
	scanf ("%f", &horas_trabajadas);

	sueldo_pagar = horas_trabajadas * sueldo_hora;

	if (horas_trabajadas > 40){
		sueldo_pagar=((40 * sueldo_hora) + (horas_trabajadas - 40) * sueldo_hora * 1.5);
	}

	printf("\nSueldo a pagar: %.2f",sueldo_pagar);
}
