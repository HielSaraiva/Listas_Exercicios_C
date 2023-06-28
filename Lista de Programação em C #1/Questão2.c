/*Lista de Programacao em C#1
Professor: Allyson Bonetti Franca
Aluno: Hiel Saraiva Freitas de Queiroga
S1 - Eng. Computacao*/

//Questao 2

#include <stdio.h>
#include <stdlib.h>

int main(void) {
    
   int nota1, nota2, nota3, ma;

   printf("Digite as 3 notas:\n");
   scanf("%d %d %d", &nota1, &nota2, &nota3);

   ma = (nota1 + nota2 + nota3)/3;
    
   printf("\nO resultado da media:\n%d\n", ma);	
   
   system("pause");
   return 0; 
}








