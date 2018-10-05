//Segundo ejemplo de la semana 8. Creado por Marijo Cisneros

#include <stdio.h>
int main(){
	int MAX=3;
	int var[]={10,100,200};
	int i,*ptr;
	//Aquí asignamos la dirección de arreglo del apuntador
	ptr = &var;
	
	for(i=0;i<MAX;i++){
		printf("La dirección de la variable var[%d]=%x\n",i,ptr); //no se usa * para la dirección
		printf("Valor de la variable var[%d]=%d\n",i,*ptr); // se usa * para los valores

	//nos permite ver la posición del apuntador cada 4 bytes
		ptr++;
	}
return 0;
}
