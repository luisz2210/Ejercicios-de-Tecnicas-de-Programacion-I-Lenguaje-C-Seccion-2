//Ejercicio 32
#include <stdio.h>
int main(){
	int a,b,c,d,e,max;

	printf("Digite el valor de a: ");
	scanf("%i",&a);
	printf("Digite el valor de b: ");
	scanf("%i",&b);
	printf("Digite el valor de c: ");
	scanf("%i",&c);
	printf("Digite el valor de d: ");
	scanf("%i",&d);
	printf("Digite el valor de e: ");
	scanf("%i",&e);

	if (a>b){
		(a>c);
		 (a>d);
		  (a>e);
		  max= a;
		}
		else{
			 max= b;
			}
			if (c>a){
				(c>b);
			     (c>d);
				  (c>e);
				  max= c;
				}
				else{
					max= d;
				}
				if (e>a){
				    (e>b);
					 (e>c);
					  (e>d);
					  max= e;
					}
					printf("\n\nEl mayor de los numeros es: %i\n\n",max);
					return 0;
					}
