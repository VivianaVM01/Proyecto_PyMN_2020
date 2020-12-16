#include <stdio.h>
int main()
{
int i, a[10];
for(i=0; i<10; i++){
printf("Ingresa el valor %d: ", i+1);
scanf("%d", &a[i]);
}
printf("Tu arreglo es \n");
for(i=0; i<10; i++){
printf("%d ", a[i]);
}
int b[10];
for(i=0; i<10; i++){
printf("\n Ingresa el valor de tu segundo arreglo %d: ", i+1);
scanf("%d", &b[i]);
}
printf("Tu arreglo es ");
for(i=0; i<10; i++){
printf("%d ", b[i]);
}
}