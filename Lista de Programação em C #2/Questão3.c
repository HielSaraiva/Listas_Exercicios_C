/*Lista de Programa��o em C#2
Professor: Allyson Bonetti Fran�a
Aluno: Hiel Saraiva Freitas de Queiroga
S1 - Eng. Computa��o*/

//Quest�o 3

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(void) {

   setlocale(LC_ALL, "Portuguese_Brazil"); /*Ao colocar esse comando, para representar os n�meros decimais � necess�rio usar v�rgular ao inv�s de ponto no arquivo .exe*/
   
   float n1, n2;

   printf("Digite dois n�meros:\n");
   scanf("%f %f", &n1, &n2);

   if (n1!=n2) {
      if (n1>n2) {
         printf("\nTemos que %f � maior do que %f\n", n1, n2);
      }
      else {
         printf("\nTemos que %f � maior do que o %f\n", n2, n1);
      }
   }
   else {
      printf("\nOs n�meros s�o iguais, logo nenhum dos dois � maior do que o outro!\n");
   }

   system("pause");
   return 0;
}