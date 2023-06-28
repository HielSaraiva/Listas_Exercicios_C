/*Lista de Programação em C#2
Professor: Allyson Bonetti França
Aluno: Hiel Saraiva Freitas de Queiroga
S1 - Eng. Computação*/

//Questão 5

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(void) {

   setlocale(LC_ALL, "Portuguese_Brazil"); /*Ao colocar esse comando, para representar os números decimais é necessário usar vírgular ao invés de ponto no arquivo .exe*/
   
   float a1, a2;

   printf("Digite duas alturas:\n");
   scanf("%f %f", &a1, &a2);

   if (a1!=a2) {
      if (a1>a2) {
         printf("\nTemos que a pessoa com %f é maior do que a com %f\n", a1, a2);
      }
      else {
         printf("\nTemos que a pessoa com %f é maior do que a com %f\n", a2, a1);
      }
   }
   else {
      printf("\nAs alturas são iguais, logo nenhum dos dois é maior do que o outro!\n");
   }

   system("pause");
   return 0;
}