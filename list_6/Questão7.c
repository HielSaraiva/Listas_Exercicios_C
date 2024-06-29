/*Lista de Programação em C#6
Professor: Allyson Bonetti França
Aluno: Hiel Saraiva Freitas de Queiroga
S1 - Eng. Computação*/

//Questão 7

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

int main(void) {
   setlocale(LC_ALL, "Portuguese");

   int idade_otimo, idade_bom, idade_regular, idade_ruim, idade_pessimo;
   int cont_otimo = 0, cont_bom = 0, cont_regular = 0, cont_ruim = 0, cont_pessimo = 0;
   char nota_digitada[7];
   int cont1, idade_ruim_soma = 0;
   int idade_max_otimo = 1, idade_max_bom = 1, idade_max_regular = 1, idade_max_ruim = 1, idade_max_pessimo = 1;

   for (cont1 = 0; cont1 < 20; cont1 += 1) {
      do {
         printf("\n%dª pessoa:\n", cont1 + 1);
         printf("Digite a sua nota para o filme assistido(otimo, bom, regular, ruim ou pessimo): ");
         scanf("%s", nota_digitada);
         if (strcmp(nota_digitada, "otimo") != 0 && strcmp(nota_digitada, "bom") != 0 && strcmp(nota_digitada, "regular") != 0 && strcmp(nota_digitada, "ruim") != 0 && strcmp(nota_digitada, "pessimo") != 0) {
            printf("NOTA INVÁLIDA, TENTE NOVAMENTE!\n\n");
         }
      } while (strcmp(nota_digitada, "otimo") != 0 && strcmp(nota_digitada, "bom") != 0 && strcmp(nota_digitada, "regular") != 0 && strcmp(nota_digitada, "ruim") != 0 && strcmp(nota_digitada, "pessimo") != 0);
      if (strcmp(nota_digitada, "otimo") == 0) {
         do {
            printf("Digite a sua idade: ");
            scanf("%d", &idade_otimo);
            if (idade_otimo <= 0) {
               printf("IDADE INVÁLIDA, TENTE NOVAMENTE!\n\n");
            }
            if (idade_otimo >= idade_max_otimo) {
               idade_max_otimo = idade_otimo;
            }
         } while (idade_otimo <= 0);
         cont_otimo += 1;
      }
      if (strcmp(nota_digitada, "bom") == 0) {
         do {
            printf("Digite a sua idade: ");
            scanf("%d", &idade_bom);
            if (idade_bom <= 0) {
               printf("IDADE INVÁLIDA, TENTE NOVAMENTE!\n\n");
            }
            if (idade_bom >= idade_max_bom) {
               idade_max_bom = idade_bom;
            }
         } while (idade_bom <= 0);
         cont_bom += 1;     
      }   
      if (strcmp(nota_digitada, "regular") == 0) {
         do {
            printf("Digite a sua idade: ");
            scanf("%d", &idade_regular);
            if (idade_regular <= 0) {
               printf("IDADE INVÁLIDA, TENTE NOVAMENTE!\n\n");
            }
            if (idade_regular >= idade_max_regular) {
               idade_max_regular = idade_regular;
            }
         } while (idade_regular <= 0);
         cont_regular += 1;
      }
      if (strcmp(nota_digitada, "ruim") == 0) {
         do {
            printf("Digite a sua idade: ");
            scanf("%d", &idade_ruim);
            if (idade_ruim <= 0) {
               printf("IDADE INVÁLIDA, TENTE NOVAMENTE!\n\n");
            }
            if (idade_ruim > 0) {
               idade_ruim_soma += idade_ruim;
            }
            if (idade_ruim >= idade_max_ruim) {
               idade_max_ruim = idade_ruim;
            } 
         } while (idade_ruim <= 0);
         cont_ruim += 1;
      }
      if (strcmp(nota_digitada, "pessimo") == 0) {
         do {
            printf("Digite a sua idade: ");
            scanf("%d", &idade_pessimo);
            if (idade_pessimo <= 0) {
               printf("IDADE INVÁLIDA, TENTE NOVAMENTE!\n\n");
            }
            if (idade_pessimo >= idade_max_pessimo) {
               idade_max_pessimo = idade_pessimo;
            }
         } while (idade_pessimo <= 0);
         cont_pessimo += 1;
      }
   }
   printf("\n");

   //a.
   printf("A quantidade de respostas ótimo é: %d respostas\n", cont_otimo);
   
   //b.
   printf("A diferença percentual entre respostas bom e regular é: ");
   if (cont_bom >= cont_regular) {
      printf("%.2f %%\n", (float)(100*(cont_bom - cont_regular))/20);
   } 
   else {
      printf("%.2f %%\n", (float)(100*(cont_regular - cont_bom))/20);
   }

   //c.
   if (cont_ruim > 0) {
      printf("A média de idade das pessoas que responderam ruim é: %.2f anos\n", (float) idade_ruim_soma/cont_ruim);
   }
   else {
      printf("Ninguém respondeu ruim!\n");
   }

   //d.
   if (cont_pessimo > 0) {
      printf("A porcentagem de respostas péssimo e a maior idade que utilizou esta opção são, respectivamente: %.2f %% e %d anos\n", (float) (100*cont_pessimo)/20, idade_max_pessimo);
   }
   else {
      printf("Ninguém respondeu pessimo!\n");
   }

   //e.
   if (cont_otimo > 0 && cont_ruim > 0) {
      printf("A diferença de idade entre a maior idade que respondeu otimo(%d anos) e a maior idade que respondeu ruim(%d anos) é: ", idade_max_otimo, idade_max_ruim);
      if (idade_max_otimo > idade_max_ruim) {
         printf("%d anos\n", idade_max_otimo - idade_max_ruim);
      }
      else {
         printf("%d anos\n", idade_max_ruim - idade_max_otimo);
      }
   }
   else {
      printf("O cálculo é inviável, pois é necessário que haja pelo menos um voto de cada nota(otimo e ruim)!\n");
   }
   system("pause");
   return 0;
}