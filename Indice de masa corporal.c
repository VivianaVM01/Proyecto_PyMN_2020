#include<stdio.h>
#include<math.h>
int main() {
float estatura, peso, imc;
printf("Escribe tu peso en kg: ");
scanf("%f",&peso);

printf("Escribe tu estatura en metros: ");
scanf("%f",&estatura);
imc= peso/pow(estatura,2);
printf("Tu imc es de: %f", imc);
if(imc<18.5){
printf(" Peso bajo ");
}
if(imc>18.5 & imc<24.9){
printf(" Peso normal ");
}
if(imc>25 & imc<29.9){
printf(" Sobrepeso ");
}
if(imc>30 & imc<34.5){
printf(" Obesidad tipo 1 ");
}
if(imc>35 & imc<39.9){
printf(" Obesidad tipo 2 ");
}
if(imc>40){
printf(" ¡Híper obesidad! ");

}
}