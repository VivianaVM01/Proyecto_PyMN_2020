#include <stdio.h>
#include<math.h>
float f1x(float x_in);
float df1x(float x_in);
float f2x(float x2_in);
float df2x(float x2_in);
//Incluir funcion de error relativo
float x0, xip1;
int main()
{
printf("CALCULO DEL METODO DENEWTON RAPSON \n");
printf("Para f(x)= 8sin(x)e^-x-1 \n");
printf("Ingrese un valor inicial x0= ");

scanf("%f",&x0); //Valor inicial = 0.3
xip1 = x0 - (f1x(x0)/df1x(x0)); // calculo de la raiz estimada

printf("La raiz estimada es xi= %3.4f \n",xip1);

printf("Para f(x)= 2x^3-11x^2+17.7x-5 \n");
printf("Ingrese un valor inicial x0= ");

scanf("%f",&x0); //Valor inicial = 0.3
xip1 = x0 - (f1x(x0)/df1x(x0)); // calculo de la raiz estimada
printf("La raiz estimada es xi= %3.4f \n",xip1);
}
float f1x(float x_in){
float y; //y es una variable local
y = (8*sin(x_in)*exp(-x_in))-1;
return y;
}
float df1x(float x_in){
float y;
y = (8*exp(-x_in)*cos(x_in))-(8*exp(-x_in)*sin(x_in));
return y;
}
float f2x(float x2_in){
float y; //y es una variable local
y = (2*(pow(x2_in,2))- 11*(pow(x2_in,2))+17.7*(x2_in))-5;
return y;
}
float df2x(float x2_in){
float y;
y =(6*(pow(x2_in,2))-22*(x2_in))+17.7;
return y;

}