/*Lista de Programação em C#2
Professor: Allyson Bonetti França
Aluno: Hiel Saraiva Freitas de Queiroga
S1 - Eng. Computação*/

//Questão 8

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(void) {

   setlocale(LC_ALL, "Portuguese_Brazil"); /*Ao colocar esse comando, para representar os números decimais é necessário usar vírgular ao invés de ponto no arquivo .exe*/

   float n1, n2, n3;

   printf("Digite 3 números:\n");
   scanf("%f%f%f", &n1, &n2, &n3);

   if (n1>=n2) {
      if (n3>=n1) {
         printf("\nLogo a ordem crescente dos números digitados é: %f %f %f\n", n2, n1, n3);
      }
      else {
         if (n3>=n2) {
            printf("\nLogo a ordem crescente dos números digitados é: %f %f %f\n", n2, n3, n1);
         }
         else {
            printf("\nLogo a ordem crescente dos números digitados é: %f %f %f\n", n3, n2, n1);
         }
      }
   }
   else {
      if (n3>=n2) {
         printf("\nLogo a ordem crescente dos números digitados é: %f %f %f\n", n1, n2, n3);
      }
      else {
         if (n3>= n1)
         {
            printf("\nLogo a ordem crescente dos números digitados é: %f %f %f\n", n1, n3, n2);
         }
         else {
            printf("\nLogo a ordem crescente dos números digitados é: %f %f %f\n", n3, n1, n2);
         }
      }
   }

   system("pause");
   return 0;
}