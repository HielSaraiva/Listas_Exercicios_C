/*Lista de Programa��o em C#3
Professor: Allyson Bonetti Fran�a
Aluno: Hiel Saraiva Freitas de Queiroga
S1 - Eng. Computa��o*/

//Quest�o 1

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>
#define PI 3.14159

void volume(float x)
{
   float v; //Vari�vel Local

   v = (4*PI*pow(x, 3))/3;
   
   printf("\nO volume da esfera �:\n%f\n", v);
}

int main(void)
{
   setlocale(LC_ALL, "Portuguese_Brazil");

   float raio;

   printf("Digite o raio da esfera referida:\n");
   scanf("%f", &raio);
   volume(raio); //Fun��o volume

   system("pause");
   return 0;
}
