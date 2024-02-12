#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <windows.h>
//Programa para saber si un numero es primo
//Dantar Alejandro Ortiz Vega 2-D
bool primo1(int n, bool *status);
int main()
{
	system("color 67");
    bool status;
	int n=0;
    int divisores=0;
    int primo=0;
    do
	{   
        printf("Ingrese un numero: ");
        scanf(" %d",&n);
        primo1(n, &status);
        if (status)
    {
    	printf("El numero es primo");
	}
	else
	{
		printf("El numero no es primo");
	}
    } while(n=='a');
       
    return 0;
}
bool primo1(int n, bool *status)
{
	int primo;
	int divisores;
	if(n!=-1 && n>0)
        {
            primo=0;
            divisores=2;
            while(divisores<n  && primo!=1)
            {
                if(n%divisores==0) primo=1;
                divisores++;
            }
            if (primo==0)
            {
                *status=true;
            }
            else
            {
                *status=false;
            }
        }
}
