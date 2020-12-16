#include <stdio.h>
#include<math.h>
#include<stdlib.h>

float funcion1(float x){ //f(x)= 2x3- 11x2 + 17.7x- 5

return (2*pow(x,3)-11*pow(x,2)+17.7*(x))-5;
}
float derivada1(float x){ // f'(x)= 6x2-22x+17.7
return (6*pow(x,2)-22*(x))+17.7;
}
int main(){
float x, t, e;
int i=0;
printf("Metodo de Newton ");
printf("Ingrese el valor de x: ");
scanf("%f", &x);
do{
t=x;
x=x-funcion1(x)/derivada1(x);
e=fabs((x-t)/x);

printf("x%d = %f error = %f %%\n ", i, x, e);
i=i+1;

}
while(x != t&& i<100);

if(i==100)
printf("\nError");

else
printf("\nRaiz x: %f ",x);

return 0;

}