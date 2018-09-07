#include<stdio.h>
#include<math.h>
int main()
{
	int n,i,o;
	float q,p,y,x,exponente,logaritmo,seno,coseno,raiz;
		while(o==1||2)
		{
		       	if(o==2)
			return 1;


			printf("Este programa calcula algunas funciones\n");
			printf("Elige el valor para iniciar \n");
			scanf("%f",&x);
			printf("Elige el valor para terminar\n");
			scanf("%f", &q);
			printf("introduce tu espaciado\n");
			scanf("%f",&p);
			n=((n-x)/p);
			for  (i=n;i<=n;i++)

			{       
				y=(x+(p*i));

				exponente=exp(y);
				logaritmo=log(y);
				seno=sin(y);
				coseno=cos(y);
				raiz=sqrt(y);
				printf("el numero que asignaste es %f\n", y);
				
printf("el valor para exp es:%f \n",exponente);
printf("el valor para el log es:%f \n",logaritmo);
printf("el valor para el sin es:%f \n",seno);
printf("el valor para el cos es:%f \n",coseno);
printf("el valor para la raiz es:%f\n",raiz);
			}
			printf("Si quieres reiniciar el programa presiona 1, Para salir presiona 2.\n");		
			scanf("%i",&o);
	}

return 0;
}
			



