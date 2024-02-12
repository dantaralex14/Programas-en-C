#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <windows.h>
//Programa para sacar perimetro,area y tipo de un triangulo
//Dantar Alejandro Ortiz Vega
float area_ortiz(float a, float b, float c, float x);
float perimetro_ortiz(float x);
float triangulo_ortiz(float a, float b, float c);  
float triangulo,operacion,operacion2,operacion3,a,b,c,x;
int main()
{
	system("color 37");
	printf("Dame el valor de a: \n");
	scanf("%f", &a);
	printf("Dame el valor de b: \n");
	scanf("%f", &b);
	printf("Dame el valor de c: \n");
	scanf("%f", &c);
	operacion=area_ortiz(a,b,c,operacion2);
	operacion2=perimetro_ortiz(x);
	printf("El area es %f: \n",operacion);
	printf("El perimetro es %f: \n",operacion2);
	printf("El tipo de triangulo es: ",operacion3);
	operacion3 = triangulo_ortiz(a, b,  c);
	if (operacion3==12)
	{
		printf("equilatero \n");
	}
	else if (operacion3==34)
	{
		printf("isoceles \n");
	}
	else
	{
		printf("escaleno \n");
	}
	system("pause");
}
float perimetro_ortiz(float perimetro_ortiz){
	float valor2;
	valor2 = (a + b + c) / 2;
	return valor2;
}
float area_ortiz(float a, float b, float c, float x){
	float perimetro,area,raiz;
	perimetro=(a + b + c)/2;
	area= perimetro*(perimetro-a)*(perimetro-b)*(perimetro-c);
    raiz=sqrt(area);
	return raiz;		
}
float triangulo_ortiz(float a, float b, float c){
	if(a == b && b == c && a == c)
{
       	return 12;
}
	else if (a=b || b==c)
	{
		return 34;
	}
	else
	{
		return 10;
	}  	
}
