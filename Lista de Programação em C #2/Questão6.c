/*Lista de Programa��o em C#2
Professor: Allyson Bonetti Fran�a
Aluno: Hiel Saraiva Freitas de Queiroga
S1 - Eng. Computa��o*/

//Quest�o 6

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(void) {

   setlocale(LC_ALL, "Portuguese_Brazil"); /*Ao colocar esse comando, para representar os n�meros decimais � necess�rio usar v�rgular ao inv�s de ponto no arquivo .exe*/

   float p1, p2;

   printf("Digite o peso das duas pessoas:\n");
   scanf("%f %f", &p1, &p2);

   if (p1!=p2) {
      if (p1>p2) {
         printf("\nTemos que a pessoa com %f � mais pesada do que a com %f\n", p1, p2);
      }
      else {
         printf("\nTemos que a pessoa com %f � mais pesada do que a com %f\n", p2, p1);
      }
   }
   else {
      printf("\nOs pesos s�o iguais, logo nenhum dos dois � mais pesado do que o outro!\n");
   }

   system("pause");
   return 0;
}