/*Este es el primer ejercicio de la semana 9*/

#include<stdio.h>
#include<stdlib.h>
 int main ()
{


FILE *Datos;
int i, max=0;
float x,y,z;


printf("Este programa te muestra el número maximo en un intervalo existente en un archivo dado\n");
printf("¿Cuantos datos existen en el archivo dado?\n");//El usuario tiene que ingresar los datos existentes en el archivo a leer
scanf("%d",&max);

float *ptr= (float*)malloc(max*sizeof(float));//memoria reservada

Datos=fopen("num_maximo.txt", "r"); //Abrimos archivo con datos

for (i=0;i<max;i++){
fscanf(Datos,"%f\n",&ptr[i]);

if (i==1){
	x=ptr[i-1];
	y=ptr[i];
if(y<=x)
	x=z;
else 
	z=y;
}
if(i>1)
	y=ptr[i];
if(z<y)
	z=y;
else
	z=z;
}
fclose(Datos);

printf("El valor maximo es: %f\n",z);
free(ptr);
return 0;
}

