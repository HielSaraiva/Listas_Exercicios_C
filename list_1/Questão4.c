/*Lista de Programacao em C#1
Professor: Allyson Bonetti França
Aluno: Hiel Saraiva Freitas de Queiroga
S1 - Eng. Computacao*/

//Questao 4

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	
	float valor1, valor2, valor3, mp;

	printf("Digite 3 valores:\n");
	scanf("%f %f %f", &valor1, &valor2, &valor3);

	mp = (1*valor1+2*valor2+3*valor3)/6;

	printf("\nO resultado da media ponderada e:\n%f\n", mp);

	system("pause");
	return 0;
}
