/*Lista de Programa��o em C#6
Professor: Allyson Bonetti Fran�a
Aluno: Hiel Saraiva Freitas de Queiroga
S1 - Eng. Computa��o*/

//Quest�o 7

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
         printf("\n%d� pessoa:\n", cont1 + 1);
         printf("Digite a sua nota para o filme assistido(otimo, bom, regular, ruim ou pessimo): ");
         scanf("%s", nota_digitada);
         if (strcmp(nota_digitada, "otimo") != 0 && strcmp(nota_digitada, "bom") != 0 && strcmp(nota_digitada, "regular") != 0 && strcmp(nota_digitada, "ruim") != 0 && strcmp(nota_digitada, "pessimo") != 0) {
            printf("NOTA INV�LIDA, TENTE NOVAMENTE!\n\n");
         }
      } while (strcmp(nota_digitada, "otimo") != 0 && strcmp(nota_digitada, "bom") != 0 && strcmp(nota_digitada, "regular") != 0 && strcmp(nota_digitada, "ruim") != 0 && strcmp(nota_digitada, "pessimo") != 0);
      if (strcmp(nota_digitada, "otimo") == 0) {
         do {
            printf("Digite a sua idade: ");
            scanf("%d", &idade_otimo);
            if (idade_otimo <= 0) {
               printf("IDADE INV�LIDA, TENTE NOVAMENTE!\n\n");
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
               printf("IDADE INV�LIDA, TENTE NOVAMENTE!\n\n");
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
               printf("IDADE INV�LIDA, TENTE NOVAMENTE!\n\n");
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
               printf("IDADE INV�LIDA, TENTE NOVAMENTE!\n\n");
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
               printf("IDADE INV�LIDA, TENTE NOVAMENTE!\n\n");
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
   printf("A quantidade de respostas �timo �: %d respostas\n", cont_otimo);
   
   //b.
   printf("A diferen�a percentual entre respostas bom e regular �: ");
   if (cont_bom >= cont_regular) {
      printf("%.2f %%\n", (float)(100*(cont_bom - cont_regular))/20);
   } 
   else {
      printf("%.2f %%\n", (float)(100*(cont_regular - cont_bom))/20);
   }

   //c.
   if (cont_ruim > 0) {
      printf("A m�dia de idade das pessoas que responderam ruim �: %.2f anos\n", (float) idade_ruim_soma/cont_ruim);
   }
   else {
      printf("Ningu�m respondeu ruim!\n");
   }

   //d.
   if (cont_pessimo > 0) {
      printf("A porcentagem de respostas p�ssimo e a maior idade que utilizou esta op��o s�o, respectivamente: %.2f %% e %d anos\n", (float) (100*cont_pessimo)/20, idade_max_pessimo);
   }
   else {
      printf("Ningu�m respondeu pessimo!\n");
   }

   //e.
   if (cont_otimo > 0 && cont_ruim > 0) {
      printf("A diferen�a de idade entre a maior idade que respondeu otimo(%d anos) e a maior idade que respondeu ruim(%d anos) �: ", idade_max_otimo, idade_max_ruim);
      if (idade_max_otimo > idade_max_ruim) {
         printf("%d anos\n", idade_max_otimo - idade_max_ruim);
      }
      else {
         printf("%d anos\n", idade_max_ruim - idade_max_otimo);
      }
   }
   else {
      printf("O c�lculo � invi�vel, pois � necess�rio que haja pelo menos um voto de cada nota(otimo e ruim)!\n");
   }
   system("pause");
   return 0;
}