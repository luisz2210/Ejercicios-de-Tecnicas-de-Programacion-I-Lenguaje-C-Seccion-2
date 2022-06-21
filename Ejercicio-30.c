//Ejercicio 30
#include <stdio.h>
int main(){
	int c,n,fact= 1;

	printf("Digite un numero para calcular su factorial: ");
	scanf("%d",&n);

	for (c=1;c<= n;c++){
		fact = fact * c;
    }
	printf("El factorial de %i es: %i\n",n,fact);
    return 0;
	}


