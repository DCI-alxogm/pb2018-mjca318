#include<stdio.h> //Pongo la librería que voy a usar

int main(int argc, char *argv[]){ //Hago la declaración de los valores que voy a dar en la compilación
	printf("El programa que estás ejecutando es: %s\n", argv[0]); //Imprimo el primer elemento de mis argumentos

	if(argc==2){ //Condición cuando argumentos es igual a 2 (los necesarios), entonces corre el programa
		printf("El argumento que se dio es: %s\n", argv[1]);
	}
	//Condiciones cuando se da el número de argumentos incorrecto
	else if(argc>2){ 
		printf("Hay más argumentos de los necesarios \n");
	}
	else{
		printf("SE requiere de al menos 1 argumento más \n");
	}
	
return 0; //Se cierra el programa 
}
