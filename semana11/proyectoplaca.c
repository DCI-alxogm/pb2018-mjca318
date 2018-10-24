#include<stdio.h>

int main(){
	FILE*dt;
	float var, A1, B, C, D, k, e=0.1;
	float placa[i][j];
	int x, y, i, j;

	dt=fopen("datos.txt", "r");
	fscanf("%f %f %f %f %f", &var, &A1, &B, &C, &D);
	printf("%f %f %f %f %f", var, A1, B, C, D);
	fclose(dt);

	float **A=(float**) malloc (D sizeof (float*));

	for (i=0; i<D; i++){
		for(j=1; j<(n+1); j++){
			placa[i][j]=0.0;
	}	
	}


	for(i=0; i<D; i++){
		placa[0][j-1]=var;
		placa[i][j+1]=A1;
	}

	for(j=0; j<D; j++ ){
		placa[i-1][0]=B;
		placa[i+1][j]=C;
	}


	for(i=1; i<D-1; i++){
		for(j=1; j<N-1; j++){
			placa[i][j]= ((placa[i+1][j]+placa[i-1][j]+placa[i][j+1]+placa[i][j-1])/4);
	}
	
return 0;

}
