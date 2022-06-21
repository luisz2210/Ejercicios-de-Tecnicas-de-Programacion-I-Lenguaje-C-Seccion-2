//Ejercicio 34
#include <stdio.h>
int main()
{
	int n,sumadig=0;

	printf("Digite un numero: ");
	scanf("%i", &n);

	int num= n;
	while (n!=0){
		sumadig= sumadig+(n%10);
		n= n/10;
	}
	printf("la suma de los digitos de %i es: %i", num, sumadig);
	return 0;
	}
