/*Lista de Programação em C#6
Professor: Allyson Bonetti França
Aluno: Hiel Saraiva Freitas de Queiroga
S1 - Eng. Computação*/

//Questão 5

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(void) {
   setlocale(LC_ALL, "Portuguese");

   /*a. Soma total entre peões ou bispos e a quantidade
   de posições vazias*/
   int tabuleiro[8][8] = {{1, 3, 0, 5, 4, 0, 2, 1}, 
                          {1, 0, 1, 0, 0, 1, 0, 0},
                          {0, 0, 0, 0, 1, 0, 6, 0},
                          {1, 0, 0, 1, 1, 0, 0, 1},
                          {0, 1, 0, 4, 0, 0, 1, 0},
                          {0, 0, 3, 1, 0, 0, 1, 1},
                          {1, 0, 6, 6, 0, 0, 1, 0},
                          {1, 0, 5, 0, 1, 1, 0, 6}};
   int linhas, colunas;
   
   printf("Tabuleiro digitado:\n");
   for (linhas = 0; linhas < 8; linhas += 1) {
      for (colunas = 0; colunas < 8; colunas += 1) {
         printf("%d\t", tabuleiro[linhas][colunas]);
      }
      printf("\n");
   }
   printf("\n");

   int cont0=0;//VAZIOS
   int cont1=0;//PEÕES
   int cont2=0;//CAVALOS
   int cont3=0;//TORRES
   int cont4=0;//BISPOS
   int cont5=0;//REIS
   int cont6=0;//RAINHAS

   for (linhas = 0; linhas < 8; linhas += 1) {
      for (colunas = 0; colunas < 8; colunas += 1) {
         if (tabuleiro[linhas][colunas] == 0) {
            cont0+=1;
         }
         if (tabuleiro[linhas][colunas] == 1) {
            cont1+=1;
         }
         if (tabuleiro[linhas][colunas] == 2) {
            cont2+=1;
         }
         if (tabuleiro[linhas][colunas] == 3) {
            cont3+=1;
         }
         if (tabuleiro[linhas][colunas] == 4) {
            cont4+=1;
         }
         if (tabuleiro[linhas][colunas] == 5) {
            cont5+=1;
         }
         if (tabuleiro[linhas][colunas] == 6) {
            cont6+=1;
         }
      }
   }
   printf("A soma total entre o número de peões ou bispos é %d, e a quantidade de vazios é %d\n", cont1 + cont4, cont0);

   //b. quantidade de cada tipo de peça
   printf("Quantidade de vazios: %d\n", cont0);
   printf("Quantidade de peões: %d\n", cont1);
   printf("Quantidade de cavalos: %d\n", cont2);
   printf("Quantidade de torres: %d\n", cont3);
   printf("Quantidade de bispos: %d\n", cont4);
   printf("Quantidade de reis: %d\n", cont5);
   printf("Quantidade de rainhas: %d\n", cont6);

   system("pause");
   return 0;
}