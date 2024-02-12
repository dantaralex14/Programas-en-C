#include "stdio.h"
#include "stdlib.h"
#include "windows.h"
#include "math.h"
//Programa de numero perfecto en un rango
//Dantar Alejandro Ortiz Vega 2-D
int i, n,multiplicacion,suma,rango1,rango2;
int nPerfecto_ortiz();
int rango_ortiz();
char operacion;
int perfecto; 

int main() 
{ 
    system("color 46");
	printf("1.- calcular su un numero es perfecto \n");
	printf("2.- Calcular los numeros perfectos que existen en un determinado Rango \n");
	printf("3.- salir \n");
	printf("ingrese el numero de la operacion deseada: ");

	operacion= getchar();
	system("cls");
	switch (operacion)
	{
		case '1':
       	nPerfecto_ortiz();
	return 0;	
			
		case '2':
			rango_ortiz();
			system("Pause");
    		break;
				
		case'3':
			break;
			
		case'x':
			return 0;
			break;
			defult:
			printf("Opcion no valida");
			system("pause");
			break;
	}		
}
nPerfecto_ortiz()
{
	printf("Introduzca el numero a verificar: ");
			scanf("%i", &n);
	
	for(i=1; i<n; i++) 
	{
		if( pow(2, i)*(pow(2, i+1)-1)==n ) 
		{
			printf("El numero %d es perfecto.\n", n);
			break;
		}
	}
		if(pow(2, i)*(pow(2, i+1)-1)!=n) {
			printf("El numero %d NO es perfecto.\n", n);
		}
}
rango_ortiz()
{
	printf("Ingresa el primer rango: \n");
    	    scanf("%i",&rango1);
    	    printf("Ingresa el segundo rango:  ");
    	    scanf("%i",&rango2);
   
    	    for(i=rango1;i<=rango2;i++){   
    	     	
    	     	if(perfecto=i==1) { 
    	     			
    	     		printf("%i es un numero perfecto \n",&i);
						}
					}
}
