#include<stdio.h>
#include <math.h>
int main()
{

	int opcion, op=1;
	float Ce,Ke,Fa,C2;
	float x,y,z,r,o,p,o1,p1;
       float x1,y1,z1;
printf("¿Que quieres hacer, convertir coordenadas o convertir temperaturas? \n");
while (op==1)
{
	printf(" Teclea una opción \n");
	printf("(1) para convertir temperaturas\n");
	printf("(2) para convertir coordenadas\n");

	scanf("%i",&opcion);

	switch(opcion)
	{
	case 1:
		printf("Esta es la opción 1");

		printf("Ingresa la temperatura en °C:\n");
		scanf("%f",&Ce);

		Ke=Ce+273.15;
		Fa=(9*Ce)/5+32;
		C2=(Fa-32)/1.8;

		printf("\n El resultado en K es:%f",Ke);
		printf("\n El resultado en °F es:%f",Fa);
		printf("\n °F a °C es:%f",C2);

		break;

	case 2:
		printf("Esta es la opción 2");
		printf("Ingrese una coordenada x:\n");
		scanf("%f",&x);
		printf("Ingrese una coordenada y:\n");
		scanf("%f",&y);
		printf("Ingrese una coordenada z:\n");
		scanf("%f",&z);

		r=sqrt((x*x)+(y*y)+(z*z));
		o=acos(z/r);
		p=atan(y/x);
	o1=o*57.296;
		p1=p*57.296;

		printf("\n El valor para r es:%f",r);
		printf("\n El valor para θ en grados es:%f",o1);
		printf("\n El valor para φ en grados es:%f",p1);

		x1=r*sin(o1)*cos(p1);
		y1=r*sin(o1)*sin(p1);
		z1=r*cos(o1);

		printf("\n El valor de X es:%f",x1);
		printf("\n El valor de Y es:%f",y1);
		printf("El valor de Z es:%f\n",z1);
		break;

	default:
		printf("No es una opción válida");
		break;
	}
printf("Si quieres otra opcion presiona 1\n");
printf("Si quieres salir del programa pulsar cualquier otro numero\n");
scanf("%i",&op);
}

return 0;
}

