// Ejercicio 21
#include<stdio.h>

int main()
{
	int x,y,z,max;

	printf("Digite el valor de x: ");
	scanf("%i",&x);
	printf("Digite el valor de y: ");
	scanf("%i",&y);
	printf("Digite el valor de z: ");
	scanf("%i",&z);

	if(x>y){
		(x>z);
			max=x;
			}
			else{
				max=z;
			}
				if(y>z){
					max=y;
					}
					else{
						max=z;
					}
			printf("el mayor de los 3 numeros es: %i.\n",max);
			return 0;

}
