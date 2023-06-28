/*Lista de Programação em C#2
Professor: Allyson Bonetti França
Aluno: Hiel Saraiva Freitas de Queiroga
S1 - Eng. Computação*/

//Questão 11

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(void) {

   setlocale(LC_ALL, "Portuguese_Brazil"); /*Ao colocar esse comando, para representar os números decimais é necessário usar vírgular ao invés de ponto no arquivo .exe*/

   int idade;

   printf("Digite a idade do doador:\n");
   scanf("%d", &idade);

   if (idade>=16) {
      if (idade>69) {
         printf("\nComo a idade do doador é %d, ele não pode doar sangue!\n", idade);
      }
      else {
         printf("\nComo a idade do doador é %d, ele pode doar sangue!\n", idade);
      }
   }
   else {
      printf("\nComo a idade do doador é %d, ele não pode doar sangue!\n", idade);
   }

   system("pause");
   return 0;
}