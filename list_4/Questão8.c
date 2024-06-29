/*Tudo junto*/
//Hiel Saraiva
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(void) {
	setlocale(LC_ALL, "Portuguese");

   int dig, N, T, S, cont1, cont2, i=1, j, linhas, colunas, alt, contador;
   char des, carac;

   do {
      do {
         printf("\nBem vindo ao Programa do Hiel\n\n");
         printf("Dígitos:\n");
         printf("1 - Para desenhar uma Escada\n");
         printf("2 - Para desenhar uma Pirâmide\n");
         printf("3 - Para desenhar uma Matriz\n");
         printf("0 - Para fechar o programa\n\n");
         scanf("%d", &dig); 
         if (dig!=1 && dig!=2 && dig!=3 && dig!=0) {
            printf("\nDigite um número válido e tente novamente!\n");
         }
      } while (dig!=1 && dig!=2 && dig!=3 && dig!=0);
   
      if (dig==0) {
         printf("Saindo...\n");
      }
      if (dig==1) {
         printf("\nDigite o caracter que será usado para desenhar a escada: ");
         scanf(" %c", &des);

         do {
            do {
               printf("\nDigite quantos degraus terá a escada(0 para voltar para o menu): ");
               scanf("%d", &N);
            } while (N<0);
            printf("\n");
            for (cont2 = 1; cont2 <= N; cont2+=1) {
               for (cont1 = 1; cont1 <= 2*i; cont1++) {
                  printf("%c", des);
               }
               printf("\n");
               i+=1;
            }
            i=1;
         } while (N!=0);
         dig=-1;
      }
      if (dig==2) {
         do {
            printf("\n");

            printf("\nDigite o caractere a ser usado: ");
            scanf(" %c", &carac);

            do {
               printf("\nDigite a altura da pirâmide: ");
               scanf("%d", &alt);
            } while (alt<=0);
            printf("\n");

            for (i = 1; i <= alt; i+=1) {
               for (j = 1; j <= alt - i; j+=1) {
                  printf(" ");
               }
               for (contador = 1; contador<=2*i-1; contador+=1) {
                  printf("%c", carac);
               }
               printf("\n");
            }
            printf("\n");
            printf("\nDigite 0 para voltar ao menu ou qualquer outro dígito inteiro para repetir: ");
            scanf("%d", &S);
         } while (S!=0);
         dig=-1;
      }
      if (dig==3) {
         do {
            printf("\nDigite o caracter a ser usado: ");
            scanf(" %c", &carac);

            do {
               printf("Digite o total de linhas da Matriz: ");
               scanf("%d", &linhas);
            } while (linhas<=0);

            do {
               printf("Digite o total de colunas da Matriz: ");
               scanf("%d", &colunas);
            } while (colunas<=0);
            printf("\n");
            for (cont2=1; cont2<=linhas; cont2+=1) {
               for (cont1=1; cont1<=colunas; cont1+=1) {
                  printf("%c", carac);
               }
               printf("\n");
            }
            printf("\nDigite 0 para voltar ao menu ou qualquer outro dígito inteiro para repetir: ");
            scanf("%d", &T);
         } while (T!=0);
         dig=-1;
      }
   } while (dig!=1 && dig!=2 && dig!=3 && dig!=0);
   
	system("pause");
	return 0;
}