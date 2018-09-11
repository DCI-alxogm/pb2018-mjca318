/* Este es el ejemplo 4, Creado el 11 de Septiembre del 2018 por María José Cisneros*/

#include<stdio.h>

int main(){

int i,x;
float numeros[x];
printf("Dime la cantidad de elementos para iniciar \n");
scanf("%i",&x);

for (i=0;i<x;i++){
	scanf("%f",&numeros[i]);
	numeros[i]*=2; //Multiplica el número dado por 2.
	printf("%f\n",numeros[i]); //Imprime el valor del arreglo modificado
	}
return 0;
}
