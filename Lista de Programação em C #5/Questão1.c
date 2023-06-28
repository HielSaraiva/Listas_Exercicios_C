/*Lista de Programacao em C#5
Professor: Allyson Bonetti Franca
Aluno: Hiel Saraiva Freitas de Queiroga
S1 - Eng. Computacao*/

//Questao 1

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(void) {
	setlocale(LC_ALL, "Portuguese");

	int X, somatorio=0, cont1;

	do {
		printf("Digite um n�mero para que seja determinado o somat�rio dos seus n�meros antecessores,\nsendo X menor do que 500:");
		scanf("%d", &X);
		if(X<0 || X>500) {
			printf("N�MERO INV�LIDO!!\n\n");
		}
	} while(X<0 || X>500);

	for(cont1=1; cont1<=X; cont1+=1) {
		somatorio = somatorio + cont1;
	}
	printf("\nO valor do somat�rio dos %d primeiros inteiros maiores que ZERO e menores que 500 �: %d\n", X, somatorio);

	system("pause");
	return 0;
}