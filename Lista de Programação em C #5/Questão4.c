/*Lista de Programacao em C#5
Professor: Allyson Bonetti Franca
Aluno: Hiel Saraiva Freitas de Queiroga
S1 - Eng. Computacao*/

//Questao 4

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

int main(void) {
	setlocale(LC_ALL, "Portuguese");

	int contador1;
	double num=15.0;
	
	for(contador1=1; contador1<=165; contador1+=1) {
		printf("%.0f ", pow(num, 2));
		num+=1;
	}
	system("pause");
	return 0;
}