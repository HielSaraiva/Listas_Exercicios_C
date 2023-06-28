/*Lista de Programação em C#2
Professor: Allyson Bonetti França
Aluno: Hiel Saraiva Freitas de Queiroga
S1 - Eng. Computação*/

//Questão 9

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

int main(void) {

   setlocale(LC_ALL, "Portuguese_Brazil"); /*Ao colocar esse comando, para representar os números decimais é necessário usar vírgular ao invés de ponto no arquivo .exe*/

   float peso, altura, imc;

   printf("Digite o peso(kg) da pessoa:\n");
   scanf("%f", &peso);

   printf("\nDigite a altura(m) da pessoa:\n");
   scanf("%f", &altura);

   imc = peso/(pow(altura,2));
   
   if (imc>=18.5) {
      if (imc>=25) {
         printf("\nO IMC da pessoa é %f, logo está acima do peso normal!\n", imc);
      }
      else {
         printf("\nO IMC da pessoa é %f, logo está no peso normal!\n", imc);
      }
   }
   else {
      printf("\nO IMC da pessoa é %f, logo está abaixo do peso normal!\n", imc);
   }

   system("pause");
   return 0;
}