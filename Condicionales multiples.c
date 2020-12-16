#include<stdio.h>
#include<math.h>
int main() {
int opcion, gasto, totalD;
printf("¿A qué tienda desea entrar?, 1. Perfumeria, 2.salchichonería, 3. carnicería,4.limpieza: ");
scanf("%d",&opcion);

switch(opcion){
case 1:
printf(" ¿Cuáto gasto? ");
scanf("%d",&gasto);
totalD= ((gasto*20)/100)+.10;
printf("Debera pagar: %d", totalD);
break;
case 2:

printf(" ¿Cuáto gasto? ");
scanf("%d",&gasto);
totalD= ((gasto*40)/100) +.10;
printf("Debera pagar: %d", totalD);
break;
case 3:
printf(" ¿Cuáto gasto? ");
scanf("%d",&gasto);
totalD= ((gasto*20)/100)+.10;
printf("Debera pagar: %d", totalD);
break;
case 4:
printf(" ¿Cuáto gastó? ");
scanf("%d",&gasto);
totalD= ((gasto*35)/100)+.10;
printf("Debera pagar: %d", totalD);
break;
}
}