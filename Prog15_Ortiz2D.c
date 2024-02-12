//Programa para calcular las combinaciones posibles de una poblacion
//Dantar ALejandro Ortiz Vega
#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <conio.h>

int main()
{
	int n=0, r=0, Fact=1, Resultado=0, factorial2=1, n2, r2, factorial3=1, Multiplicacion, Division, i;
	
	system("color 12");
	printf("\n Ingresa la poblacion \"n\" elementos tomando conjuntos:\n");
	scanf("%d",&n);
		
	printf("\n Ingresa la poblacion \"r\" elementos:\n");
	scanf("%d",&r);
	
	for(i = 1; i <= n; i++) 
	{
		Fact = Fact * i;
	}
	
	n2 = Fact;
	printf("\n Esto salio de n = %d\n", Fact);
	
	for( i = 1; i <= r; i++) 
	{
		factorial2 = factorial2 * i; 
	}
		
	r2 = factorial2;
	printf("\n Esto fue de R = %d\n", factorial2);
	
	Resultado = n - r;
	
	for( i = 1; i <= Resultado; i++)
	{
		factorial3=factorial3 * i;
	}	
	
	Multiplicacion = factorial3 * r2;
	printf("\n En la multiplicacion se obtuvo = %d\n", Multiplicacion);
	
	Division = n2 / Multiplicacion;
	printf("\n En la division obtuvimos = %d\n", Division);
	
}	
