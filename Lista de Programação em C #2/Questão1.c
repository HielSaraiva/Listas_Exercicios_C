/*Lista de Programa��o em C#2
Professor: Allyson Bonetti Fran�a
Aluno: Hiel Saraiva Freitas de Queiroga
S1 - Eng. Computa��o*/

//Quest�o 1

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(void) {
	
	setlocale(LC_ALL, "Portuguese_Brazil"); /*Ao colocar esse comando, para representar os n�meros decimais � necess�rio usar v�rgular ao inv�s de ponto no arquivo .exe*/
	
	float num, n1, n2;
	
	printf("Bem-vindo(a) � calculadora de Hiel\n\n");
	printf("Digite 1 para soma\nDigite 2 para subtra��o\nDigite 3 para multiplica��o\nDigite 4 para divis�o\n\n");
	scanf("%f", &num);
	
	if(num==1) {	
		printf("\nDigite os dois n�meros a serem somados\n");
		scanf("%f %f", &n1, &n2);
		
		printf("O resultado da soma � %f\n", n1+n2);
		printf("\nObrigado por utilizar a nossa calculadora\n");

	}else if(num==2) {
			printf("\nDigite os dois n�meros a serem subtraidos\n");
			scanf("%f %f", &n1, &n2);
		
			printf("\nO resultado da subtra��o e %f\n", n1-n2);
			printf("\nObrigado por utilizar a nossa calculadora\n");

	}else if(num==3) {
		printf("\nDigite os dois n�meros a serem multiplicados\n");
		scanf("%f %f", &n1, &n2);
		
		printf("\nO resultado da multiplica��o � %f\n", n1*n2);
		printf("\nObrigado por utilizar a nossa calculadora\n");

	}else if(num==4) {
		printf("\nDigite os dois n�meros a serem divididos\n");
		scanf("%f %f", &n1, &n2);
		
			if(n2!=0) {
				printf("\nO resultado da divis�o � %f\n", n1/n2);
				printf("\nObrigado por utilizar a nossa calculadora\n");
			}
		
			if(n2==0) {
				printf("\nO resultado da divis�o � indeterminado, pois o denominador � ZERO\nColoque um valor v�lido e tente novamente!\n");
			}
	}
	
	system("pause");
	return 0;
}
