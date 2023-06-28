/*Lista de Programacao em C#5
Professor: Allyson Bonetti Franca
Aluno: Hiel Saraiva Freitas de Queiroga
S1 - Eng. Computacao*/

//Questao 5

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

int main(void) {
	setlocale(LC_ALL, "Portuguese");

   float num;
   int cont1;

   printf("Digite um valor para que seja calculada a suas potências: ");
   scanf("%f", &num);

   for (cont1=0; cont1<=9; cont1+=1) {
      printf("%1.1f^%d = %.1f\n", num, cont1, pow(num, cont1));
   }
	system("pause");
	return 0;
}