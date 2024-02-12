#include "stdlib.h"
#include "stdio.h"
int validar(int numero);
int ascendente(int numero);
int descendente(int numero);
int main()
{
	int x;
	int y;
	int resta;
	int contador=0;
	int kap;
	system("color 19"); 
    system("cls");
	printf("Ingresa un numero: \n");
	scanf("%d",&kap);
	if(validar(kap)==1){
	x=ascendente(kap);
	y=descendente(kap);
    	if((kap>=1000 && kap<9999)==0)
		{
		printf("Verifica que solo sean 4 digitos\n");
		system("pause");
   	    }
		   else{
		while((resta==6174 && contador>6)==0 )
		{
				resta=x-y;
		        printf("%d - %d = %d\n",x,y,resta);
		        if (resta==6174)
				{
					contador=7;
					printf("%d tu numero contiene la constante \n",resta);
					system("pause\n");				
				}
				x=ascendente(resta);
				y=descendente(resta);
				contador++;       
		}
}
}
else{
	printf("Ingrese un numero que contenga un numero diferente:\n");
	system("pause\n");
}
}
int ascendente(int numero)
{
	int n1,n2,n3,n4,dt,ncontrol;
	ncontrol=numero;
	n1=ncontrol/1000;
	ncontrol=ncontrol-(n1*1000);
	n2=ncontrol/100;
	ncontrol=ncontrol-(n2*100);
	n3=ncontrol/10;
	ncontrol=ncontrol-(n3*10);
	n4=ncontrol;
	while(((n1>=n2) && (n2>=n3)&& (n3>=n4))==0)
	{
		if (n1<=n2)
		{
			dt=n1;
			n1=n2;
			n2=dt;
		}
		if(n2<=n3)
		{
			dt=n2;
			n2=n3;
			n3=dt;
		}
		if(n3<=n4)
		{
			dt=n3;
			n3=n4;
			n4=dt;
		}
}
     ncontrol=((n1*1000)+(n2*100)+(n3*10)+(n4));
	return ncontrol;
}
	int descendente(int numero)
	{
		int n1,n2,n3,n4,dt,ncontrol;
	ncontrol=numero;
	n1=ncontrol/1000;
	ncontrol=ncontrol-(n1*1000);
	n2=ncontrol/100;
	ncontrol=ncontrol-(n2*100);
	n3=ncontrol/10;
	ncontrol=ncontrol-(n3*10);
	n4=ncontrol;
	while(((n1<=n2) && (n2<=n3)&& (n3<=n4))==0)
	{
		if (n1>=n2)
		{
			dt=n1;
			n1=n2;
			n2=dt;
		}
		if(n2>=n3)
		{
			dt=n2;
			n2=n3;
			n3=dt;
		}
		if(n3>=n4)
		{
			dt=n3;
			n3=n4;
			n4=dt;
		}
	}
	 ncontrol=((n1*1000)+(n2*100)+(n3*10)+(n4));
	return ncontrol;	
}
int validar (int numero)
{
		int n1,n2,n3,n4,dt,ncontrol;
	ncontrol=numero;
	n1=ncontrol/1000;
	ncontrol=ncontrol-(n1*1000);
	n2=ncontrol/100;
	ncontrol=ncontrol-(n2*100);
	n3=ncontrol/10;
	ncontrol=ncontrol-(n3*10);
	n4=ncontrol;
	if((n1==n2 && n1==n3 && n1==n4)==1){
		return 0;
	}
	else{
		return 1;
	}
}
