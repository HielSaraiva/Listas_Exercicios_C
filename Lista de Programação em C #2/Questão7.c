/*Lista de Programa��o em C#2
Professor: Allyson Bonetti Fran�a
Aluno: Hiel Saraiva Freitas de Queiroga
S1 - Eng. Computa��o*/

//Quest�o 7

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(void) {

   setlocale(LC_ALL, "Portuguese_Brazil"); /*Ao colocar esse comando, para representar os n�meros decimais � necess�rio usar v�rgular ao inv�s de ponto no arquivo .exe*/

   float l1, l2, l3, l4;

   printf("Digite os valores das laterais do quadril�tero:\n");
   scanf("%f%f%f%f", &l1, &l2, &l3, &l4);

   if (l1==l2 && l2==l3 && l3==l4) {
      printf("\nO quadril�tero pode ser um Losango ou um Quadrado!\n");
      printf("\nObserva��o: para distinguir o quadril�tero entre um losango\n");
      printf("ou um quadrado � necess�rio saber o valor dos �ngulos entre as arestas!\n");
   }
   else {
      printf("O quadril�tero n�o � um quadrado!\n");
   }

   system("pause");
   return 0;
}