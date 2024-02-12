//Programa para sacar el factorial de un numero
//Dantar Alejandro Ortiz Vega
#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
int main()
{
    int c, n, factorial=1;
    system("color 38");
    printf("Calcularemos el factorial de un numero");
	printf("\n ingresa un numero: ");
	scanf("%d", &n);
	
	for(c=1;c<=n;c++){
	factorial=factorial*c;
	}
	printf("El factorial de %d es: %d\n",n,factorial);
	return 0;		
}
