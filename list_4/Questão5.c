/*Caracteres progressivos 1*/
//Hiel Saraiva
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(void) {
	setlocale(LC_ALL, "Portuguese");

   char des;
   int N, cont1, cont2, i=1;

   printf("Digite o caracter que será usado para desenhar a escada: ");
   scanf(" %c", &des);

   do {
      do {
        printf("Digite quantos degraus terá a escada(0 para sair): ");
        scanf("%d", &N);
      } while(N<0);
      for (cont2 = 1; cont2 <= N; cont2+=1) {
         for (cont1 = 1; cont1 <= 2*i; cont1++) {
            printf("%c", des);
         }
         printf("\n");
         i+=1;
      }
      i=1;
   } while (N!=0);
   printf("Saindo...\n");

	system("pause");
	return 0;
}