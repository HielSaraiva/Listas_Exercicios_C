/*Lista de Programação em C#6
Professor: Allyson Bonetti França
Aluno: Hiel Saraiva Freitas de Queiroga
S1 - Eng. Computação*/

//Questão 6

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(void) {
   setlocale(LC_ALL, "Portuguese");

   //a. ler a tabela e informar a distância entre duas cidades quaisquer
   int linhas, colunas;
   int cont1, cont2, cid1, cid2;
	int tabela[6][6] = {{0, 1, 2, 3, 4, 5}, {1, 0, 15, 30, 5, 12},
								{2, 15, 0, 10, 17, 28}, {3, 30, 10, 0, 3, 11},
								{4, 5, 17, 3, 0, 80}, {5, 12, 28, 11, 80, 0}} ;
	//Imprimindo a matriz referência
	printf("Imprimindo a tabela das distâncias:\n");
	for(cont1 = 0; cont1 < 6; cont1 += 1) {
		for(cont2 = 0; cont2 < 6; cont2 += 1) {
			printf("%d\t", tabela[cont1][cont2]);
		}
		printf("\n");
	}
	
   do {
      do {
         printf("\nDigite a 1ª e a 2ª cidade que deseja calcular a distância, respectivamente(0 em ambas para sair): ");
         scanf("%d%d", &cid1, &cid2);
         if (cid1 < 0 || cid1 > 5 || cid2 < 0 || cid2 > 5 || (cid1 == 0 && cid2 != 0) || (cid2 == 0 && cid1 != 0)) {
         	printf("\nVALOR INVÁLIDO, TENTE NOVAMENTE!\n");
			}
      } while (cid1 < 0 || cid1 > 5 || cid2 < 0 || cid2 > 5);
      if (cid1 != 0 && cid2 != 0) {
         printf("\nA distância entra as cidades %d e %d é: %d\n", cid1, cid2, tabela[cid1][cid2]);
      }
   } while (cid1 != 0 || cid2 != 0);
   printf("Saindo do cálculo da distância...\n");

   //b. imprimir a tabela sem repetições
   printf("\nA tabela sem repetições é dada por:\n");
   for (linhas = 0; linhas < 6; linhas += 1) {
      for (colunas = 0; colunas < 6; colunas += 1) {
         if ((colunas > linhas) && linhas != 0) {
            printf(" \t");
         }
         else {
            printf("%d\t", tabela[linhas][colunas]);
         }
      }
      printf("\n");
   }
   
   //c. total percorrido no percurso
   int total = 0, contador = 1;
   printf("\nVamos calcular o total percorrido no percuso:\n");
   cont1 = 0;
   cont2 = 0;

   do {
      printf("Digite a %dª cidade(-1 para sair): ", contador);
      scanf("%d", &cont1);
      if (cont1 < -1) {
         printf("VALOR INVÁLIDO!\n");
      }    
   } while (cont1 < -1);
   cont2 = cont1;

   while (cont1 != -1 || cont2 != -1) {
      do {
         printf("Digite a %dª cidade(-1 para sair): ", contador + 1);
         scanf("%d", &cont1);
         if (cont1 < -1) {
            printf("VALOR INVÁLIDO!\n");
         }
         
      } while (cont1 < -1);
      

      if (cont1 == -1) {
         break;
      }
      
      total += tabela[cont2][cont1];
      cont2 = cont1;
      contador += 1;
   }
   printf("\nTotal percorrido: %d km\n\n", total);
   
   system("pause");
   return 0;
}
