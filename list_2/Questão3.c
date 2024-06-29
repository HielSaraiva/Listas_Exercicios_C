/*Lista de Programação em C#2
Professor: Allyson Bonetti França
Aluno: Hiel Saraiva Freitas de Queiroga
S1 - Eng. Computação*/

//Questão 3

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(void) {

   setlocale(LC_ALL, "Portuguese_Brazil"); /*Ao colocar esse comando, para representar os números decimais é necessário usar vírgular ao invés de ponto no arquivo .exe*/
   
   float n1, n2;

   printf("Digite dois números:\n");
   scanf("%f %f", &n1, &n2);

   if (n1!=n2) {
      if (n1>n2) {
         printf("\nTemos que %f é maior do que %f\n", n1, n2);
      }
      else {
         printf("\nTemos que %f é maior do que o %f\n", n2, n1);
      }
   }
   else {
      printf("\nOs números são iguais, logo nenhum dos dois é maior do que o outro!\n");
   }

   system("pause");
   return 0;
}