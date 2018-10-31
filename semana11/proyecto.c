#include <math.h>
#include <stdio.h>



//Doy inicio a mi programa
int main() {
//Declaro mis variables iniciales
int x,y,n,c,c1;
float Superior,Inferior,Izquierda,Derecha,e;	

	
	//Archivo en el cual estan definidos los parametros de la placa
	FILE *Valores;
	Valores= fopen("Valores.txt","r");
	fscanf(Valores,"%f %f %f %f %i %f",&Superior,&Inferior,&Izquierda,&Derecha,&n,&e);
	fclose(Valores);
	
	
	printf("Valor inferior %lf\n",Inferior);
	printf("Valor superior %lf\n",Superior);
	printf("Valor izquierdo %lf\n",Izquierda);
	printf("Valor derecho %lf\n",Derecha);
	printf("Dimensiones= %i\n",n);
	printf("Epsilon= %lf\n",e);
	
//Declaro variables para las matrices y operaciones
	float matriz[n][n];
	float f[n][n],x0[n][n],x1[n][n],max;
	
//Se le da valores de 0 a la matriz
for(y=0;y<n;y++){
for(x=0;x<n;x++){
matriz[x][y]=0;
}
}
//Asignamos valores a cada esquina de la placa

//Abajo
	for(x=0;x<n;x++){
		matriz[x][14]=Inferior;		
}	
//Izquierda
	for(y=0;y<n;y++){
		matriz[0][y]=Izquierda;		
}
//Derecha
	for(y=0;y<n;y++){
		matriz[14][y]=Derecha;		
}
//Arriba

	for(x=0;x<n;x++){
		matriz[x][0]=Superior;
}		



	
//Nuevos valores para la placa
for(c=0;c<20;c++){
	
//Nombre de los archivos donde se generaran mis resultados
char archivo[8]={'A','0','.', 't', 'x', 't','\0'};


archivo[5]=archivo[5]+c;

//Archivo de tipo string	
FILE *Final;
//Abrimos archivo
Final =fopen(archivo, "w");
	
for(y=0;y<n;y++){
for(x=0;x<n;x++){
			
fprintf(Final,"%0.3f\t", matriz[x][y]);
}
//Saltos de linea
fprintf(Final, "\n");		
}
fprintf(Final, "\n");
//Se cierra el archivo
fclose(Final);
	
	
for(y=1;y<n-1;y++){
for(x=1;x<n-1;x++){
x1[x][y]=matriz[x][y];
		}
	}
	

for(x=1;x<n-1;x++){
matriz[x][y]=(matriz[x+1][y]+matriz[x-1][y]+matriz[x][y+1]+matriz[x][y-1])/4;
			
		}
	}
for(y=1;y<n-1;y++){
for(x=1;x<n-1;x++){
x0[x][y]=matriz[x][y];
		}
	}
	
if(c>0){
for(y=1;y<n-1;y++){
for(x=1;x<n-1;x++){
f[x][y]=(x0[x][y]-x1[x][y])/x1[x][y];
				

//Se calcula el error y se compara con el valor de epsilon
if(x>1){
if(f[x][y]>f[x-1][y-1]){
max=f[x][y];	
if(max<e){
c=21;
}	
}	
}
					
}
}
}


for(y=0;y<n;y++){
for(x=0;x<n;x++){
	
}	
}

	return 0;
}
