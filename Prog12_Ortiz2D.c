#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <string.h>
#include <windows.h>
double Factorial_perm(int c)
{
     	int i;
    	float resultado=1;
    	for(i=1;i<=c;i++)
    	resultado=resultado*i;
    	return resultado;
    
    }
    
double Factorial(int c)
{
     	int i;
    	float resultado=1;
    	for(i=1;i<=c;i++)
    	resultado=resultado*i;   
    	printf("El factorial de %d es %d \n",c,resultado);
    }
int Permutaciones()
{
	int n, cantidad;
	int r1, r2, t, r3, resultado;
	printf("Ingrese un numero: \n");
	scanf("%d", &n);
	printf("En cuantos grupos quieres las permutaciones? \n");
	scanf("%d", &cantidad);
	r1=Factorial_perm(n);
	r2=n-cantidad;
	r3=Factorial_perm(r2);
	resultado=r1/r3;
	printf("Hay %d permutaciones de numeros con grupos de %d \n",resultado,cantidad);
	return 0;
}
int combinaciones()
{
	int n,cantidad;
	int r1, r2, t, r3, r4,resultado;
	printf("Ingrese un numero: \n");
	scanf("%d", &n);
	printf("En cuantos grupos quieres las permutaciones? \n");
	scanf("%d", &cantidad);
	r1=Factorial_perm(n);
	r2=n-cantidad;
	r3=Factorial_perm(r2);
	r4=Factorial_perm(cantidad);
	resultado=r1/(r3*r4);
	printf("Hay %d combinaciones de letras con grupos de %d \n",resultado,cantidad);
	return 0;
}	
int main()
{
	int c,fact=1,perm,comb,op;
	char t;
	system("color 90");
	printf("1.Factorial de un numero\n");
	printf("2.Permutacion\n");
	printf("3.Combinacion\n");
	printf("4.Salir\n");
	printf("Seleccione Una Opcion: ");
	scanf("%d", &op);
	switch(op){	
	case 1:
	    printf("ingresa un numero: \n");
		scanf("%d", &c);
		Factorial(c);
		system("pause");
		break;
	case 2:
		Permutaciones();
		system("pause");
		break;
	case 3:
	    combinaciones();
	    system("pause");
	    break;
	case 4:
		system("pause");
		break;	
}
}
