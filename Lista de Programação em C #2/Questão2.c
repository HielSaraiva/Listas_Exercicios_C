/*Lista de Programa��o em C#2
Professor: Allyson Bonetti Fran�a
Aluno: Hiel Saraiva Freitas de Queiroga
S1 - Eng. Computa��o*/

//Quest�o 2

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(void) {

   setlocale(LC_ALL, "Portuguese_Brazil"); /*Ao colocar esse comando, para representar os n�meros decimais � necess�rio usar v�rgular ao inv�s de ponto no arquivo .exe*/
   
   int n1;

   printf("Digite um n�mero inteiro para que seja discriminado sua paridade:\n");
   scanf("%d", &n1);

   if (n1%2==0) {
      printf("\nO n�mero digitado � par\n");
   }
   
   else {
      printf("\nO n�mero digitado � �mpar\n");
   }

   system("pause");
   return 0;
}