/*Lista de Programa��o em C#2
Professor: Allyson Bonetti Fran�a
Aluno: Hiel Saraiva Freitas de Queiroga
S1 - Eng. Computa��o*/

//Quest�o 8

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(void) {

   setlocale(LC_ALL, "Portuguese_Brazil"); /*Ao colocar esse comando, para representar os n�meros decimais � necess�rio usar v�rgular ao inv�s de ponto no arquivo .exe*/

   float n1, n2, n3;

   printf("Digite 3 n�meros:\n");
   scanf("%f%f%f", &n1, &n2, &n3);

   if (n1>=n2) {
      if (n3>=n1) {
         printf("\nLogo a ordem crescente dos n�meros digitados �: %f %f %f\n", n2, n1, n3);
      }
      else {
         if (n3>=n2) {
            printf("\nLogo a ordem crescente dos n�meros digitados �: %f %f %f\n", n2, n3, n1);
         }
         else {
            printf("\nLogo a ordem crescente dos n�meros digitados �: %f %f %f\n", n3, n2, n1);
         }
      }
   }
   else {
      if (n3>=n2) {
         printf("\nLogo a ordem crescente dos n�meros digitados �: %f %f %f\n", n1, n2, n3);
      }
      else {
         if (n3>= n1)
         {
            printf("\nLogo a ordem crescente dos n�meros digitados �: %f %f %f\n", n1, n3, n2);
         }
         else {
            printf("\nLogo a ordem crescente dos n�meros digitados �: %f %f %f\n", n3, n1, n2);
         }
      }
   }

   system("pause");
   return 0;
}