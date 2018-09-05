#include<stdio.h>
int main()
{
	int n, op=1, i, a[100], r;
	printf("¿Que quieres hacer, convertir de base 10 a binario  o convertir de binario a base 10? \n");
	while(op==1)
	{
		printf("Teclea 1 para convertir de base 10 a binario\n");
		printf("Teclea 2 para convertir de binario a base 10\n");
		scanf("%i",&op);
switch(op)
	{
case 1:
		printf("ingresa el numero base 10\n");
		scanf("%i",&n);
		i=0;
			if(n==0){
				printf("%i\n",n);
			}
			else if (n>0){
				a[i]=n%2;n/=2;i++;
			}
		for(r=i-1;r>=0;r--){
	
			printf("%i",a[r]);
		}
		printf("\n");
		break;
	}

	}	
return 0;
}
	

