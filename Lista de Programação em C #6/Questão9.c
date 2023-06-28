/*Lista de Programação em C#6
Professor: Allyson Bonetti França
Aluno: Hiel Saraiva Freitas de Queiroga
S1 - Eng. Computação*/

//Questão 9

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(void) {
   setlocale(LC_ALL, "Portuguese");

   int linhas, colunas, ordem;
   int cont1, cont2, cont3;

   do {
      printf("Digite o número de linhas da matriz: ");
      scanf("%d", &linhas);
      if (linhas <= 0) {
         printf("VALOR INVÁLIDO\n");
      }
      
   } while (linhas <= 0);
   

   do {
      printf("Digite o número de colunas da matriz: ");
      scanf("%d", &colunas); 
      if (colunas <= 0) {
         printf("VALOR INVÁLIDO\n");
      }
   } while (colunas <= 0);
   
   printf("\n");

   //Recebendo os valores da matriz
   int matriz[linhas][colunas];
   for (cont1 = 0; cont1 < linhas; cont1 += 1) {
      for (cont2 = 0; cont2 < colunas; cont2 += 1) {
         printf("Digite a %dª x %dª: ", cont1 + 1, cont2 + 1);
         scanf("%d", &matriz[cont1][cont2]);
      }
   }

   //Printando a Matriz
   printf("\nA matriz é:\n\n");
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
   printf("\nO vetor unidimensional de %d posições é:\n", ordem);
   for (cont3 = 0; cont3 < ordem; cont3 += 1) {
      printf("%d; ", vetor[cont3]);
   }
   printf("\n\n");

   system("pause");
   return 0;
}