/*Pirâmide*/
//Hiel Saraiva
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(void) {
	setlocale(LC_ALL, "Portuguese");

   int alt, contador, j, i;
   char carac;

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
      for (contador = 1; contador<=2*i-1; contador+=1)
      {
         printf("%c", carac);
      }
      printf("\n");
   }
	system("pause");
	return 0;
}