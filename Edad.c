#include <stdio.h>
int main()
{
int edad;
printf("Cual es tu edad\n");
scanf("%d",&edad);
printf("Tu edad es %d: ",edad);
if(edad>=18)
printf("Eres mayor de edad.");
if(edad<18)
printf("Eres menor de edad");
return 0;
}