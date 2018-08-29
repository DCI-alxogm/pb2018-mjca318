#include<stdio.h>
#include<math.h>

int main()
{
	float X, X1,X2,X3;
	printf("Asigna un valor a la variable X\n");
	scanf("%f",&X);
X1=exp(-X);
X2=cos((X*3.1416)/180)+(2*tan((X*3.1416/180)));
X3=log(X)+(3*pow(X,2));
printf("x1 es igual a:%f\n",X1);
	printf("x2 es igual a:%f\n",X2);
        printf("\n x3 es igual a:%f",X3);

}
