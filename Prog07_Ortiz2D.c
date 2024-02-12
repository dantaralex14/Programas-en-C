#include <stdlib.h>
#include <stdio.h>
#include <conio.h>
#include <math.h>
#include <windows.h>
//Programa para sacar raiz real e imaginaria
//Dantar Alejandro Ortiz Vega 2-D
float a,b,c,x1,x2,formula1,formula2;
float raices_ortiz(),General1_ortiz(),General2_ortiz();

int main() {

	system("cls");
	system("color 70");
    raices_ortiz();  
    General1_ortiz();
    General2_ortiz();  
  system("pause");  	
}
float raices_ortiz()
{
  printf("Introduce el valor de a: \n");
  scanf("%f", &a);
  printf("Introduce el valor de b: \n");
  scanf("%f", &b);
  printf("Introduce el valor de c: \n");
  scanf("%f", &c);
  
  while(a==0){
  
  printf("El valor no puede ser 0");
  printf("Ingrese el valor de a");
  scanf("%f", &a);	
  }
}
float General1_ortiz(){	
  x1=(b*(-1))+(sqrt(b*b)-4*a*c);
  formula1=x1/2*a;
  printf("x1 es igual a: %.2f \n",formula1);
}
float General2_ortiz(){
  x2=(b*(-1))-(sqrt(b*b)-4*a*c);
  formula2=x2/2*a;
  printf("x2 es igual a: %.2f \n",formula2);
}
