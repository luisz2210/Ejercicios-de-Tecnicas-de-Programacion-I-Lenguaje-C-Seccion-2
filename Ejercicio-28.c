//ejercicio 28

#include<stdio.h>
int main()
{
	int num=0, i, resultado=0;

	printf("Ingrese un numero: ");
	scanf("%d",&num);
	printf("Los divisores del numero %d son", num);
	for (i=1; i<=num; i++)
	 {
		resultado=num%i;
		if (resultado==0)
	    {
			printf("\n %d",i);
     	}

	}
	return 0;
}
