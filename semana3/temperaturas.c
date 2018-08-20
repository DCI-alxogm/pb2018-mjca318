#include<stdio.h>
#include<math.h>

	int main()
{
		float celsius,Fr,K,C, Fahrenheit;
	printf("Dame una temperatura en grados celsius\n");
	scanf("%f",&celsius);
	Fr=(celsius*1.80)+32;
		K=celsius+273.15;
		printf("\n Kelvin:%f",K);
		printf("Fahrenheit: %f\n",Fr);


		printf("Dime tu resultado Fahrenheit\n");
		scanf("%f",&Fahrenheit);
		C=(Fr-32)/1.8;
			printf("celsius: %f\n",C);



}

