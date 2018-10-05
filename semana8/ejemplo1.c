//Primer ejemplo de la semana 8, creado por Marijo Cisneros

#include <stdio.h>

int main(){
        int var=20;
        int *ptr; 	//declaramos la variable y apuntador
	


	ptr = &var;//apuntador en posición var

	printf("\nLa dirección de var es: %x", (int) &var);
	printf("\n Dirección guardada en el apuntador ip: %x", (int)ptr);
	printf("\nEl valor de *ptr: %i\n", *ptr);

	return 0;

}
