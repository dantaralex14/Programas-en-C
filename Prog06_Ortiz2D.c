#include "stdio.h"
#include "math.h"
#include "windows.h"
//Programa de sistema de ecuaciones
//Dantar Alejandro Ortiz Vega 
float x,v,y,valor1,valor2;
int resultado_ortiz();
int ax,by,c,dx,ey,f,i;
int formula1_ortiz(), formula2_ortiz();
void goto_xy(short x, short y);
int main()

{
	system("color 30");
	system("cls");
	formula1_ortiz();
	
	formula2_ortiz();
	
	v=(ax*ey)-(by*dx);
	system("cls");	
 	
 	resultado_ortiz();
}
formula1_ortiz()
{
	goto_xy(44,1);
	printf("ingresar los datos de la primera formmula: ");
	goto_xy(44,2);
	printf("Ingresa el valor de ax: ");
	scanf("%i",&ax);
	goto_xy(44,3);
	printf("Ingresa el valor de by: ");
	scanf("%i",&by);
	goto_xy(44,4);
	printf("Ingresa el valor de c: ");
	scanf("%i",&c);
}
formula2_ortiz()
{
	goto_xy(34,10);
	printf("ingresa los datos de la segunda formmula");
	goto_xy(34,11);
	printf("Ingresa el valor de dx: ");
	scanf("%i",&dx);
	goto_xy(34,12);
	printf("Ingresa el valor de ey: ");
	scanf("%i",&ey);
	goto_xy(34,13);
	printf("Ingresa el valor de f: ");
	scanf("%i",&f);
}
resultado_ortiz()
{
	if(v!=0){
 		y=((c*dx)-(f*ax))/((dx*by)-(ax*ey));
    	x=(c-(by*y))/ax;
    	goto_xy(54,1);
    	printf("primera formmula");
    	goto_xy(54,2);
    	printf("%ix + %iy = %i",ax,by,c);
    	goto_xy(54,4);
    	printf("segunda formmula");
    	goto_xy(54,5);
    	printf("%ix + %iy = %i",dx,ey,f);
    	goto_xy(54,6);
    	printf("valor de x");
    	goto_xy(54,7);
 		printf("X=%.2f\n",x);
 		goto_xy(54,8);
 		printf("valor de y");
 		goto_xy(54,10);
 		printf("Y=%.2f\n",y);
	 }
 	else{
 			printf("intente de nuevo");
	 }
}
void goto_xy(short x, short y)
{
        COORD pos = {x, y};
        HANDLE hConsoleOutput;
        hConsoleOutput = GetStdHandle (STD_OUTPUT_HANDLE);
        SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos);
}
