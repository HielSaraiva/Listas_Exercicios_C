/*Lista de Programação em C#2
Professor: Allyson Bonetti França
Aluno: Hiel Saraiva Freitas de Queiroga
S1 - Eng. Computação*/

//Questão 1

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(void) {
	
	setlocale(LC_ALL, "Portuguese_Brazil"); /*Ao colocar esse comando, para representar os números decimais é necessário usar vírgular ao invés de ponto no arquivo .exe*/
	
	float num, n1, n2;
	
	printf("Bem-vindo(a) à calculadora de Hiel\n\n");
	printf("Digite 1 para soma\nDigite 2 para subtração\nDigite 3 para multiplicação\nDigite 4 para divisão\n\n");
	scanf("%f", &num);
	
	if(num==1) {	
		printf("\nDigite os dois números a serem somados\n");
		scanf("%f %f", &n1, &n2);
		
		printf("O resultado da soma é %f\n", n1+n2);
		printf("\nObrigado por utilizar a nossa calculadora\n");

	}else if(num==2) {
			printf("\nDigite os dois números a serem subtraidos\n");
			scanf("%f %f", &n1, &n2);
		
			printf("\nO resultado da subtração e %f\n", n1-n2);
			printf("\nObrigado por utilizar a nossa calculadora\n");

	}else if(num==3) {
		printf("\nDigite os dois números a serem multiplicados\n");
		scanf("%f %f", &n1, &n2);
		
		printf("\nO resultado da multiplicação é %f\n", n1*n2);
		printf("\nObrigado por utilizar a nossa calculadora\n");

	}else if(num==4) {
		printf("\nDigite os dois números a serem divididos\n");
		scanf("%f %f", &n1, &n2);
		
			if(n2!=0) {
				printf("\nO resultado da divisão é %f\n", n1/n2);
				printf("\nObrigado por utilizar a nossa calculadora\n");
			}
		
			if(n2==0) {
				printf("\nO resultado da divisão é indeterminado, pois o denominador é ZERO\nColoque um valor válido e tente novamente!\n");
			}
	}
	
	system("pause");
	return 0;
}
