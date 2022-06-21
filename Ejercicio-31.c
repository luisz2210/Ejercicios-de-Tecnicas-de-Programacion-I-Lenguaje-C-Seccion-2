//Ejercicio 31
#include <stdio.h>
main(){
	int num;
	int i;
	int conteoneg=0;
	int conteopos=0;
	int sumapos=0;
	int sumaneg=0;
	int promedio=0;

	for (i=0; i<6; i++)
	{
		printf("Ingrese un numero: ");
		scanf("%i",&num);
		if(num>0)
		{
			sumapos+=num;
			conteopos++;
		}
		else
		{
			sumaneg+=num;
			conteoneg++;
		}
	}
	promedio= sumapos / conteopos,
	printf("\nla suma de los numeros negativos es: %i",sumaneg);
	printf("\nEl promedio de los numeros positivos es: %i",promedio);

	return 0;
}
