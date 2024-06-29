/*Aprovação*/
//Hiel Saraiva
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(void) {
	setlocale(LC_ALL, "Portuguese");

   int contador;
   float nota, soma;
   char esc;

   printf("Digite S para sair do programa ou digite qualquer outra tecla para calcular a média!\n");
   scanf(" %c", &esc);
  
   while(esc!='S') {
      for(contador=1; contador<=10; contador++) {
      do {
         printf("Digite a %dª nota: ", contador);
         scanf("%f", &nota);
      } while (nota<0 || nota>10);
      soma = soma + nota;
      }
      printf("Logo a média da matéria é: %.1f", soma/10);
      if(soma/10>=7) {
         printf("\nO aluno está APROVADO!\n");
      }
      else {
         printf("\nO aluno está REPROVADO!\n");
      }
      soma=0;
      printf("\nDigite S para sair do programa ou digite qualquer outra tecla para calcular a média!\n");
      scanf(" %c", &esc);
   }
   printf("\nSaindo do programa!\n");
	system("pause");
	return 0;
}