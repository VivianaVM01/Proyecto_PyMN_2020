#include<stdio.h>
int main() {
int sueldo, estado;
printf("Eres soltero elige 1 \n si eres casado elige 2: ");
scanf("%d",&estado);
switch(estado)
{

case 1: printf( "¿Cuál es tu sueldo?: " );
scanf( "%d", &sueldo );
if(sueldo>32000){
printf( "Tu procentaje de impuestos es de 25%% ");
}
else {
printf( "Tu procentaje de impuestos es de 10%% ");
}
break;
case 2: printf( "¿Cuál es tu sueldo?: ");
scanf( "%d", &sueldo );
if(sueldo>64000){
printf( "Tu procentaje de impuestos es de 25%%");
}
else {
printf( "Tu procentaje de impuestos es de 10%% ");
}
break;
}
}