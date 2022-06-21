//ejercicio 33
#include<stdio.h>
main(){
	int numero, contador1 = 0;
	char seguir;
	double acumulador, x, promedio, contador2;

	do
	{
		printf("\n Deseas analizar calificaciones? (S/N) ");
		scanf("%c", &seguir);

		if(seguir == 'S' || seguir == 'S')
		{
			contador1 = contador1 + 1;
			printf("\n Ingrese una calificacion: ");
			scanf("%i", &numero);

			if(numero>4)
			{
				printf("El alumno esta aprobado ");
				contador2 = contador2 + 1;
				acumulador = acumulador + numero;
			}
			else{
				if(numero <=4)
				{
					printf("El alumno no esta aprobado");
				}
			}
		}
		fflush(stdin);
	}while(seguir == 'S' || seguir == 'S');
	x = contador2 * 100/contador1;
	promedio = acumulador/contador2;
	printf("\n Porcentaje de los alumnos aprobados: %.2f", x);
	printf("\n Promedio de los alumnos: %.2f",promedio);
	return 0;
}
