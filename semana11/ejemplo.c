#include<stdio.h>
#include<stdlib.h>

int main(){
	FILE *fp;
	int i, j, N;
	double **matriz;
	double bar, bab, bizq, bder;

	
	fp=fopen("texto.txt", "r");
	fscanf("%lf %lf %lf %lf %i", &bar, &bab, &bizq, &bder, &N);
	printf("%lf %lf %lf %lf %i \n", bar, bab, bizq, bder, N);
	fclose(fp);

	matriz=(double**) malloc((N+2) * sizeof (double*));
	for (int r=0; r<(N+2); r++){
		matriz[r]=(double*) malloc ((N+2) * sizeof (double));
	}

	for(i=0; i<(N+2); i++){
		for (j=0; j<(N+2); j++){

		matriz[i][j]=0.0;
	}
	}

	for(i=0; i<N+2; i++){
		matriz[i][0]=bar;
		matriz[0][i]=bab;
		matriz[i][N]=bizq;
		matriz[N][i]=bder;
	}
return 0;
}
