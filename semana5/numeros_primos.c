#include <stdio.h>
int main()
{
int inicial,final,n,k,j;

printf("Este programa  dira los números primos que se encuentran en un intervalo que el usuario definira\n");
printf("Dame un valor para el limite inferior: \n");
scanf("%i", &inicial);	
printf("Dame un valor para el limite superior: \n");
scanf("%i", &final); 

for (int j=inicial;j<=final;j++){
 int k=0;
 for(int n=1;n<=100;n++)
 {
     if(j%n==0) 
     k++;
 }
 if (k==2){ 
 
	 
	 
	 printf("%d, ", j);
 }
 }
}
