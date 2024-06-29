/*Lista de Programa��o em C#6
Professor: Allyson Bonetti Fran�a
Aluno: Hiel Saraiva Freitas de Queiroga
S1 - Eng. Computa��o*/

//Quest�o 8

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(void) {
   setlocale(LC_ALL, "Portuguese");

   int linhas, colunas, matriz[5][5];

   printf("Recebendo uma matriz 5x5:\n");
   for (linhas = 0; linhas < 5; linhas += 1) {
      for (colunas = 0; colunas < 5; colunas += 1) {
         printf("Digite a %d� x %d�: ", linhas + 1, colunas + 1);
         scanf("%d", &matriz[linhas][colunas]);
      }
   }
   
   //,atriz A
   printf("A matriz A �:\n\n");
   for (linhas = 0; linhas < 5; linhas += 1) {
      for (colunas = 0; colunas < 5; colunas += 1) {
         printf("%d\t", matriz[linhas][colunas]);
      }
      printf("\n");
   }
   printf("\n");
   //Criando a matriz transposta de A
   int trava;
  
   for (linhas = 0; linhas < 5; linhas += 1) {
      for (colunas = 0; colunas < 5; colunas += 1) {
         if (colunas <= linhas) {
            continue;
         }
         trava = matriz[colunas][linhas];
         matriz[colunas][linhas] = matriz[linhas][colunas];
         matriz[linhas][colunas] = trava;
      }
   }
   
   printf("A matriz transposta de A �:\n\n");
   for (linhas = 0; linhas < 5; linhas += 1) {
      for (colunas = 0; colunas < 5; colunas += 1) {
         printf("%d\t", matriz[linhas][colunas]);
      }
      printf("\n");
   }
   printf("\n");
   system("pause");
   return 0;
}