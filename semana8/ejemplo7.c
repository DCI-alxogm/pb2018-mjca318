//Septimo ejemplo de la semana 8. CReado por Marijo Cisneros.

#include<stdio.h>
#include<stdlib.h>
int main(){
	int i, sum=0,*num;
	
	printf("Introduce 6 numeros enteros:\n");
	num =(int*) malloc(6*sizeof(int));
	
	for(i=0; i<6; i++){
	
		scanf("%d", &num[i]);  //(num+1) es equivalente a &num[i]

		
	
		sum += num[i];  //*(num+i) es equivalente a num[i]

	}
	printf("Suma=%d", sum);
	return 0;
}
