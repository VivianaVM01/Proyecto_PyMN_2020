#include <stdio.h>
#include<math.h>
#include<stdlib.h>
float funcion1(float x){ //f(x)= 2x3- 11x2 + 17.7x - 5
return (2*pow(x,3)-11*pow(x,2)+17.7*(x))-5;;
}
float derivada1(float x){
return (6*pow(x,2)-22*(x))+17.7;
}
int main(){
float x, t, e;
float x0;
int i=0;
printf("Ingrese el valor de x: ");
scanf("%f", &x);
printf("Ingrese el valor de x0: ");
scanf("%f", &x0);
do{
t=x;
x=x - ( (funcion1(x)*(x0-x)) / (funcion1(x0) -
funcion1(x)) );
e=fabs((x-t)/x);
printf("x%d = %f error = %f %%\n", i, x, e);
i=i+1;
}
while(x != t&& i<10);
if(i==100)
printf("\nError");
else
printf("\nSolucion x: %f",x);

return 0;

}