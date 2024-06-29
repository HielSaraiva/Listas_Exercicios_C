/*Lista de Programacao em C#5
Professor: Allyson Bonetti Franca
Aluno: Hiel Saraiva Freitas de Queiroga
S1 - Eng. Computacao*/

//Questao 15

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(void) {
	setlocale(LC_ALL, "Portuguese");

   float media, idade, idadeMin=1000000, idadeMax=0, somaIdade=0, contador=0;

   while (idade!=0) {
      do {
         printf("Digite a idade da %.0fª pessoa(0 para sair): ", contador+1);
         scanf("%f", &idade);
         if (idade<0) {
            printf("IDADE INVÁLIDA!\n\n");
         }     
      } while (idade<0);
      
      if (idade>=idadeMax) {
         idadeMax=idade;
      }
      if (idade<=idadeMin && idade!=0) {
         idadeMin=idade;
      }
      somaIdade+=idade;
      contador+=1;
   }
   media = somaIdade/(contador-1);

   printf("\nTotal de pessoas participantes: %.0f\n", contador-1);

   if (contador==1) {
      printf("A idade Média do grupo é: 0\n");
      printf("A idade Mínima é: 0\n");   
   } else {
      printf("A idade Média do grupo é: %.2f\n", media);
      printf("A idade Mínima é: %.0f\n", idadeMin);   
   }
   
   printf("A idade Máxima é: %.0f\n", idadeMax);
	system("pause");
	return 0;
}