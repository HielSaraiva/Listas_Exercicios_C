/*Lista de Programacao em C#5
Professor: Allyson Bonetti Franca
Aluno: Hiel Saraiva Freitas de Queiroga
S1 - Eng. Computacao*/

//Questao 12

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(void) {
	setlocale(LC_ALL, "Portuguese");

   int x, y, cont, expo=1;

   printf("Vamos calculara exponenciação de x^y\n\n");

   do {
      printf("Digite o valor de x inteiro diferente de ZERO : ");
      scanf("%d", &x);
      if (x==0) {
         printf("VALOR INVÁLIDO\n\n");
      }
   } while (x==0);
   
   do {
      printf("Digite o valor de y inteiro positivo: ");
      scanf("%d", &y);
      if (y<0) {
         printf("VALOR INVÁLIDO\n\n");
      }
   } while (y<0);
   for (cont=1; cont<=y; cont+=1) {
      expo*=x;
   }
   printf("O valor do exponencial %d^%d é: %d\n", x, y, expo);

	system("pause");
	return 0;
}