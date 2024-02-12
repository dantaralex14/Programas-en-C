#include "stdio.h"
#include "ctype.h"
#include "stdlib.h"
#include "windows.h"
//Menu de operaciones con funciones
//Dantar Alejandro Ortiz Vega 2-D
int suma_ortiz(int n1, int n2);
int multiplicacion_ortiz(int n1, int n2);
int resta_ortiz(int n1, int n2);
float division_ortiz(float n1_d, float n2_d);
	int n1,n2;
	int suma, multiplicacion,resta;
	float division, n1_d, n2_d;
int main(){	
	char op;
	do{
		system("color 1");
		printf("A) Suma de dos numeros.\n");
		printf("B) Multiplicacion de dos numeros.\n");
		printf("C) Resta de dos numeros.\n");
		printf("D) Division de dos numeros. \n");
		printf("E) Salir.\n");	
		scanf("%c",&op);
		system("cls");
		switch(toupper(op)){		
			case 'A':
				operacion_ortiz();
				suma=suma_ortiz(n1,n2);
			break;
			case 'B':
				operacion_ortiz();
				multiplicacion=multiplicacion_ortiz(n1,n2);
			break;
			case 'C':
				operacion_ortiz();
				resta=resta_ortiz(n1,n2);
			break;
			case 'D':
				operacion_ortiz();
				division=division_ortiz(n1,n2);
				
			break;
		}
	}
	while(toupper(op)!='E');{	
	system("pause");
	}
}
		int suma_ortiz(int n1, int n2){
			int valorsuma;
			valorsuma=n1+n2;
			printf("\n la suma es: %d \n",valorsuma);
			system("pause");
			system("cls");
			return valorsuma;
		}
		float division_ortiz(float n1_d, float n2_d){
			float valordivision;
			valordivision=n1_d/n2_d;
			printf("\n La division es: %.2f \n",valordivision);
			system("pause");
			system("cls");
			return valordivision;
		}
		int resta_ortiz(int n1, int n2){
			int valorresta;
			valorresta=n1-n2;
			printf("\n la resta es: %d\n",valorresta);
			system("pause");
			system("cls");
			return valorresta;
		}
		int multiplicacion_ortiz(int n1, int n2){
			int valormultiplicacion;
			valormultiplicacion=n1*n2;
			printf("\n la multiplicacion es: %d \n",valormultiplicacion);
			system("pause");
			system("cls");
			return valormultiplicacion;
		}		
		operacion_ortiz(){
			system("cls");
			printf("ingrese valor 1: \n");
			scanf("%d",&n1);
			printf("ingrese valor 2: \n");
			scanf("%d",&n2);
		}
