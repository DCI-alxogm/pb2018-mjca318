/*Ejemplo 5 de la semana 6, creado por María José Cisneros Álvarez el 11 de Septiembre de 2018*/ 


#include<stdio.h>

int main()
{
	int j,n;
	printf("Dime el número de elementos para trabajar\n");
	scanf("%i",&n);
	float numeros[n]; //Esta no es la mejor manera de hacer una reserva de memoria dinámica

	for(j=0;j<n;j++){
	scanf("%f",&numeros[j]);
	numeros[j]*=2;
	printf("%f\n",numeros[j]);
	}
return 0;
}
