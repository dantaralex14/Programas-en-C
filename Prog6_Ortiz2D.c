//Programa que realice un sistema de ecuaciones
//Dantar Alejandro Ortiz Vega
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main(){
    float a, b, c, d, e, f, x, y, z;
    do{
    	printf("\n Realizaremos un sistema de ecuaciones");
    	system("color 59");
        printf("\n Ingrese un numero: ");
        scanf("%f",&a);
        printf("\n %.2fx + y=",a);
        scanf("%f",&b);
        printf("\n %.2fx + %.2fy = ",a,b);
        scanf("%f",&c);
        printf("\n %.2fx + %.2fy = %.2f \n x=",a,b,c);
        scanf("%f",&d);
        printf("\n %.2fx + %.2fy = %.2f \n %.2fx + y=",a,b,c,d);
        scanf("%f",&e);
        printf("\n %.2fx + %.2fy = %.2f \n %.2fx + %.2fy = ",a,b,c,d,e);
        scanf("%f",&f);
        printf("\n Su sistema de ecuaciones es: x%.2f + y%.2f = x%.2f%.2f + y%.2f = z%.2f",a,b,c,d,e,f);
        scanf("%f",&x);
    }while(x==0);
    y=((c*d)-(f*a))/((d*b)-(a*e));
    x=(c-(b*y))/a;
    printf("%.2xf%.2f + %.2yf%.2f=%.2f%.2xf%.2f + %.2yf%.2f = z%.2f ",a,x,b,y,c,d,x,e,y,f);
    system("pause");
}
