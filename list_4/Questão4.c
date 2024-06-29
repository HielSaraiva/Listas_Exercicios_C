/*Estatística de notas*/
//Hiel Saraiva
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(void) {
	setlocale(LC_ALL, "Portuguese");

   float nota, soma;
   char esc='t';
   int contadorT, contador5;
      
   while (esc!='S') {
      soma=0;
      nota=0;
      contadorT=0;
      contador5=0;
      while(nota!=-1) {
         do {
            printf("Digite a %dº nota(-1 para mostrar resultados): ", contadorT+1);
            scanf("%f", &nota);
         } while ((nota<0 || nota>10)&&nota!=-1);
         contadorT+=1;
         soma = soma + nota;
    
         if(nota<5 && nota>=0) {
         contador5+=1;
         }
      }
      if (soma==-1) {
         printf("\nQuantidade de notas digitadas: %d", contadorT-1);
         printf("\nA média das notas é: 0");
         printf("\nNotas inferiores a 5: %d\n\n", contador5);
      } else {
         printf("\nQuantidade de notas digitadas: %d", contadorT-1);
         printf("\nA média das notas é: %.1f", (soma+1)/(contadorT-1));
         printf("\nNotas inferiores a 5: %d\n\n", contador5);
      }
      printf("Digite S para sair do programa ou qualquer outro digito para repetir o processo: ");
      scanf(" %c", &esc);
   }
   printf("Saindo...\n");
    
	system("pause");
	return 0;
}