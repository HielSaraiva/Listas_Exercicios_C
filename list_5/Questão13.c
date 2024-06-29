/*Lista de Programacao em C#5
Professor: Allyson Bonetti Franca
Aluno: Hiel Saraiva Freitas de Queiroga
S1 - Eng. Computacao*/

//Questao 13

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

int main(void) {
	setlocale(LC_ALL, "Portuguese");

   int lado, cont1, cont2;

   do {
      printf("Digite o valor do lado do quadrado: ");
      scanf("%d", &lado);
      if (lado<=0) {
         printf("VALOR INVÁLIDO\n\n");
      }
   } while (lado<=0);

   printf("\n");

   for (cont2=1; cont2<=lado; cont2+=1) {
      for (cont1=1; cont1<=lado; cont1+=1) {
      printf("*");
      }
      printf("\n");
   }
	system("pause");
	return 0;
}