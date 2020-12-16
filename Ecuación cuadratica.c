#include<stdio.h>
#include<math.h>
int main() {
float x1, x2, raiz, r;
int a, b, c;
printf("Ingrese el valor de a ");
scanf("%d", &a);
printf("Ingrese el valor de b ");
scanf("%d", &b);
printf("Ingrese el valor de c ");
scanf("%d", &c);
r=((b*b)-4*a*c);
raiz=( sqrt (r));
if(r<0){
printf("No hay soluciones reales");
}
else{

x1=((-b+raiz)/2*a);
x2=((-b-raiz)/2*a);
printf("El resultado de la la función es: %1.1f, %1.1f", x1, x2);

}
}