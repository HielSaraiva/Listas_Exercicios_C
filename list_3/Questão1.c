/*Lista de Programação em C#3
Professor: Allyson Bonetti França
Aluno: Hiel Saraiva Freitas de Queiroga
S1 - Eng. Computação*/

//Questão 1

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>
#define PI 3.14159

void volume(float x)
{
   float v; //Variável Local

   v = (4*PI*pow(x, 3))/3;
   
   printf("\nO volume da esfera é:\n%f\n", v);
}

int main(void)
{
   setlocale(LC_ALL, "Portuguese_Brazil");

   float raio;

   printf("Digite o raio da esfera referida:\n");
   scanf("%f", &raio);
   volume(raio); //Função volume

   system("pause");
   return 0;
}
