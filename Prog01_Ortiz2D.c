#include "stdio.h"
#include "stdlib.h"
#include "windows.h"
//Circunferecia y longitud sin parametros
//Dantar Alejandro Ortiz Vega 2-D

float radio=0, area, longitud=0, PI=3.1416;
int main(){
	radio_ortiz();
	area_ortiz();
	longitud_ortiz();
	operacion();
	system("pause");
}
	radio_ortiz(){
		printf("Ingrese el radio de la circunferencia: \n");
		scanf("%f",&radio);
		return radio;	
	}
	area_ortiz(){	
		area= PI*radio*radio;
		return area;
	}
	longitud_ortiz(){
		longitud= 2*PI*radio;
		return longitud;
	}
	operacion(){
		printf("El area es: %.2f\n",area);
		printf("La longitud es: %.2f\n",longitud);
	}
