/*Lista de Programa��o em C#2
Professor: Allyson Bonetti Fran�a
Aluno: Hiel Saraiva Freitas de Queiroga
S1 - Eng. Computa��o*/

//Quest�o 5

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(void) {

   setlocale(LC_ALL, "Portuguese_Brazil"); /*Ao colocar esse comando, para representar os n�meros decimais � necess�rio usar v�rgular ao inv�s de ponto no arquivo .exe*/
   
   float a1, a2;

   printf("Digite duas alturas:\n");
   scanf("%f %f", &a1, &a2);

   if (a1!=a2) {
      if (a1>a2) {
         printf("\nTemos que a pessoa com %f � maior do que a com %f\n", a1, a2);
      }
      else {
         printf("\nTemos que a pessoa com %f � maior do que a com %f\n", a2, a1);
      }
   }
   else {
      printf("\nAs alturas s�o iguais, logo nenhum dos dois � maior do que o outro!\n");
   }

   system("pause");
   return 0;
}