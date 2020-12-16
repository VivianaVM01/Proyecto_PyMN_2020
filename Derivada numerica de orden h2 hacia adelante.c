// Programa donde se calcula una derivada numerica de orden h2 hacia adelante
#include <stdio.h>
#include<math.h>
// Declarar la funcion de derivacion hacia adelante
float DerivAdelante(float h, float(xi));
float DerivAtras(float h, float(xi));
float DerivAcentrada(float h, float(xi));
//Declaramos las variables para ejecutar la funcion en el programa
float xi,h,o;
int main()
{
printf("¿En que incremento desea imprimir resultados? \n h=0.5 \n h=0.2 \n h=0.1 \n h=0.01 \n");
scanf("%f",&o);
xi=0.6; h=o;
printf("Bienvenido, calculando la derivada de f(x)=1-e^(-x/0.2) en el punto xi=0.6\n");
printf("El valor para h=%f es: %f \n",h,DerivAdelante(xi,h));
printf("El valor para h=%f es: %f \n",h,DerivAtras(xi,h));
printf("El valor para h=%f es: %f\n ",h,DerivAcentrada(xi,h));
}
// Definimos la funcion f'(xi) = (-f(xi+2)+4f(xi+1)-3f(xi))/2h
float DerivAdelante(float h, float(xi)){
float dfxi, fxi, fxip1, fxip2;
fxi = 1-exp(-xi/0.2); //Evaluando la funcion en xi f(xi)
fxip1 = 1-exp(-(xi+h)/0.2); // Evaluando f(xi+1)
fxip2 = 1-exp(-(xi+(2*h))/0.2); //Evaluando f(xi+2)
dfxi = (-fxip2+4*fxip1-3*fxi)/(2*h);
return dfxi;
}
// Definimos la funcion f'(xi) = (-f(xi+2)+4f(xi+1)-3f(xi))/2h
float DerivAtras(float h, float(xi)){
float dfxi, fxi, fxip1, fxip2;
fxi = 1-exp(-xi/0.2); //Evaluando la funcion en xi f(xi)
fxip1 = 1-exp(-(xi-h)/0.2); // Evaluando f(xi-1)
fxip2 = 1-exp(-(xi-h)/0.2); //Evaluando f(xi-2)
dfxi = (3*fxi-4*fxip1-fxip2)/(2*h);
return dfxi;
}
float DerivAcentrada(float h, float(xi)){

float dfxi, fxi, fxip1, fxip2;
fxip1 = 1-exp(-(xi+h)/0.2); // Evaluando f(xi+1)
fxip2 = 1-exp(-(xi-h)/0.2); // Evaluando f(xi-1)
dfxi =(fxip1-fxip2)/(2*h);
return dfxi;

}