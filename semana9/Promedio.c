#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main(){
//Declaro mis variables
FILE *Datos;
int i, valor=0;
float mas=0;

printf("¿Cuantos datos existen el el archivo a leer?\n");
scanf("%d",&valor);

float *ptr= (float*)malloc(valor*sizeof(float));//memoria 

Datos=fopen("promedio.txt","r");

for (i=0;i<valor;i++){ //ciclo para nuestro archivo de texto
	fscanf(Datos,"%f\n",&ptr[i]);
	}

fclose(Datos);
for (i=0;i<valor;i++){
	mas += ptr[i];
}
	mas=mas/valor;

printf("Promedio %f\n",mas);
free(ptr);
return 0;
}

