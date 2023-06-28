/*Lista de Programa��o em C#6
Professor: Allyson Bonetti Fran�a
Aluno: Hiel Saraiva Freitas de Queiroga
S1 - Eng. Computa��o*/

//Quest�o 4

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(void) {
   setlocale(LC_ALL, "Portuguese");

   int d;

   do {
      printf("Digite a dimens�o do vetor A(m�ximo 20 elementos): ");
      scanf("%d", &d);
      if (d<=0 || d>20) {
         printf("VALOR INV�LIDO! TENTE VALORES ENTRE [1, 20]\n\n");
      }
   } while (d<=0 || d>20);
   
   int cont1, cont2, trava, vetorA[d];

   for (cont1 = 0; cont1 < d; cont1 += 1) {
      printf("Digite o %d� valor do vetor A: ", cont1 + 1);
      scanf("%d", &vetorA[cont1]);
   }
   printf("\n");

   //Bubble-sort
   for (cont1 = 1; cont1 < d; cont1 += 1) {
      for (cont2 = 0; cont2 < d - 1; cont2 += 1) {
         if (vetorA[cont2] > vetorA[cont2 + 1]) {
            trava = vetorA[cont2];
            vetorA[cont2] = vetorA[cont2 + 1];
            vetorA[cont2 + 1] = trava;
         }
      }
   }
   
   printf("O vetor posto em ordem crescente �:\n");
   for (cont1 = 0; cont1 < d; cont1 += 1) {
      printf("%d; ", vetorA[cont1]);
   }
   printf("\n");

   system("pause");
   return 0;
}