/*Lista de Programação em C#3
Professor: Allyson Bonetti França
Aluno: Hiel Saraiva Freitas de Queiroga
S1 - Eng. Computação*/

//Questão 2

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

float medias(float a, float b, float c, char d)
{
   float valor;

   if (d=='A') {
		valor = (a+b+c)/3;      
   }else if (d=='P') {
   	valor = (5*a+3*b+2*c)/10;
   }else if (d=='H' && a!=0 && b!=0 && c!=0) {
      valor = 3/(1/a + 1/b + 1/c);
   }
   return valor;
}

int main(void)
{
   setlocale(LC_ALL, "Portuguese_Brazil");

   float n1, n2, n3;
   char letra;

   printf("\nDigite A para calcular a Média Aritmética das notas:");
   printf("\nDigite P para calcular a Média Ponderada das notas:");
   printf("\nDigite H para calcular a Média Harmônica das notas:\n");
   scanf("%c", &letra);

   printf("\nDigite as três notas do aluno:\n");
   scanf("%f%f%f", &n1, &n2, &n3);

	if(letra=='A' || letra=='P' || letra=='H') {
   	if(n1>=0 && n1<=10 && n2>=0 && n2<=10 && n3>=0 && n3<=10) {
      	printf("Logo o valor da média escolhida é: %f\n", medias(n1, n2, n3, letra));
   	}
   	else {
      printf("\nDigite notas válidas e tente novamente!\n");
   	}
	}
	else{
		printf("\nDigite uma letra válida (A, P, H) e tente novamente!\n");
	}
   system("pause");
   return 0;
}
