#include <stdio.h>
#include <math.h>

#define RAIZ(x) (2* (x)*cos(2 *(x))-pow((x+1),2)

int main() {
float a, b, xr, xa, ea;
int iteraciones;
printf("Limite superior de la raiz: ");
scanf("%f", &a);
printf("Limite inferior de la raiz: ");
scanf("%f", &b);

iteraciones = 0;
xa = 0.0;
ea = 0;
printf("%12s %10s %10s %10s %10s\n",
"Iteraciones", "xi", "a", "b", "Ea");

do{
iteraciones++;



xr = (a + b) / 2;
if(iteraciones >= 2) {
ea = ((xr - xa) / xr) * 100;
}
ea = fabs(ea);
printf("%12d %10f %10f %10f %10f\n", iteraciones, a, b, xr, fabs(ea));
xa = xr;
if(RAIZ(xr) > 0)) {
a = xr;
}
else{
a= xr;
}
}
while(ea > 0.5 || (ea == 0.0 && iteraciones == 1));

printf("\nLa raiz es de f(x) = 2x*cos(2x)-(x+1)^2 ; es: %f\n", xr);
return 0;
}