//Programa que muestre el menu y realize las operaciones indicadas
//Dantar Alejandro Ortiz Vega
#include "stdlib.h"
#include "stdio.h"
#include "math.h"

int main() {
      int n1, n2, operacion, res, producto, i,cociente;
      int opt;
      system("color 60");
      printf("\n 1.Suma");
      printf("\n 2.resta");
      printf("\n 3.multiplicacion");
      printf("\n 4.division");
      printf("\n 5. salir");
      printf("\n Seleccione la opcion a realizar: ");
      scanf("%d", &opt);
      switch (opt) {
            case 1:
                  printf("\n Introduzca un numero: ");
                  scanf("%d", & n1);
                  printf("\n Introduzca un segundo numero: ");
                  scanf("%d", & n2);
                  operacion = n1 + n2;
                  res = operacion;
                  printf("\n La suma es: %d\n", res);
                  break;
            case 2:
                  printf("\n Introduzca un numero: ");
                  scanf("%d", & n1);
                  printf("\n Introduzca un segundo numero: ");
                  scanf("%d", & n2);
                  operacion = n1 - n2;
                  res = operacion;
                  printf("\n La resta es: %d\n", res);
                  break;
            case 3:
                  printf("\n Introduzca un numero: ");
                  scanf("%d", &n1);
                  printf("\n Introduzca un segundo numero: ");
                  scanf("%d", &n2);

                   producto = 0;
                  for(i=1; i<=n2; i++){
                   producto = producto + n1;
                  }
                  printf("La multiplicacion es: %d", producto);
                  break;
            case 4:
            	  cociente=0;
	              printf("\n Introduzca un numero: ");
	              scanf("%d", &n1);
	              printf("\n Introduzca un segundo numero: ");
	              scanf("%d", &n2);
	              while(n1>=n2)
              {n1=n1-n2;
              cociente++;
				  }
			printf("La division es: %2d\n",cociente);
			system("pause");
			break;
		   case 5:
		   exit;	  	
	  }
}	  
