//*Primer ejercicio de la semana 6, creado por marijo cisneros alvarez el 11 de Seotiembre de 2018*//
#include <stdio.h>

int main(){
	int n;
	char x;
	int edad[n], sexo[n], semestr[n], semestre[10], hombre=0 , mujer=0, promedio=0, edad_sem[9], promedioedad=0, califsem[9];
	float calif[n];
	   printf("\n Introduce el número de alumnos:");
        scanf("%i", &n);


	for(int i=0 ; i<9 ; i++){
		semestre[i]=0;
		edad_sem[i]=0;
		califsem[i]=0;
	}

	printf("\n  introduzca %i espacios en el orden siguiente:, n");
	printf("\n Edad(1-99), Sexo(H-M), Semestre(1-9), promedio actual(0.0-10.0)\n");
	for(int i=0 ; i<n ; i++){
		scanf("%i %c %i %f", &edad[i], &x,  &semestr[i], calif[i]);
		if(x=='H' || x=='h'){
			sexo[i]=0;
			hombre++;
		}
		else{
			sexo[i]=1;
			mujer++;		
		}
		// suma de las edades por semestre 
			edad_sem[semestr[i]]+=edad[i];
		//edad para tener un promedio global
		promedioedad+=edad[i];
		//calificaciones semestrales
		califsem[semestr[i]]+=calif[i];
                //promedio gral.
		promedio+=calif[i];
		//Estudiantes  por semestre
		Semestre[semestr[i]]++;
		//Cantidad de hombres
	}
	
	
	printf("\n El total de alumnios: %i , De los cuales %i son mujeres y %i son hombres", n, mujer, hombre);
	printf("\n Estudiantes por semestre:");
	for(int i=0 ; i<n ; i++){
		printf("\n Semestre %i°    %i", i+1, semestre[i]);
	}
	int temp = promedio/n;
	printf("\nPromedio general de calificaciones: %f", temp);
	printf("\nPromedio de calificaciones por semestre:");
	for(int i=0 ; i<n ; i++){
		printf("\n Semestre %i°    %f", i+1, calif.sem[i]/semestre[i]);
	}
	printf("Promedio de edad en general: %f", promedio.edad/n);
	printf("\nPromedio de edad por semestre:");
	for(int i=0 ; i<n	; i++){
		printf("\n Semestre %i°    %f", i+1, edad_sem[i]/semestre[i]);
	}
	

	return 0;
}
