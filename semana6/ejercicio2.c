/*Este es el segundo ejercicio de la semana 6*/
/*Creado el 13 de Septiembre del 2018 por Marijo Cisneros*/


#include<stdio.h>
int main (){
                FILE *archivo;

                int N=10,i,semestre1=0,semestre2=0,semestre3=0,semestre4=0,semestre5=0,semestre6=0,semestre7=0,semestre8=0,semestre9=0,semestre10=0,h,m;
                float promediox=0;
		char nombre[260],sexo[260],edad[260],semestre[260],promedio[260];






                       archivo=fopen("Informacion_estudiantes.txt","r");

			for(i=0;i<N;i++){

			fgets(semestre,260,(FILE *archivo);
fscanf("%s",semestre);

                        if (semestre[i]==1)++semestre1;
                        else if (semestre[i]==2)++semestre2;
                        else if(semestre[i]==3)++semestre3;
                        else if(semestre[i]==4)++semestre4;
                        else if(semestre[i]==5)++semestre5;
                        else if(semestre[i]==6)++semestre6;
                        else if(semestre[i]==7)++semestre7;
                        else if(semestre[i]==8)++semestre8;
                        else if(semestre[i]==9)++semestre9;
                        else if(semestre[i]==10)++semestre10;

                       fgets(promedio,260,(FILE *archivo);
fscanf("%s",promedio);

                        promediox=promediox+promedio[i];


                        fgets(edad,260,(FILE *archivo);
			fscanf("%s",edad);

			fgets(sexo,260,(FILE *archivo);
			printf("Para sexo masculino presione 0, para sexo femenino persione 1\n");
fscanf("%s",sexo);

                        printf("Para hombre presione 0, para mujer presione 1\n");
                        scanf("%i",&sexo[i]);
                        if (sexo[i]==h)++h;
                        else if (sexo[i]==m)++m;



                                        }

                        printf("Los estudiantes de cada semestre son, en el 1ro: %i, 2do: %i, 3ro: %i, 4to: %i, 5to: %i, 6to: %i,  7mo: %i, 8vo: %i,  9no: %i  10mo: %i  \n",semestre1,semestre2,semestre3,semestre4,semestre5,semestre6,semestre7,semestre8,semestre9,semestre10);

                        promediox=promediox/10;
                        printf("Promedio global: %f \n",promediox);

                        printf(" %i son mujeres y %i son hombres\n",m,h);




        return 0;
        }


