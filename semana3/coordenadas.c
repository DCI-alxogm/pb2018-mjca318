#include<stdio.h>
#include<math.h>

int main()
{
	float X,Y,Z,X2,Y2,Z2,X3,Y3,Z3;
	printf("Dame un valor para la coordenada X\n");
	scanf("%f",&X);
        printf("Dame un valor para la coordenada Y\n");
        scanf("%f",&Y);
        printf("Dame un valor para la coordenada Z\n");
        scanf("%f",&Z);

	X2=sqrt(pow(X,2)+pow(Y,2)+pow(Z,2));
	Y2=acos(Z/X2);
	Z2=atan(Y/X);

	printf("Xesf es igual a:%f\n", X2);
        printf("Yesf es igual a:%f\n", Y2);
        printf("Zesf es igual a:%f\n", Z2);
        
	X3=X2*sin(Y2)*cos(Z2);
	Y3=X2*sin(Y2)*sin(Z2);
	Z3=X2*cos(Y2);

	printf("Xcart es igual a:%f\n", X3);
        printf("Ycart es igual a:%f\n", Y3);
        printf("Zcart es igual a:%f\n", Z3);
}


