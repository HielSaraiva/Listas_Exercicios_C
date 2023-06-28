/*Lista de Programação em C#6
Professor: Allyson Bonetti França
Aluno: Hiel Saraiva Freitas de Queiroga
S1 - Eng. Computação*/

//Questão 2

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void ordem_crescente( int a[] );
int pesquisa( int a );
void troca( int a[] );

int vetorGlobal[7], chave;

int main(void)
{
   setlocale(LC_ALL, "Portuguese");

   int vetor[7], contador, elemento;

   //a.
   printf("Digite 7 valores inteiros para ser armazenado em um vetor\n");

   for (contador = 0; contador < 7; contador += 1) {
      do {
         printf("Digite o %dº dígito: ", contador + 1);
         scanf("%d", &vetor[contador]);
         if (vetor[contador] < 0) {
            printf("Digite valores positivos!!\n\n");
         }
         
      } while (vetor[contador] < 0);
      
   }
   printf("\n");
   for (contador = 0; contador < 7; contador += 1) {
      printf("índice %d: %d\n", contador, vetor[contador]);
   }
   printf("\n");
   
   for (contador = 0; contador < 7; contador += 1) {
      vetorGlobal[contador] = vetor[contador];
   }
   
   //b.
   printf("Digite a chave para pesquisa(inteiro): ");
   scanf("%d", &chave);

   elemento = pesquisa(chave);

   if (elemento != -1) {
      printf("Valor encontrado no índice %d\n", elemento);
   }
   else {
      printf("Valor não encontrado!\n");
   }

   //c.
   printf("\nNovo vetor troca:\n[ ");
   troca(vetor);
   printf("]\n\n");

   system("pause");
   return 0;
}

/*Coloca em ordem crescente*/
void ordem_crescente( int a[] )
{
   int passo, i, trava;

   for ( passo = 1; passo < 7; passo += 1 ) {
      for ( i = 0; i < 6; i += 1 ) {
         if ( a[i] > a[i + 1]) {
            trava = a[i];
            a[i] = a[i + 1];
            a[i + 1] = trava;
         }
      }
   }
}

/*Pesquisa a chave no vetor*/
int pesquisa( int a )
{
   int cont;

   for (cont = 0; cont < 7; cont += 1) {
      if (vetorGlobal[cont] == a) {
         return cont;
      }
   }
   return -1;
}

/*Troca de valores*/
void troca( int a[] )
{
   int cont1, cont2;

   for (cont1 = 0; cont1 < 7; cont1 += 1) {
      for (cont2 = 1; cont2 < a[cont1]; cont2 += 1) {
         vetorGlobal[cont1] += cont2;
      }
      printf("%d ", vetorGlobal[cont1]);
   }
}