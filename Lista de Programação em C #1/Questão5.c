/*Lista de Programacao em C#1
Professor: Allyson Bonetti Franca
Aluno: Hiel Saraiva Freitas de Queiroga
S1 - Eng. Computacao*/

//Questao 5

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	
	float nota1, nota2, notaS;
	
	printf("Escreva as duas notas bimestrais:\n");
	scanf("%f %f", &nota1, &nota2);
	
	notaS = (2*nota1 + 3*nota2)/5;
	
	if (nota1<=10 && nota1>=0 && nota2<=10 && nota2>=0)
	{
		printf("\nA nota do semetre:\n%f\n", notaS);
	}
	
	else
	{
		printf("Digite notas validas, entre 0 e 10, e tente novamente!\n");
	}
	
	system("pause");
	return 0;	
}

