#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
//area y longitud con parametros
//Dantar Alejandro Ortiz Vega 2-D

float area_ortiz(float area_ortiz);
float longitud_ortiz(float longitud_ortiz);
float radio, area, operacion, longitud, PI=3.1416, resultado;
int main()
{
system("color 10");	
printf("Dame el radio: \n");
scanf("%f",&radio);
operacion=area_ortiz(radio);
resultado=longitud_ortiz(radio);
printf("el area es %f \n",operacion);
printf("La longitud es %f \n",resultado);
system("pause");
}
float area_ortiz(float area_ortiz){

float valor1;

valor1= PI*radio*radio;
return valor1;
}
float longitud_ortiz(float longitud_ortiz){
float valor2;
valor2= 2*PI*radio;
return valor2;
}
