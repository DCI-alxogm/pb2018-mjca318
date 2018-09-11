#include<stdio.h>
#include<math.h>
int main()
{
	int fact=1,i,op=1,digito,resultado;

	while(op==1)
	{

		 printf("Dame un digito\n");
        scanf("%i",&digito);

		if(digito<0) fact=0;
		else if(digito==0) fact=1;
			else{ 
				for(i=1;i<=digito;i++)
				{
			fact=fact*i;
			resultado=fact;
	}

	printf("\n tu resultado en factorial es: %i", resultado);
	fact=1;

	}
			printf("\n Si quieres otra opcion presiona 1");

printf("\n Si quieres salir del programa pulsar cualquier otro numero");
scanf("%i",&op);
}
return 0;
}
