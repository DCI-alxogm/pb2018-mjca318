#include<stdio.h> //libreria de apoyo
#include<math.h> //libreria de apoyo

int main(){// inicio mi programa
	//Defino mis variables
float g=39.478417, H, Ma, Ms;
int n=10000,a,b;
double x,y,z,vx1,vy1,vz1;
double x1[n],y1[n],z1[n],vx[n],vy[n],vz[n],rs;
FILE *Datos;
FILE *Resultados;

printf("A continuación selecciona algun planeta: mercurio[1], venus[2], tierra[3],marte[9], jupiter[4], saturno[5], urano[6], neptuno[7], pluton[8]\n");
scanf("%i",&b);
//El condicional nos ayudara a trabajar con el planeta que el usuario haya elegido, por medio de un archivo

if(b==1){
Datos=fopen("Mercurio.txt","r");
fscanf(Datos,"%lf %lf %lf %lf %lf %lf %f %f %f",&x,&y,&z,&vx1,&vy1,&vz1,&H,&Ma,&Ms);
printf("Prueba %lf\t %lf\t %lf\t %lf\t %lf\t %lf\t %f\n",x,y,z,vx1,vy1,vz1,H);
fclose(Datos);
//Datos para iniciar 
x1[0]=x;
y1[0]=y;
z1[0]=z;
vx[0]=vx1*365.242;
vy[0]=vy1*365.242;
vz[0]=vz1*365.242;

Resultados=fopen("ResultadosMercurio.txt","w"); //Crea un archivo con los resultados correspondientes al planeta
for(a=1;a<=n;a++)
{
	 x1[a]=x1[a-1]+vx[a-1]*H;
	y1[a]=y1[a-1]+vx[a-1]*H;
	z1[a]=z1[a-1]+vx[a-1]*H;
	rs=sqrt(pow(x1[a-1],2.0)+pow(y1[a-1],2.0)+pow(z1[a-1],2.0));
	vx[a]=vx[a-1]-H*((g*1.0*x1[a-1])/pow(rs,3.0));
	vy[a]=vy[a-1]-H*((g*1.0*y1[a-1])/pow(rs,3.0));
	vz[a]=vz[a-1]-H*((g*1.0*z1[a-1])/pow(rs,3.0));

     fprintf(Resultados," %lf\t %lf\t %lf\t %lf\t %lf\t %lf\t %f\n",x1[a],y1[a],z1[a],vx[a],vy[a],vz[a],H);


    

//El resultado se imprime en el archivo de texto generado
}

fclose(Resultados);
}
if(b==2){
Datos=fopen("Venus.txt","r");
fscanf(Datos,"%lf %lf %lf %lf %lf %lf %f %f %f",&x,&y,&z,&vx1,&vy1,&vz1,&H,&Ma,&Ms);
printf("Prueba  %lf\t %lf\t %lf\t %lf\t %lf\t %lf\t %f\n",x,y,z,vx1,vy1,vz1,H);
fclose(Datos);

x1[0]=x;
y1[0]=y;
z1[0]=z;
vx[0]=vx1*365.242;
vy[0]=vy1*365.242;
vz[0]=vz1*365.242;


Resultados=fopen("ResultadosVenus.txt","w");

for(a=1;a<=n;a++)
{
   	 x1[a]=x1[a-1]+vx[a-1]*H;
	y1[a]=y1[a-1]+vy[a-1]*H;
	z1[a]=z1[a-1]+vz[a-1]*H;
	rs=sqrt(pow(x1[a-1],2.0)+pow(y1[a-1],2.0)+pow(z1[a-1],2.0));
	vx[a]=vx[a-1]-H*((g*1.0*x1[a-1])/pow(rs,3.0));
	vy[a]=vy[a-1]-H*((g*1.0*y1[a-1])/pow(rs,3.0));
	vz[a]=vz[a-1]-H*((g*1.0*z1[a-1])/pow(rs,3.0));

   fprintf(Resultados," %lf\t %lf\t %lf\t %lf\t %lf\t %lf\t %f\n",x1[a],y1[a],z1[a],vx[a],vy[a],vz[a],H);


    

}
fclose(Resultados);
}
if(b==3){
Datos=fopen("Tierra.txt","r"); 
	fscanf(Datos,"%lf %lf %lf %lf %lf %lf %f %f %f ",&x,&y,&z,&vx1,&vy1,&vz1,&H,&Ma,&Ms);
	printf("Prueba %lf\t %lf\t %lf\t %lf\t %lf\t %lf\t %f\n",x,y,z,vx1,vy1,vz1,H);
	fclose(Datos);
	
	x1[0]=x;
	y1[0]=y;
	z1[0]=z;
	vx[0]=vx1*365.242;
	vy[0]=vy1*365.242;
	vz[0]=vz1*365.242;

Resultados=fopen("ResultadosTierra.txt","w");
for(a=1;a<=n;a++){
        x1[a]=x1[a-1]+vx[a-1]*H;
        y1[a]=y1[a-1]+vy[a-1]*H;
        z1[a]=x1[a-1]+vz[a-1]*H;
        rs=sqrt(pow(x1[a-1],2.0)+pow(y1[a-1],2.0)+pow(z1[a-1],2.0));
        vx[a]=vx[a-1]-H*((g*1.0*x1[a-1])/pow(rs,3.0));
        vy[a]=vy[a-1]-H*((g*1.0*x1[a-1])/pow(rs,3.0));
        vz[a]=vz[a-1]-H*((g*1.0*x1[a-1])/pow(rs,3.0));
  fprintf(Resultados," %lf\t %lf\t %lf\t %lf\t %lf\t %lf\t %f\n",x1[a],y1[a],z1[a],vx[a],vy[a],vz[a],H);



    

}
fclose(Resultados);
}
if(b==4){
Datos=fopen("Jupiter.txt","rs");
fscanf(Datos,"%lf %lf %lf %lf %lf %lf %f %f %f",&x,&y,&z,&vx1,&vy1,&vz1,&H,&Ma,&Ms);
printf("Prueba %lf\t %lf\t %lf\t %lf\t %lf\t %lf\t %f\n",x,y,z,vx1,vy1,vz1,H);
fclose(Datos);
 
x1[0]=x;
y1[0]=y;
z1[0]=z;
vx[0]=vx1*365.242;
vy[0]=vy1*365.242;
vz[0]=vz1*365.242;

Resultados=fopen("ResultadosJupiter.txt","w"); 
for(a=1;a<=n;a++)
{
         x1[a]=x1[a-1]+vx[a-1]*H;
        y1[a]=y1[a-1]+vy[a-1]*H;
        z1[a]=z1[a-1]+vz[a-1]*H;
        rs=sqrt(pow(x1[a-1],2.0)+pow(y1[a-1],2.0)+pow(z1[a-1],2.0));
        vx[a]=vx[a-1]-H*((g*1.0*x1[a-1])/pow(rs,3.0));
        vy[a]=vy[a-1]-H*((g*1.0*y1[a-1])/pow(rs,3.0));
        vz[a]=vz[a-1]-H*((g*1.0*z1[a-1])/pow(rs,3.0));

      fprintf(Resultados," %lf\t %lf\t %lf\t %lf\t %lf\t %lf\t %f\n",x1[a],y1[a],z1[a],vx[a],vy[a],vz[a],H);



    

}

fclose(Resultados);
}
if(b==5){
Datos=fopen("Saturno.txt","r");
fscanf(Datos,"%lf %lf %lf %lf %lf %lf %f %f %f",&x,&y,&z,&vx1,&vy1,&vz1,&H,&Ma,&Ms);
printf("Prueba %lf\t %lf\t %lf\t %lf\t %lf\t %lf\t %f\n",x,y,z,vx1,vy1,vz1,H);
fclose(Datos);

x1[0]=x;
y1[0]=y;
z1[0]=z;
vx[0]=vx1*365.242;
vy[0]=vy1*365.242;
vz[0]=vz1*365.242;

Resultados=fopen("ResultadosSaturno.txt","w");
for(a=1;a<=n;a++)
{
         x1[a]=x1[a-1]+vx[a-1]*H;
        y1[a]=y1[a-1]+vy[a-1]*H;
        z1[a]=z1[a-1]+vz[a-1]*H;
        rs=sqrt(pow(x1[a-1],2.0)+pow(y1[a-1],2.0)+pow(z1[a-1],2.0));
        vx[a]=vx[a-1]-H*((g*1.0*x1[a-1])/pow(rs,3.0));
        vy[a]=vy[a-1]-H*((g*1.0*y1[a-1])/pow(rs,3.0));
        vz[a]=vz[a-1]-H*((g*1.0*z1[a-1])/pow(rs,3.0));

      fprintf(Resultados," %lf\t %lf\t %lf\t %lf\t %lf\t %lf\t %f\n",x1[a],y1[a],z1[a],vx[a],vy[a],vz[a],H);



    
}

fclose(Resultados);
}
if(b==6){
Datos=fopen("Urano.txt","r");
fscanf(Datos,"%lf %lf %lf %lf %lf %lf %f %f %f",&x,&y,&z,&vx1,&vy1,&vz1,&H,&Ma,&Ms);
printf("Prueba %lf\t %lf\t %lf\t %lf\t %lf\t %lf\t %f\n",x,y,z,vx1,vy1,vz1,H);
fclose(Datos);

x1[0]=x;
y1[0]=y;
z1[0]=z;
vx[0]=vx1*365.242;
vy[0]=vy1*365.242;
vz[0]=vz1*365.242;

Resultados=fopen("ResultadosUrano.txt","w");
for(a=1;a<=n;a++)
{
         x1[a]=x1[a-1]+vx[a-1]*H;
        y1[a]=y1[a-1]+vy[a-1]*H;
        z1[a]=z1[a-1]+vz[a-1]*H;
        rs=sqrt(pow(x1[a-1],2.0)+pow(y1[a-1],2.0)+pow(z1[a-1],2.0));
        vx[a]=vx[a-1]-H*((g*1.0*x1[a-1])/pow(rs,3.0));
        vy[a]=vy[a-1]-H*((g*1.0*y1[a-1])/pow(rs,3.0));
        vz[a]=vz[a-1]-H*((g*1.0*z1[a-1])/pow(rs,3.0));

     fprintf(Resultados," %lf\t %lf\t %lf\t %lf\t %lf\t %lf\t %f\n",x1[a],y1[a],z1[a],vx[a],vy[a],vz[a],H);



    

}

fclose(Resultados);
}

if(b==7){
Datos=fopen("Neotuno.txt","r");
fscanf(Datos,"%lf %lf %lf %lf %lf %lf %f %f %f",&x,&y,&z,&vx1,&vy1,&vz1,&H,&Ma,&Ms);
printf("Prueba %lf\t %lf\t %lf\t %lf\t %lf\t %lf\t %f\n",x,y,z,vx1,vy1,vz1,H);
fclose(Datos);

x1[0]=x;
y1[0]=y;
z1[0]=z;
vx[0]=vx1*365.242;
vy[0]=vy1*365.242;
vz[0]=vz1*365.242;

Resultados=fopen("ResultadosNeptuno.txt","w");
for(a=1;a<=n;a++)
{
         x1[a]=x1[a-1]+vx[a-1]*H;
        y1[a]=y1[a-1]+vy[a-1]*H;
        z1[a]=z1[a-1]+vz[a-1]*H;
        rs=sqrt(pow(x1[a-1],2.0)+pow(y1[a-1],2.0)+pow(z1[a-1],2.0));
        vx[a]=vx[a-1]-H*((g*1.0*x1[a-1])/pow(rs,3.0));
        vy[a]=vy[a-1]-H*((g*1.0*y1[a-1])/pow(rs,3.0));
        vz[a]=vz[a-1]-H*((g*1.0*z1[a-1])/pow(rs,3.0));

      fprintf(Resultados," %lf\t %lf\t %lf\t %lf\t %lf\t %lf\t %f\n",x1[a],y1[a],z1[a],vx[a],vy[a],vz[a],H);



   

}

fclose(Resultados);
}
if(b==8){
Datos=fopen("Pluton.txt","rs");
fscanf(Datos,"%lf %lf %lf %lf %lf %lf %f %f %f",&x,&y,&z,&vx1,&vy1,&vz1,&H,&Ma,&Ms);
printf("Prueba %lf\t %lf\t %lf\t %lf\t %lf\t %lf\t %f\n",x,y,z,vx1,vy1,vz1,H);
fclose(Datos);

x1[0]=x;
y1[0]=y;
z1[0]=z;
vx[0]=vx1*365.242;
vy[0]=vy1*365.242;
vz[0]=vz1*365.242;

Resultados=fopen("ResultadosPluton.txt","w");
for(a=1;a<=n;a++)
{
         x1[a]=x1[a-1]+vx[a-1]*H;
        y1[a]=y1[a-1]+vy[a-1]*H;
        z1[a]=z1[a-1]+vz[a-1]*H;
        rs=sqrt(pow(x1[a-1],2.0)+pow(y1[a-1],2.0)+pow(z1[a-1],2.0));
        vx[a]=vx[a-1]-H*((g*1.0*x1[a-1])/pow(rs,3.0));
        vy[a]=vy[a-1]-H*((g*1.0*y1[a-1])/pow(rs,3.0));
        vz[a]=vz[a-1]-H*((g*1.0*z1[a-1])/pow(rs,3.0));

     fprintf(Resultados," %lf\t %lf\t %lf\t %lf\t %lf\t %lf\t %f\n",x1[a],y1[a],z1[a],vx[a],vy[a],vz[a],H);



    

}

fclose(Resultados);
}
if(b==9){
Datos=fopen("Marte.txt","rs");
fscanf(Datos,"%lf %lf %lf %lf %lf %lf %f %f %f",&x,&y,&z,&vx1,&vy1,&vz1,&H,&Ma,&Ms);
 printf("Prueba %lf\t %lf\t %lf\t %lf\t %lf\t %lf\t %f\n",x,y,z,vx1,vy1,vz1,H);
fclose(Datos);


x1[0]=x;
y1[0]=y;
z1[0]=z;
vx[0]=vx1*365.242;
vy[0]=vy1*365.242;
vz[0]=vz1*365.242;

Resultados=fopen("ResultadosMarte.txt","w");
for(a=1;a<=n;a++)
{
         x1[a]=x1[a-1]+vx[a-1]*H;
        y1[a]=y1[a-1]+vy[a-1]*H;
        z1[a]=z1[a-1]+vz[a-1]*H;
        rs=sqrt(pow(x1[a-1],2.0)+pow(y1[a-1],2.0)+pow(z1[a-1],2.0));
        vx[a]=vx[a-1]-H*((g*1.0*x1[a-1])/pow(rs,3.0));
        vy[a]=vy[a-1]-H*((g*1.0*y1[a-1])/pow(rs,3.0));
        vz[a]=vz[a-1]-H*((g*1.0*z1[a-1])/pow(rs,3.0));

     fprintf(Resultados," %lf\t %lf\t %lf\t %lf\t %lf\t %lf\t %f\n",x1[a],y1[a],z1[a],vx[a],vy[a],vz[a],H);

   
}

fclose(Resultados);

}
return 0;

}
