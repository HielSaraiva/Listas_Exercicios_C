/*Lista de Programa��o em C#3
Professor: Allyson Bonetti Fran�a
Aluno: Hiel Saraiva Freitas de Queiroga
S1 - Eng. Computa��o*/

//Quest�o 4

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

char categoria(int x)
{
   char cat;

   if (x>=5 && x<=7) {
      cat = 'A';
   }else if (x>=8 && x<=10) {
      cat = 'B';
   }else if (x>=11 && x<=13) {
      cat = 'C';
   }else if (x>=14 && x<=17) {
      cat = 'D';
   }else if (x>=18) {
      cat = 'E';
   }
   return cat;
}

int main(void)
{
   setlocale(LC_ALL, "Portuguese_Brazil");

   int idade;

   printf("Digite a idade do nadador em quest�o:\n");
   scanf("%d", &idade);
   
   if (idade>=0 && idade<=4) {
      printf("\nO nadador n�o tem idade para ser classificado!\n");
   }else if (idade>=5) {
         printf("\nA categoria do nadador �: %c\n", categoria(idade));
      }
   system("pause");
   return 0;
}