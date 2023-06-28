/*Lista de Programacao em C#5
Professor: Allyson Bonetti Franca
Aluno: Hiel Saraiva Freitas de Queiroga
S1 - Eng. Computacao*/

//Questao 14

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(void) {
	setlocale(LC_ALL, "Portuguese");

   char letra = 't';
   float raz, Flu=0, Fla=0, Vasc=0, Bota=0, Outro=0, Tot;

   do {
      printf("\nPesquisa de times do Rio de Janeiro\n");
      printf("Digite N se torce para o Fluminense\n");
      printf("Digite M se torce para o Flamengo\n");
      printf("Digite V se torce para o Vasco\n");
      printf("Digite B se torce para o Botafogo\n");
      printf("Digite O se torce para outro time\n");
      printf("Digite R para encerrar\n");
      scanf(" %c", &letra);

      if (letra=='N') {
         Flu+=1;
      }
      if (letra=='M') {
         Fla+=1;
      }      
      if (letra=='V') {
         Vasc+=1;
      }
      if (letra=='B') {
         Bota+=1;
      }      
      if (letra=='O') {
         Outro+=1;
      }
   } while (letra!='R');

   Tot=Flu+Fla+Vasc+Bota+Outro;
   raz = 100/Tot;

   printf("\nO total de torcedores entrevistados foi: %.0f", Tot);
   printf("\nTorcedores do Fluminense: %.0f - %.2f%% do total", Flu, raz*Flu);
   printf("\nTorcedores do Flamengo: %.0f - %.2f%% do total", Fla, raz*Fla);
   printf("\nTorcedores do Vasco: %.0f - %.2f%% do total", Vasc, raz*Vasc);
   printf("\nTorcedores do Botafogo: %.0f - %.2f%% do total", Bota, raz*Bota);
   printf("\nTorcedores de outro time: %.0f - %.2f%% do total\n", Outro, raz*Outro);

	system("pause");
	return 0;
}