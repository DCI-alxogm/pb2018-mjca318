/*Este es el primer ejercicio de la semana 9*/

#include<stdio.h>
#include<math.h>
 int main ()
{


FILE *Datos;


Datos=fopen("num_maximo.txt", "r");
printf("Este programa te muestra el número maximo en un intervalo definido por el usuario\n");

int datos [95];
int i, max=0;

fscanf(Datos,"%ls", &datos[95]);
for (i=0; i<95; i++){
if (datos[95]>max){
max=datos[95];
}
}
printf("El numero mayor es %d\n", max);
fclose(Datos);
return 0;
}
