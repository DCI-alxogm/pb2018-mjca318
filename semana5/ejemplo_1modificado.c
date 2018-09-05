#include<stdio.h>
int main()
{
	float temp_C, temp_K, delta, final;
	int n, i, op;
	while(0==1||2)
	{
		if(op==2)
			return 1;




	printf("Dame un valor en grados celsius para temp_C\n");
	scanf("%f", &temp_C);
        printf("Asigna un  valor a final\n");
        scanf("%f", &final);
        printf("Define el numero de pasos que desees n\n");
        scanf("%i", &n);


	delta=(final-temp_C)/n;
	for(i=0;i<n;i++){
		temp_K=temp_C+273.15;
		printf("%f %f\n", temp_C, temp_K);
		temp_C=temp_C+delta; // temp_C+=delta;
	}
	printf("Si quieres ejecutar nuevamente el programa teclea 1 y si quieres salir teclea 2\n");	
	scanf("%i",&op);
	}
	return 0;
}

	







