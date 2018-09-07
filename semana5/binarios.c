#include<stdio.h>
#include<math.h>
int main()
{
	int  op=1, binario=0, au=0,decimal=0,c=0;
	char binar[100];

	printf("¿Que quieres hacer, convertir de base 10 a binario  o convertir de binario a base 10? \n");
	while(op==1)
	{
		printf("Teclea 1 para convertir de base 10 a binario\n");
		printf("Teclea 2 para convertir de binario a base 10\n");
		scanf("%i",&op);
switch(op)
	{
case 1:
		 printf("Ingrese el numero en base 10:\n");
 scanf("%i",&decimal);
 //Convertir numero a binario
 while(decimal>0){
  if(decimal%2==1){
	  binar[c++]='1';
  }
  else{
	  binar[c++]='0';
  }
  decimal/=2;
 }

 
for(int i=c; i>0;i--){

	
 printf("Número en Binario:%i\n",binario);
 printf("%c", binar[i-1]);
}
 break;
 
case 2:
         printf("Ingrese el numero en binario:\n");
	 scanf("%i",&binario);
	 while(binario>0){
		 au=binario%10;
			 if(au!=0){
				 decimal+=pow(2,c);

			 }			 
}
printf("\n El equivalente decimal es %i\n", decimal);
break;


}
}
return 0;

}

	

