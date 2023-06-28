/*Lista de Programacao em C#1
Professor: Allyson Bonetti Franca
Aluno: Hiel Saraiva Freitas de Queiroga
S1 - Eng. Computacao*/

//Questao 3

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	
	float valor1, valor2, valor3, mg;
	
	printf("Digite 3 valores:\n");
	scanf("%f %f %f", &valor1, &valor2, &valor3);
	
	mg = (valor1*valor2*valor3)/3;
	
	printf("\nO resultado da media geometrica e:\n%f\n", mg);
	
	system("pause");
	return 0;
}


