/*Lista de Programa��o em C#2
Professor: Allyson Bonetti Fran�a
Aluno: Hiel Saraiva Freitas de Queiroga
S1 - Eng. Computa��o*/

//Quest�o 10

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(void) {

   setlocale(LC_ALL, "Portuguese_Brazil"); /*Ao colocar esse comando, para representar os n�meros decimais � necess�rio usar v�rgular ao inv�s de ponto no arquivo .exe*/

   int n1, n2, n3;
   float ma1, ma2;

   printf("Escreva 3 notas inteiras:\n");
   scanf("%d %d %d", &n1, &n2, &n3);

   ma1 = n1+n2+n3;
   ma2 = ma1/3;

   printf("\nLogo, a m�dia aritm�tica das 3 notas �:\n%f\n", ma2);

   system("pause");
   return 0;
}