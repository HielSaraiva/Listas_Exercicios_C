/*Lista de Programacao em C#5
Professor: Allyson Bonetti Franca
Aluno: Hiel Saraiva Freitas de Queiroga
S1 - Eng. Computacao*/

//Questao 9

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

int main(void) {
	setlocale(LC_ALL, "Portuguese");

   int num, contador=0;

   do {
      printf("Digite um número inteiro positivo: ");
      scanf("%d", &num);
      if (num<=0) {
         printf("NÚMERO INVÁLIDO!\n\n");
      }
      
   } while (num<=0);
   
   while (contador<=num) {
      if (contador%2==0) {
         printf("%d ", contador);
      }
      contador+=1;
   }
	system("pause");
	return 0;
}