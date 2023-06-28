/*Lista de Programacao em C#5
Professor: Allyson Bonetti Franca
Aluno: Hiel Saraiva Freitas de Queiroga
S1 - Eng. Computacao*/

//Questao 2

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(void) {
	setlocale(LC_ALL, "Portuguese");

	int num, cont1, result;
	
	do {
		printf("Digite um número para que seja informada a sua tabuada:");
		scanf("%d", &num);
		if(num<=0) {
			printf("NÚMERO INVÁLIDO\n\n");
		}
	} while(num<=0);

	for(cont1=1; cont1<=num; cont1+=1) {
		result = cont1*num;
		printf("%d X %d = %d\n", cont1, num, result);
	}
	system("pause");
	return 0;
}