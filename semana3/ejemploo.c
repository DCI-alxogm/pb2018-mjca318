#include <stdio.h>
int main ()
{
	int opcion;
	printf(" Teclear una opcion\n");
	printf("(1) para convertir temperaturas");
	printf("(2) para convertir coordenadas");

	scanf("%i",&opcion);

	switch(opcion)
	{
		case 1:
			printf("Entre a la opcion 1");
			break;
		case 2:
			printf("Entre a la opcion 2");
			break;
		default:
			printf("Opcion invalida");
			break;
	}
return 0;
}
