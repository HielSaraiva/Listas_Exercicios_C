/*Lista de Programacao em C#5
Professor: Allyson Bonetti Franca
Aluno: Hiel Saraiva Freitas de Queiroga
S1 - Eng. Computacao*/

//Questao 7

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

int main(void) {
	setlocale(LC_ALL, "Portuguese");

   int cont1, cont2, div=0;
   for (cont1=2; cont1<=100; cont1+=1) {
      for (cont2=2; cont2<=cont1; cont2+=1) {
         if (cont1%cont2==0) {
            div+=1;
         }  
      }
      if (div==1) {
         printf("%d ", cont1);
      }
      div=0;
   }
	system("pause");
	return 0;
}