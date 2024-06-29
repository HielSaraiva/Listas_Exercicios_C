/*Lista de Programacao em C#5
Professor: Allyson Bonetti Franca
Aluno: Hiel Saraiva Freitas de Queiroga
S1 - Eng. Computacao*/

//Questao 8

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

int main(void) {
	setlocale(LC_ALL, "Portuguese");

	float num2, num1, numS=num1;
	int contador1;

	for (contador1=1; contador1<=5; contador1+=1) {
		printf("Digite o %dº número: ", contador1);
		scanf("%f", &num1);
		if (num1>=numS) {
			num2 = num1;
		}
		numS=num1;
	}
	printf("O maior número é %.1f\n", num2);

	system("pause");
	return 0;
}