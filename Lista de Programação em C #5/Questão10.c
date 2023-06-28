/*Lista de Programacao em C#5
Professor: Allyson Bonetti Franca
Aluno: Hiel Saraiva Freitas de Queiroga
S1 - Eng. Computacao*/

//Questao 10

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

int main(void) {
	setlocale(LC_ALL, "Portuguese");

   float res[3];//R1, R2 

   do {
      do{
         printf("Digite a 1ª resistência: ");
         scanf("%f", &res[0]);
         if (res[0]<0) {
            printf("VALOR INVÁLIDO\n\n");
         }
      } while (res[0]<0);

      do{
         printf("Digite a 2ª resistência: ");
         scanf("%f", &res[1]);
         if (res[1]<0) {
            printf("VALOR INVÁLIDO\n\n");
         }
      } while (res[1]<0);

      res[3] = (res[0]*res[1])/(res[0]+res[1]);

      if (res[0]!=0 && res[1]!=0) {
         printf("A resistência equivalente é: %.1f\n\n", res[3]);
      }
   } while (res[0]!=0 && res[1]!=0);
   printf("SAINDO...\n");

	system("pause");
	return 0;
}