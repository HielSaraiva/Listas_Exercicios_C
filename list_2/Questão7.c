/*Lista de Programação em C#2
Professor: Allyson Bonetti França
Aluno: Hiel Saraiva Freitas de Queiroga
S1 - Eng. Computação*/

//Questão 7

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(void) {

   setlocale(LC_ALL, "Portuguese_Brazil"); /*Ao colocar esse comando, para representar os números decimais é necessário usar vírgular ao invés de ponto no arquivo .exe*/

   float l1, l2, l3, l4;

   printf("Digite os valores das laterais do quadrilátero:\n");
   scanf("%f%f%f%f", &l1, &l2, &l3, &l4);

   if (l1==l2 && l2==l3 && l3==l4) {
      printf("\nO quadrilátero pode ser um Losango ou um Quadrado!\n");
      printf("\nObservação: para distinguir o quadrilátero entre um losango\n");
      printf("ou um quadrado é necessário saber o valor dos ângulos entre as arestas!\n");
   }
   else {
      printf("O quadrilátero não é um quadrado!\n");
   }

   system("pause");
   return 0;
}