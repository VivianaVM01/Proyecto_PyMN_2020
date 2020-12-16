#include<stdio.h>
int main () {
int numero;
printf( "Introduzca un número entero: " );
scanf( "%d", &numero );
if ( numero % 2 == 0 )
printf( "ES PAR" );
else
printf( "ES IMPAR" );
}
