//Programa para calcular las permutaciones de una poblacion
//Dantar Alejandro Ortiz Vega 2-D
#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <math.h>

int main()
{
	int n, r, fact = 1, ResultadoInicial, factorialDos=1, resultadoFinal=0, i;
	system("color 24");
	printf("\n Calcularemos las permutaciones de una poblacion de n elemntos ");
	printf("\n ingresa la poblacion \"n\" elementos de conjuntos:\n");
	scanf("%d",&n);
	
	printf("\n ingresa la poblacion \"r\" elementos:\n");
	scanf("%d",&r);
	
	for(i = 1; i <= n; i++)
	{
		fact = fact * i;
	}
	ResultadoInicial = n - r;	
	for(i= 1; i <= ResultadoInicial; i++)
	{
		factorialDos = factorialDos * i;
	}	
	printf("\n La permutacion es: %d", resultadoFinal = fact/factorialDos);
}
