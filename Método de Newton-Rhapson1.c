#include <stdio.h>
#include<math.h>
#include<stdlib.h>

float funcion1(float x){ //8 sin(x)e-x-1
return (8 *sin(x)* exp (-x))-1;
}
float derivada1(float x){

return
(8*exp(-x)*cos(x))-(8*exp(-x)*sin(x));
}
int main(){
float x, t, e;
int i=0;

printf("Ingrese el valor de x");
scanf("%f", &x);
do{
t=x;
x=x-funcion1(x)/derivada1(x);
e=fabs((x-t)/x);

printf("x%d = %f error = %f %%\n", i, x, e);
i=i+1;

}
while(x != t&& i<100);

if(i==100)

printf("\nErro");

else
printf("\nSolucion x: %f",x);

return 0;

}