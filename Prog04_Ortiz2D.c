#include "stdlib.h"
#include "stdio.h"
#include "math.h"
#include "windows.h"
#include "conio.h"
//Programa para ordenar numeros en una matriz
//Dantar Alejandro Ortiz Vega 2-D
int n,matriz[100],i,d,aux;
int main()
{
system("color 31");	
printf("Ingrese el numero de elementos que se ordenaran: ");
scanf("%d",&n);
matriz_ortiz();
getch();
system("pause");
}
matriz_ortiz()
{
	for (i=1;i<=n;i++)
	{
		printf("Proporcione el numero de elementos a ordenar %d: ",i);
		scanf("%d",&matriz[i]);
	}
	for(i=1;i<n;i++)
	for(d=i+1;d<=n;d++)
	{
		if(matriz[i]>matriz[d])
		{
			aux=matriz[d];
			matriz[d]=matriz[i];
			matriz[i]=aux;
		}
	}
	printf("los elemetos ordenados son: ");
	for(i=1;i<=n;i++)
	printf("%d",matriz[i]);
}
