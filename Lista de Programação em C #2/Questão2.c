/*Lista de Programação em C#2
Professor: Allyson Bonetti França
Aluno: Hiel Saraiva Freitas de Queiroga
S1 - Eng. Computação*/

//Questão 2

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(void) {

   setlocale(LC_ALL, "Portuguese_Brazil"); /*Ao colocar esse comando, para representar os números decimais é necessário usar vírgular ao invés de ponto no arquivo .exe*/
   
   int n1;

   printf("Digite um número inteiro para que seja discriminado sua paridade:\n");
   scanf("%d", &n1);

   if (n1%2==0) {
      printf("\nO número digitado é par\n");
   }
   
   else {
      printf("\nO número digitado é ímpar\n");
   }

   system("pause");
   return 0;
}