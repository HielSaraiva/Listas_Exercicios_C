/*Lista de Programa��o em C#2
Professor: Allyson Bonetti Fran�a
Aluno: Hiel Saraiva Freitas de Queiroga
S1 - Eng. Computa��o*/

//Quest�o 11

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(void) {

   setlocale(LC_ALL, "Portuguese_Brazil"); /*Ao colocar esse comando, para representar os n�meros decimais � necess�rio usar v�rgular ao inv�s de ponto no arquivo .exe*/

   int idade;

   printf("Digite a idade do doador:\n");
   scanf("%d", &idade);

   if (idade>=16) {
      if (idade>69) {
         printf("\nComo a idade do doador � %d, ele n�o pode doar sangue!\n", idade);
      }
      else {
         printf("\nComo a idade do doador � %d, ele pode doar sangue!\n", idade);
      }
   }
   else {
      printf("\nComo a idade do doador � %d, ele n�o pode doar sangue!\n", idade);
   }

   system("pause");
   return 0;
}