#include<stdio.h>
int main() {
double f1, f2, f3, num, i;
double divs;
f1= 1;
f2= 1;
f3= 2;



printf("Ingresa un número:");
scanf("%lf",&num);
for( i=0; i<num; i++){
f3 = f1+f2;
printf("%lf\n",f3);
f1= f2;
f2= f3;
}
divs= (f3/f1);
printf("La aproximación es: %.4lf", divs);
return 0;
}