#include<stdio.h>
#include<math.h>
int main()
{
	int n,i,o,p;
	float x,exponente,logaritmo,seno,coseno,raiz;
		while(o==1||2)
		{
		       	if(o==2)
			return 1;


			printf("Este programa calcula algunas funciones\n");
			printf("Asigna un valor a x\n");
			scanf("%f",&x);
			printf("Elige el valor con el cual quieras iniciar\n");
			scanf("%i", &n);
			printf("Elige en que valor quieres terminar\n");
			scanf("%i",&p);
			for  (i=n;i<p;i++)
			{

				exponente=exp(x);
				logaritmo=log(x);
				seno=sin(x);
				coseno=cos(x);
				raiz=sqrt(x);
				
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
			



