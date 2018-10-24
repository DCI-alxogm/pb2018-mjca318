#include<stdio.h> //libreria para el programa
 
int main(int argc, char *argv[]){ //declaro variables para la compilación

	printf("El programa que estás ejecutando es %s\n", argv[0]); 
	char *nombre_archivo; // declaración de  variable

	FILE *fp; 

	if(argc==2){ 
		nombre_archivo=argv[1]; 
		printf("El nombre del archivo es: %s\n", nombre_archivo);
		fp=fopen(nombre_archivo, "w+"); 

		fclose(fp); 
	}

	else if(argc>2){ 
		printf("Más argumentos de los necesarios \n");
	}
	else{ 
		printf("Se requiere de al menos 1 argumento \n");
	}
return 0; //Cierro el programa
}
