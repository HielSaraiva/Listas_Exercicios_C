/*Lista de Programação em C#3
Professor: Allyson Bonetti França
Aluno: Hiel Saraiva Freitas de Queiroga
S1 - Eng. Computação*/

//Questão 3

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

void raizes(float n1, float n2, float n3)
{
   float delta, raiz1, raiz2;

   delta = pow(n2, 2)-4*n1*n3; 
   raiz1 = (-n2+pow(delta, 1/2))/(2*n1);
   raiz2 = (-n2-pow(delta, 1/2))/(2*n1);

   if (delta>=0) {
      printf("\nLogo, as raízes da equação de 2º grau são:\n%f\n%f\n", raiz1, raiz2);
   }
   else {
      printf("\nA equação de 2º grau possui duas raízes complexas, pois delta é menor do que zero!\n");
   }
}

int main(void)
{
   setlocale(LC_ALL, "Portuguese_Brazil");

   float a, b, c;

   printf("Bem-vindo à calculadora de raízes de equações de 2º grau\n\n");
   printf("Digite os valores dos coeficientes a, b e c da equação de 2º grau na respectiva ordem:\n");
   scanf("%f%f%f", &a, &b, &c);
   
   raizes(a, b, c);

   system("pause");
   return 0;
}