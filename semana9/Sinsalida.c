/*Funcion con argumentos de entrada pero sin argumentos de salida*/

#include<stdio.h>

void cuadr(float x); 
int main(){
	float n,x;
	cuadr(n);
	scanf("%f",&n);
	printf("El cuadrado de %f es %f\n",n,x);
	return 0;
}
void cuadr(float x){
	float x1;
	//printf("Introduce un número\n");
	//scanf("%f",&x);
x1=x*x;
	//printf("El cuadrado de %f es %f\n",x,x1);
	//return x1;
}



