// ejercicio 25
#include<stdio.h>
main(){

	int ano;

	printf("Ingrese el ano: ");
	scanf("%1",&ano);

	if((ano %4 == 0 && ano%100 !=0) || (ano %400 ==0))
	{
		printf("El ano es Bisiesto");
	}
	else
	{
		printf("El ano no es Bisiesto");
	}


	return 0;

}
