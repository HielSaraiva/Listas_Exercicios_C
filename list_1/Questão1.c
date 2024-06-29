/*Lista de Programacao em C#1
Professor: Allyson Bonetti Franca
Aluno: Hiel Saraiva Freitas de Queiroga
S1 - Eng. Computacao*/

//Questao 1

#include <stdio.h>
#include <stdlib.h>

int main(void) {
   
   float numero1, numero2, numero3, numero4;

   printf("Digite o primeiro numero\n");
   scanf("%f", &numero1);

   printf("\nDigite o segundo numero\n");
   scanf("%f", &numero2);
   
   printf("\nDigite o terceiro numero\n");
   scanf("%f", &numero3);

   printf("\nDigite o quarto numero\n");
   scanf("%f", &numero4);

   printf("\nOs numeros digitados foram, respectivamente:\n%f\n%f\n%f\n%f\n\n", numero1, numero2, numero3, numero4);
   printf("Os resultados dos 4 numeros digitados acrescidos de 1 sao, respectivamente: \n%f\n%f\n%f\n%f\n", numero1+1, numero2+1, numero3+1, numero4+1);
   
   system("pause");
   return 0;
}