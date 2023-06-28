/*Idade média*/
//Hiel Saraiva
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(void) {
   setlocale(LC_ALL, "Portuguese");
  
   float cont, idade, soma = 0;
   char esc='t';

   printf("Lembre-se de digitar idades válidas, maiores do que zero!\n");
   while (esc!='S') {
      cont=0;
      idade=1;
      while(idade!=0) {
         do {
            printf("Digite a idade do %.0fº aluno(0 para encerrar): ", cont+1);
            scanf("%f", &idade);
         } while (idade<0);
         soma = soma + idade;
         cont+=1;
      }
      printf("\nLogo a média de idade é dada por: %.1f\n", soma/(cont-1));
      printf("\nDigite S para sair do programa ou qualquer outra tecla para repetir o processo: ");
      scanf(" %c", &esc);
   }
   printf("\nSaindo...\n");
	system("pause");
	return 0;
}