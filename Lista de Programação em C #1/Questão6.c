/*Lista de Programacao em C#1
Professor: Allyson Bonetti Franca
Aluno: Hiel Saraiva Freitas de Queiroga
S1 - Eng. Computacao*/

//Questao 6

#include <stdio.h>
#include <stdlib.h>

int main(void) {
   
   float gastoMarido, gastoEsposa, gastoTotal, saldoMarido, saldoEsposa, valorDev, porcentPagaMarido, porcentPagaEsposa;

   printf("Digite os gastos do marido:\n");
   scanf("%f", &gastoMarido);

   printf("\nDigite os gastos da esposa:\n");
   scanf("%f", &gastoEsposa);

   gastoTotal = gastoEsposa + gastoMarido;
   porcentPagaMarido = 100*gastoMarido/gastoTotal;
   porcentPagaEsposa = 100*gastoEsposa/gastoTotal;
   valorDev = gastoTotal/2;
   saldoMarido = gastoMarido - valorDev;
   saldoEsposa = gastoEsposa - valorDev;

   if (saldoMarido>0)
   {
      printf("\nDespesas pagas pelo Marido: $ %f\n", gastoMarido);
      printf("Porcentagem das despesas pagas pelo Marido: %f\n", porcentPagaMarido);
      printf("Valor devido por cada um, marido e esposa: $ %f\n", valorDev);
      printf("Saldo do Marido: $ %f\n\n", saldoMarido);

      printf("\nDespesas pagas pela Esposa: $ %f\n", gastoEsposa);
      printf("Porcentagem das despesas pagas pela Esposa: %f\n", porcentPagaEsposa);
      printf("Valor devido por cada um, marido e esposa: $ %f\n", valorDev);
      printf("Saldo da Esposa: $ %f\n", saldoEsposa);

      printf("\nLogo, a esposa esta devendo $ %f ao marido!\n", saldoMarido);
   }
   else
   {
      if (saldoMarido<0)
      {
         printf("\nDespesas pagas pelo Marido: $ %f\n", gastoMarido);
         printf("Porcentagem das despesas pagas pelo marido: %f\n", porcentPagaMarido);
         printf("Valor devido por cada um, marido e esposa: $ %f\n", valorDev);
         printf("Saldo do Marido: $ %f\n\n", saldoMarido);

         printf("\nDespesas pagas pela Esposa: $ %f\n", gastoEsposa);
         printf("Porcentagem das despesas pagas pela esposa: %f\n", porcentPagaEsposa);
         printf("Valor devido por cada um, marido e esposa: $ %f\n", valorDev);
         printf("Saldo da Esposa: $ %f\n", saldoEsposa);

         printf("\nLogo, o marido esta devendo $ %f a esposa!\n", saldoEsposa);
      }
      else
      {
         printf("\nDespesas pagas pelo Marido: $ %f\n", gastoMarido);
         printf("Porcentagem das despesas pagas pelo marido: %f\n", porcentPagaMarido);
         printf("Valor devido por cada um, marido e esposa: $ %f\n", valorDev);
         printf("Saldo do Marido: $ %f\n\n", saldoMarido);

         printf("\nDespesas pagas pela Esposa: $ %f\n", gastoEsposa);
         printf("Porcentagem das despesas pagas pela esposa: %f\n", porcentPagaEsposa);
         printf("Valor devido por cada um, marido e esposa: $ %f\n", valorDev);
         printf("Saldo da Esposa: $ %f\n", saldoEsposa);

         printf("\nLogo, nao e preciso que nenhum dos dois pague nada ao outro, pois o saldo dos dois e ZERO\n");
      }
   }
   
   system("pause");
   return 0;
}





