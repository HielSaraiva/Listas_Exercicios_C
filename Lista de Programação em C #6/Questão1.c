/*Lista de Programa��o em C#6
Professor: Allyson Bonetti Fran�a
Aluno: Hiel Saraiva Freitas de Queiroga
S1 - Eng. Computa��o*/

//Quest�o 1 

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#define TAMANHO 10

/*Prot�tipos de Fun��es*/
void ordem_crescente( int a[] );
void media ( int a[] );
void primos ( int a[] );

int main(void)
{
   setlocale(LC_ALL, "Portuguese");

   int contador, vetor[TAMANHO] = {2, 4, 35, 50, 23, 17, 9, 12, 27, 5};

   //a. MAIOR VALOR
   ordem_crescente(vetor);
   printf("O maior valor do vetor unidimensional �: %d\n\n", vetor[TAMANHO - 1]);

   //b. M�DIA DOS VALORES
   media(vetor);

   //c. OS VALORES DISPOSTOS EM ORDEM CRESCENTE
   printf("Os valores dispostos em ordem crescente, s�o:\n");
   for (contador = 0; contador <TAMANHO; contador +=1) {
      printf("�ndice %d: %d\n", contador, vetor[contador]);
   }
   printf("\n");

   //d. SUBCONJUNTO DE VALORES PRIMOS QUE EST� CONTIDO NO VETOR
   printf("Os n�meros primos s�o: ");
   primos(vetor);
   printf("\n");

   system("pause");
   return 0;
}

/*Coloca em ordem crescente*/
void ordem_crescente( int a[] )
{
   int passo, i, trava;

   for ( passo = 1; passo < TAMANHO; passo += 1 ) {
      for ( i = 0; i < TAMANHO - 1; i += 1 ) {
         if ( a[i] > a[i + 1]) {
            trava = a[i];
            a[i] = a[i + 1];
            a[i + 1] = trava;
         }
      }
   }
}

/*Calcula a m�dia dos valores*/
void media( int a[] )
{
   int cont, total = 0;

   for (cont = 0; cont <= TAMANHO - 1; cont += 1) {
      total += a[cont];
   }
   printf("A m�dia dos valores � dada por: %.2f\n\n", (float)total/TAMANHO);
}

/*Descobre os primos*/
void primos( int a[] )
{
   int cont1, cont2, div=0;
   for (cont1 = 0; cont1 < TAMANHO; cont1 += 1) {
      for (cont2 = 2; cont2 <= a[cont1]; cont2 += 1) {
         if (a[cont1]%cont2 == 0) {
            div+=1;
         }  
      }
      if (div==1) {
         printf("%d ", a[cont1]);
      }
      div=0;
   }
}