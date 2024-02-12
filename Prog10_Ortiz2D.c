#include "stdio.h"
#include "stdlib.h"
#include "windows.h"
#include "math.h"
//Programa para calcular area,hipotenusa y perimetro
//Dantar Alejandro Ortiz Vega 2-D
float area_ortiz(float area_ortiz);
float hipotenusa_ortiz(float hipotenusa_ortiz);
float perimetro_ortiz(float perimetro_ortiz);
float area,perimetro,hipotenusa,cateto1,cateto2,operacion1,operacion2,operacion3;

int main(){
	system("color 80");
	printf("Ingrese valor de cateto 1: \n");
	scanf("%f", &cateto1);
	printf("Ingrese valor de cateto 2: \n");
	scanf("%f", &cateto2);
	operacion1=area_ortiz(area);
	operacion2=hipotenusa_ortiz(hipotenusa);
	operacion3=perimetro_ortiz(perimetro);
	printf("El area del triangulo es %f: \n",operacion1);
	printf("La hipotenusa del triangulo es %f: \n",operacion2);
	printf("El perimetro del triangulo es %f: \n",operacion3);
	system("pause");
}
float hipotenusa_ortiz(float hipotenusa_ortiz){
	
	float resultadoHipotenusa,operacionhipotenusa,operacionR2;
	operacionhipotenusa=(cateto1*cateto1)+(cateto2*cateto2);
	operacionR2=sqrt(operacionhipotenusa);
	resultadoHipotenusa=(operacionR2);
	return resultadoHipotenusa;
}
float area_ortiz(float area_ortiz){
	
	float operacionArea,resultadoArea;
	operacionArea=cateto1*cateto2;
	resultadoArea=operacionArea/2;
	return resultadoArea;
}
float perimetro_ortiz(float perimetro_ortiz){

    float operacionPerimetro,operacionPerimetro2,resultadoHipotenusa,hipotenusa;
    operacionPerimetro=cateto1+cateto2;
    operacionPerimetro2=resultadoHipotenusa+operacionPerimetro;
	return operacionPerimetro2;
    system("pause");
}
