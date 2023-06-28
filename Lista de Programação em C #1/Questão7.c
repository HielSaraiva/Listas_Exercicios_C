/*Lista de Programacao em C#1
Professor: Allyson Bonetti Franca
Aluno: Hiel Saraiva Freitas de Queiroga
S1 - Eng. Computacao*/

//Questao 7

#include <stdio.h>
#include <stdlib.h>

int main(void) {

    int pulsosTot;

    printf("Seja bem-vindo(a) ao calculador de conta telefonica do Hiel\n");
    printf("\nDigite o numero de pulsos totais do cliente:\n");
    scanf("%d", &pulsosTot);

    if (pulsosTot>90) {

        printf("\nO total de pulsos excedente e:\n%d\n", pulsosTot-90);
        printf("\nO valor de interurbanos e:\nR$ %f\n", 0.40*pulsosTot);
        printf("\nA quantidade de chamadas para celular foi:\n%d\n", pulsosTot);
        printf("\nAssim, o valor da conta do cliente e dada por:\nR$ %f\n", 21.40+(pulsosTot-90)*0.03+0.40*pulsosTot);
    }
    
    else {
        printf("\nO total de pulsos excedente e: ZERO\n");
        printf("\nO valor de interurbanos e:\nR$ %f\n", 0.40*pulsosTot);
        printf("\nA quantidade de chamadas para celular foi:\n%d\n", pulsosTot);
        printf("\nAssim, o valor da conta do cliente e dada por:\nR$ %f\n", 21.40+0.40*pulsosTot);
    }

    system("pause");
    return 0;
}