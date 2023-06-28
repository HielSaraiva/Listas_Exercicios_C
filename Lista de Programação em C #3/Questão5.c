/*Lista de Programação em C#3
Professor: Allyson Bonetti França
Aluno: Hiel Saraiva Freitas de Queiroga
S1 - Eng. Computação*/

//Questão 5

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int duracao(int a, int b, int x, int y)
{
   int timeF; //timeF tem que ser em minutos, pois só pode retornar um valor de parâmetro!

   if(x-a>0 && y-b>0) {
      timeF = 60*(x-a)+y-b;
   }else if(x-a>0 && y-b==0) {
      timeF = 60*(x-a);
   }else if(x-a>0 && y-b<0) {
      timeF = 60*(x-a-1)+60+(y-b);
   }else if(x-a==0) {
      timeF = y-b;
   }else if(x-a<0 && y-b>0) {
      timeF = 60*((24-a)+x)+y-b;
   }else if(x-a<0 && y-b==0) {
      timeF = 60*((24-a)+x);
   }else if(x-a<0 && y-b<0) {
      timeF = 60*((24-a+x-1))+60+(y-b);
   }
   return timeF;
}

int main(void)
{
   setlocale(LC_ALL, "Portuguese_Brazil");

   int horaIni, minuIni, horaFin, minuFin;

   printf("Tendo em mente que a duração máxima do jogo é 24 horas\n");
   printf("\nDigite o horário de início do jogo, primeiro as horas, depois os minutos:\n");
   scanf("%d%d", &horaIni, &minuIni);

   printf("\nDigite o horário de término do jogo, primeiro as horas, depois os minutos:\n");
   scanf("%d%d", &horaFin, &minuFin);

   if (horaIni>=0 && horaIni<=23 && minuIni>=0 && minuIni<=59 && horaFin>=0 && horaFin<=23 && minuFin>=0 && minuFin<=59) {
      printf("Logo, a duração do jogo, em minutos, é: %d\n", duracao(horaIni, minuIni, horaFin, minuFin));
   }
   else {
      printf("Digite valores de horas válidas, no modo 24h, e tente novamente!\n");
   }
   system("pause");
   return 0;
}