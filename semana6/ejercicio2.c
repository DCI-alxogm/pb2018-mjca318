#include <stdio.h>

int main(){
        
	
	FILE *arc;
	arc = fopen("resumen.txt", "r");
	
        int N;

        fscanf(arc, "%i", &N);

        char an;
        float edad[N], sex[N], sem[N], semestre[9], hombre=0, mujer=0, promedio=0, edad_sem[9], prom_edad=0;
        int a=0;
        float califsem[9], cali[N];

        
        for(int i=0 ; i<9 ; i++){
                semestre[i]=0;
                edad_sem[i]=0;
                califsem[i]=0;
        }

        for(int i=0 ; i<N ; i++){
                fscanf(arc,"%f %c %f %f", &edad[i], &an, &sem[i], &cali[i]);
                if(an=='H' || an=='h'){
                        sex[i]=0;
                        hombre++;
                }
                else{
                        sex[i]=1;
                        mujer++;
                }
                a = sem[i]-1;
                
                edad_sem[a]+=edad[i];
                
                prom_edad+=edad[i];
               
                califsem[a]+=cali[i];
               
                promedio+=cali[i];
                
                semestre[a]++;
               
        }
	fclose(arc);



	FILE *archivo;	
	archivo = fopen("informacion_estudiantes.txt", "w");
	fprintf(archivo, "\n resumen de los datos de los alumnos:");
        float temp;

        
        fprintf(archivo, "\nTotal de estudiantes: %i , De los cuales %0.0f son mujeres y %0.0f son hombres", N, mujer, hombre);
        fprintf(archivo, "\n Estudiantes por semestre:");
        for(int i=0 ; i<8 ; i++){
                fprintf(archivo, "\n Semestre %i°    %0.0f", i+1, semestre[i]);
        }


        temp = promedio/N;

        fprintf(archivo, "\nPromedio de calificaciones: %0.2f", temp);
        fprintf(archivo, "\nPromedio de calificaciones por semestre:");
        for(int i=0 ; i<8 ; i++){
                if(semestre[i]!=0){
                        temp= califsem[i]/semestre[i];
                }
                else{
                        temp=0;
                }
                fprintf(archivo, "\n Semestre %i°  %0.2f", i+1, temp);
        }

        temp = prom_edad/N;
	
        fprintf(archivo, "\n Promedio de edad : %0.2f", temp);
        fprintf(archivo, "\n Promedio de edad por semestre:");
        for(int i=0 ; i<8 ; i++){
                if(semestre[i]!=0){
                        temp = edad_sem[i]/semestre[i];
                }
                else{
                        temp=0;
                }
                fprintf(archivo, "\n Semestre %i°    %0.2f", i+1, temp);
        }
        fprintf(archivo, "\n");
	fclose(archivo);
	
        return 0;
}
