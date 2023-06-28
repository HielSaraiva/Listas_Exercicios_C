/*Lista de Programacao em C#5
Professor: Allyson Bonetti Franca
Aluno: Hiel Saraiva Freitas de Queiroga
S1 - Eng. Computacao*/

//Questao 6

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

int main(void) {
	setlocale(LC_ALL, "Portuguese");

   int num, cont1, fat=1;
   
   printf("Digite um número inteiro para que seja calculado o seu fatorial: ");
   scanf("%d", &num);

   for (cont1=1; cont1<=num; cont1+=1) {
      fat*=cont1;
   }
   printf("%d! = %d\n", num, fat);

	system("pause");
	return 0;
}