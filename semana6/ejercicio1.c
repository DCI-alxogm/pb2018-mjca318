/*Este es el primer ejercicio de la semana 6*/
/*Creado el 11 de Septiembre del 2018 por Marijo Cisneros*/
#include<stdio.h>
	int main(){
		int sex[10], semestre [10],x[9],male =0, female= 0,r= 1;
		float prom [10],f = 0;
	for(int i = 1;i <= 10 ; i++)
		printf("Genero del estudiante %i",i);
		scanf("%i",&sex[i]);
	}
	for (int i = 1;i <= 10 ; i++)
		printf("Semestre que cursa el estudiante %i",i);
		scanf("%i",&semestre[i]);
	}
		for (int i = 1;i <= 10 ; i++)
		printf("Calificacion del alumno %i",i);
		scanf("%i",&sex[i]);
	}
	for(int i = 0;i < 10; i++){
		if(sex[i]==0){male++;}else{female++;}
	}
	printf("Son %i hombres y %i mujeres",male ,female);
		for(int i = 0 ; i < 10 ; i++){
		switch(semestre[i]){
		case 1:
			x[0]++;
		break;
		case 2:
			x[1]++;
		break;
		case 3:
			x[2]++;
		break;
		case 4:
			x[3]++;
		break;
		case 5:
			x[4]++;
		break;
		case 6:
			x[5]++;
		break;
		case 7:
			x[6]++;
		break;
		case 8:
			x[7]++;
		break;
		case 9:
			x[8]++;
		break;
		}
	  }
		for(int i  = 0; i < 9; i++){
			printf("De semestre %i son %i \n",r,x[i]);
			s++;
		}
	for(int i = 0;i < 10;){fp=+prom[i];}
	f=/10;
	printf("El promedio es de %f",f);
}
