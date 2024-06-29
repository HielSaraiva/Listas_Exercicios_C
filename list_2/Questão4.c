/*Lista de Programação em C#2
Professor: Allyson Bonetti França
Aluno: Hiel Saraiva Freitas de Queiroga
S1 - Eng. Computação*/

//Questão 4

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(void) {

   setlocale(LC_ALL, "Portuguese_Brazil"); /*Ao colocar esse comando, para representar os números decimais é necessário usar vírgular ao invés de ponto no arquivo .exe*/                                       
   
   float n1, n2;

   printf("Digite as duas notas do aluno:\n");
   scanf("%f%f", &n1, &n2);

   if (n1<=10 && n1>=0 && n2<=10 && n2>=0) {
      
      if ((n1+n2)/2>=6) {
         printf("\nO aluno está aprovado com média %f\n", (n1+n2)/2);
      }
      else {
         printf("\nO aluno está reprovado com média %f\n", (n1+n2)/2);
      }
   }

   else {
      printf("\nColoque duas notas válidas e tente novamente!\n");
   }
   
   system("pause");
   return 0;
}
