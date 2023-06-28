/*Egocentrismo*/
//Hiel Saraiva
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(void) {
	setlocale(LC_ALL, "Portuguese");

   int cont;
   for(cont=1; cont<=10; cont+=1) {
      printf("%d-Hiel\n", cont);
   }
	system("pause");
	return 0;
}