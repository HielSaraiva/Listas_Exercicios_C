/*Matriz*/
//Hiel Saraiva
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(void) {
	setlocale(LC_ALL, "Portuguese");

   int linhas, colunas, cont1, cont2;
   char carac;

   printf("Digite o caracter a ser usado: ");
   scanf(" %c", &carac);

   do {
      printf("Digite o total de linhas da Matriz: ");
      scanf("%d", &linhas);
   } while (linhas<=0);

   do {
      printf("Digite o total de colunas da Matriz: ");
      scanf("%d", &colunas);
   } while (colunas<=0);

   for (cont2=1; cont2<=linhas; cont2+=1) {
      for (cont1=1; cont1<=colunas; cont1+=1) {
         printf("%c", carac);
      }
      printf("\n");
   }

	system("pause");
	return 0;
}