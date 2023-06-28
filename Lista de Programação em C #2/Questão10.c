/*Lista de Programação em C#2
Professor: Allyson Bonetti França
Aluno: Hiel Saraiva Freitas de Queiroga
S1 - Eng. Computação*/

//Questão 10

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(void) {

   setlocale(LC_ALL, "Portuguese_Brazil"); /*Ao colocar esse comando, para representar os números decimais é necessário usar vírgular ao invés de ponto no arquivo .exe*/

   int n1, n2, n3;
   float ma1, ma2;

   printf("Escreva 3 notas inteiras:\n");
   scanf("%d %d %d", &n1, &n2, &n3);

   ma1 = n1+n2+n3;
   ma2 = ma1/3;

   printf("\nLogo, a média aritmética das 3 notas é:\n%f\n", ma2);

   system("pause");
   return 0;
}