/*Lista de Programação em C#2
Professor: Allyson Bonetti França
Aluno: Hiel Saraiva Freitas de Queiroga
S1 - Eng. Computação*/

//Questão 6

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(void) {

   setlocale(LC_ALL, "Portuguese_Brazil"); /*Ao colocar esse comando, para representar os números decimais é necessário usar vírgular ao invés de ponto no arquivo .exe*/

   float p1, p2;

   printf("Digite o peso das duas pessoas:\n");
   scanf("%f %f", &p1, &p2);

   if (p1!=p2) {
      if (p1>p2) {
         printf("\nTemos que a pessoa com %f é mais pesada do que a com %f\n", p1, p2);
      }
      else {
         printf("\nTemos que a pessoa com %f é mais pesada do que a com %f\n", p2, p1);
      }
   }
   else {
      printf("\nOs pesos são iguais, logo nenhum dos dois é mais pesado do que o outro!\n");
   }

   system("pause");
   return 0;
}