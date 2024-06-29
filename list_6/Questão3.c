/*Lista de Programação em C#6
Professor: Allyson Bonetti França
Aluno: Hiel Saraiva Freitas de Queiroga
S1 - Eng. Computação*/

//Questão 3

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(void) {
   setlocale(LC_ALL, "Portuguese");

   int d, cont1, cont2, cont3;

   do {
      printf("Digite a dimensão das matrizes A e B: ");
      scanf("%d", &d);
      if (d<0 || d>5) {
         printf("Dimensão inválida, tente um intervalo entre [0, 5]\n");
      }
      
   } while (d<0 || d>5);

   int matrizA[d][d], matrizB[d][d];

   for (cont1 = 0; cont1 < d; cont1 += 1) {
      for (cont2 = 0; cont2 < d; cont2 += 1) {
         printf("Digite o valor da %dª linha e %dª coluna da A: ", cont1 + 1, cont2 + 1);
         scanf("%d", &matrizA[cont1][cont2]);
      }
   }
   printf("\n");
   for (cont1 = 0; cont1 < d; cont1 += 1) {
      for (cont2 = 0; cont2 < d; cont2 += 1) {
         printf("Digite o valor da %dª linha e %dª coluna da B: ", cont1 + 1, cont2 + 1);
         scanf("%d", &matrizB[cont1][cont2]);
      }
   }

   //a. SOMA DAS MATRIZES A E B
   int matrizS[d][d];
   printf("A soma das duas matrizes A e B é dada por:\n");
   for (cont1 = 0; cont1 <= d-1; cont1 += 1) {
      for (cont2 = 0; cont2 <= d-1; cont2 += 1) {
         matrizS[cont1][cont2] = matrizA[cont1][cont2] + matrizB[cont1][cont2];
      }
   }
   for (cont1 = 0; cont1 <= d-1; cont1 += 1) {
      for (cont2 = 0; cont2 <= d-1; cont2 += 1) {
         printf("%d\t", matrizS[cont1][cont2]);
      }
      printf("\n");
   }

   //b. SOMA DAS DIAGONAIS
   int SomaDA=0, SomaDB=0;
   printf("\nA soma das diagonais das matrizes A e B é dada por:\n");
   for (cont1 = 0; cont1 <= d-1; cont1 += 1) {
      SomaDA += matrizA[cont1][cont1];
      SomaDB += matrizB[cont1][cont1];
   }
   printf("Matriz A: %d\n", SomaDA);
   printf("Matriz B: %d\n\n", SomaDB);

   //c. Multiplicação das duas Matrizes
   int matrizAB[d][d];
   for (cont1 = 0; cont1 < d; cont1 += 1) {
      for (cont2 = 0; cont2 < d; cont2 += 1) {
         matrizAB[cont1][cont2] = 0;
      }
   }   
   printf("A multiplicação das duas matrizes A e B é dada por:\n");
   for (cont1 = 0; cont1 < d; cont1 += 1) {
      for (cont2 = 0; cont2 < d; cont2 += 1) {
         for (cont3 = 0; cont3 < d; cont3 += 1) {
            matrizAB[cont1][cont2] += matrizA[cont1][cont3]*matrizB[cont3][cont2];
         }
      }
   }
   for (cont1 = 0; cont1 < d; cont1 += 1) {
      for (cont2 = 0; cont2 < d; cont2 += 1) {
         printf("%d\t", matrizAB[cont1][cont2]);
      }
      printf("\n"); 
   }
   system("pause");
   return 0;
}