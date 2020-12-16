#include <stdio.h>
#include <math.h>

float funcion1(float x_in;);
float ErrorRelativo(float va1,float vn1);
float va1, vn1, x_ent;
float errorrelativo(float va2,float vn2);
float va2, vn2, x_ent;
float x_in;
float funcion2(float x2_in;);
float x2_in;
int main()
{
printf("**La primera función es**:2x*cos(2x)-(x+1)^2x \n ");
printf("Ingresa tu raíz:");



scanf("%f",&va1);

printf("Ingresa un valor cercano a la raíz:");
scanf("%f",&vn1);

printf("Ingresa el valor inicial para la primera ecuación:");
scanf("%f",&x_in);

printf("Para la función 1 es: %.2f \n ", funcion1(x_ent));
printf("El error porcentual es %.2f %% \n ", ErrorRelativo( va1, vn1));

printf("\n **La segunda función es**: in|x|+x^2-4 \n ");
printf("Ingresa tu raíz:");
scanf("%f",&va2);

printf("Ingresa un valor cercano a la raíz:");
scanf("%f",&vn2);

printf("Ingresa el valor inicial para la segunda ecuación:");
scanf("%f",&x2_in);

printf("Para la función 2 es: %.2f \n", funcion2(x_ent));
printf("El error porcentual es %.2f %%", errorrelativo( va2, vn2));
}

float funcion1(float x_in;){
//2x*cos(2x)-(x+1)^2x

float fx;

fx = (2*(x_in)*cos(2*(x_in))-pow((x_in+1),2));



return fx;

}
float ErrorRelativo(float va,float vn){

float epsilon;
epsilon= fabs((va-vn)/vn)*100;
return epsilon;
}

float funcion2(float x2_in;){
// in|x|+x^2-4

float fx2;

fx2= (log10 (fabs (x2_in))+ (pow(x2_in, 2)-4));

return fx2;
}
float errorrelativo(float va2, float vn2){

float epsilon;
epsilon= fabs((va2-vn2)/vn2)*100;
return epsilon;
}