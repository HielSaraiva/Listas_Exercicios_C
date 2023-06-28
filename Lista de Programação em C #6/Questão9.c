/*Lista de Programa��o em C#6
Professor: Allyson Bonetti Fran�a
Aluno: Hiel Saraiva Freitas de Queiroga
S1 - Eng. Computa��o*/

//Quest�o 9

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(void) {
   setlocale(LC_ALL, "Portuguese");

   int linhas, colunas, ordem;
   int cont1, cont2, cont3;

   do {
      printf("Digite o n�mero de linhas da matriz: ");
      scanf("%d", &linhas);
      if (linhas <= 0) {
         printf("VALOR INV�LIDO\n");
      }
      
   } while (linhas <= 0);
   

   do {
      printf("Digite o n�mero de colunas da matriz: ");
      scanf("%d", &colunas); 
      if (colunas <= 0) {
         printf("VALOR INV�LIDO\n");
      }
   } while (colunas <= 0);
   
   printf("\n");

   //Recebendo os valores da matriz
   int matriz[linhas][colunas];
   for (cont1 = 0; cont1 < linhas; cont1 += 1) {
      for (cont2 = 0; cont2 < colunas; cont2 += 1) {
         printf("Digite a %d� x %d�: ", cont1 + 1, cont2 + 1);
         scanf("%d", &matriz[cont1][cont2]);
      }
   }

   //Printando a Matriz
   printf("\nA matriz �:\n\n");
   for (cont1 = 0; cont1 < linhas; cont1 += 1) {
      for (cont2 = 0; cont2 < colunas; cont2 += 1) {
         printf("%d\t", matriz[cont1][cont2]);
      }
      printf("\n");
   }


   //Criando o vetor unidimensional linhasXcolunas
   ordem = linhas*colunas;
   int vetor[ordem];
   cont3 = 0;
   for (cont1 = 0; cont1 < linhas; cont1 += 1) {
      for (cont2 = 0; cont2 < colunas; cont2 += 1) {
         vetor[cont3] = matriz[cont1][cont2];
         cont3 += 1;
      }
   }

   //Printando o vetor
   printf("\nO vetor unidimensional de %d posi��es �:\n", ordem);
   for (cont3 = 0; cont3 < ordem; cont3 += 1) {
      printf("%d; ", vetor[cont3]);
   }
   printf("\n\n");

   system("pause");
   return 0;
}