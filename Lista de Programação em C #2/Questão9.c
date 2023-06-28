/*Lista de Programa��o em C#2
Professor: Allyson Bonetti Fran�a
Aluno: Hiel Saraiva Freitas de Queiroga
S1 - Eng. Computa��o*/

//Quest�o 9

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

int main(void) {

   setlocale(LC_ALL, "Portuguese_Brazil"); /*Ao colocar esse comando, para representar os n�meros decimais � necess�rio usar v�rgular ao inv�s de ponto no arquivo .exe*/

   float peso, altura, imc;

   printf("Digite o peso(kg) da pessoa:\n");
   scanf("%f", &peso);

   printf("\nDigite a altura(m) da pessoa:\n");
   scanf("%f", &altura);

   imc = peso/(pow(altura,2));
   
   if (imc>=18.5) {
      if (imc>=25) {
         printf("\nO IMC da pessoa � %f, logo est� acima do peso normal!\n", imc);
      }
      else {
         printf("\nO IMC da pessoa � %f, logo est� no peso normal!\n", imc);
      }
   }
   else {
      printf("\nO IMC da pessoa � %f, logo est� abaixo do peso normal!\n", imc);
   }

   system("pause");
   return 0;
}