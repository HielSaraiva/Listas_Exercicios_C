/*Aprova��o*/
//Hiel Saraiva
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(void) {
	setlocale(LC_ALL, "Portuguese");

   int contador;
   float nota, soma;
   char esc;

   printf("Digite S para sair do programa ou digite qualquer outra tecla para calcular a m�dia!\n");
   scanf(" %c", &esc);
  
   while(esc!='S') {
      for(contador=1; contador<=10; contador++) {
      do {
         printf("Digite a %d� nota: ", contador);
         scanf("%f", &nota);
      } while (nota<0 || nota>10);
      soma = soma + nota;
      }
      printf("Logo a m�dia da mat�ria �: %.1f", soma/10);
      if(soma/10>=7) {
         printf("\nO aluno est� APROVADO!\n");
      }
      else {
         printf("\nO aluno est� REPROVADO!\n");
      }
      soma=0;
      printf("\nDigite S para sair do programa ou digite qualquer outra tecla para calcular a m�dia!\n");
      scanf(" %c", &esc);
   }
   printf("\nSaindo do programa!\n");
	system("pause");
	return 0;
}