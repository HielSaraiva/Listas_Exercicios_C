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
		printf("Digite um número para que seja determinado o somatório dos seus números antecessores,\nsendo X menor do que 500:");
		scanf("%d", &X);
		if(X<0 || X>500) {
			printf("NÚMERO INVÁLIDO!!\n\n");
		}
	} while(X<0 || X>500);

	for(cont1=1; cont1<=X; cont1+=1) {
		somatorio = somatorio + cont1;
	}
	printf("\nO valor do somatório dos %d primeiros inteiros maiores que ZERO e menores que 500 é: %d\n", X, somatorio);

	system("pause");
	return 0;
}