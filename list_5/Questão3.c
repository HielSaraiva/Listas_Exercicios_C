/*Lista de Programacao em C#5
Professor: Allyson Bonetti Franca
Aluno: Hiel Saraiva Freitas de Queiroga
S1 - Eng. Computacao*/

//Questao 3

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(void) {
	setlocale(LC_ALL, "Portuguese");

	int cont1;

	for(cont1=1; cont1<=199; cont1+=1) {
		if(cont1%4==0) {
			printf("%d é divisível por 4\n", cont1);	
		}
	}
	system("pause");
	return 0;
}