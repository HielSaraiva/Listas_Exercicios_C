/*Lista de Programa��o em C#2
Professor: Allyson Bonetti Fran�a
Aluno: Hiel Saraiva Freitas de Queiroga
S1 - Eng. Computa��o*/

//Quest�o 4

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(void) {

   setlocale(LC_ALL, "Portuguese_Brazil"); /*Ao colocar esse comando, para representar os n�meros decimais � necess�rio usar v�rgular ao inv�s de ponto no arquivo .exe*/                                       
   
   float n1, n2;

   printf("Digite as duas notas do aluno:\n");
   scanf("%f%f", &n1, &n2);

   if (n1<=10 && n1>=0 && n2<=10 && n2>=0) {
      
      if ((n1+n2)/2>=6) {
         printf("\nO aluno est� aprovado com m�dia %f\n", (n1+n2)/2);
      }
      else {
         printf("\nO aluno est� reprovado com m�dia %f\n", (n1+n2)/2);
      }
   }

   else {
      printf("\nColoque duas notas v�lidas e tente novamente!\n");
   }
   
   system("pause");
   return 0;
}
