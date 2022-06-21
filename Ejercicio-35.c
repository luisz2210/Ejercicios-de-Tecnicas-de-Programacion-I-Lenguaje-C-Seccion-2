//ejercicio 35
#include<stdio.h>
main(){
	int multiplo=0, par, impar, n, y, numero, resultado1, resultado2, resultado3;
	do
	{
		printf("Ingrese un numero positivo: ");
		scanf("%i", &numero);
		if(numero < -1)
		{
			printf("Error solo ingresar numeros positivos \n");
		}
		else{
			n=numero;
			resultado1 = n%2 == 0;
			par = par + resultado1;
			resultado2 = n%2 == 1;
			impar = impar + resultado2;
			resultado3 = n%3 == 0;
			multiplo = multiplo + resultado3;
		}
	}while (numero != -1);
	printf("\n La cantidad de numeros pares es: %i", par);
	printf("\n La cantidad de numeros impares es: %i", impar);
	printf("\n La cantidad de multiplos de 3 es: %i", multiplo);
	return 0;
}
