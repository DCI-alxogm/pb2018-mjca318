#include<stdio.h>
#include<math.h>


int main()
{ 
  float X,Y,Xp,Yp;
	
        printf("Asigna un valor a la coordenada X\n");
        scanf("%f",&X);
        printf("Asigna un valor a la variable Y\n");
        scanf("%f",&Y);
	Xp=sqrt(pow(X,2)+pow(Y,2));
		Yp=atan(Y/X);
        printf("Xpolar es igual a: %f\n",Xp);
	printf("Ypolar es igual a: %f\n",Yp);

        if((Xp>0)&&(Yp>0)){
		printf("la coordenada esta en el primer cuadrante\n");
	}
		if((Xp<0)&&(Yp<0)){
			printf("la coordenada esta en el tercer cuadrante\n");
		}

			if((Xp>0)&&(Yp<0)){
				printf("la coordenada esta en el cuarto cuadrante\n");
			}
		
	
				if((Xp<0)&&(Yp>0)){
					printf("la coordenada esta en el segundo cuadrante\n");
				}
			
}




