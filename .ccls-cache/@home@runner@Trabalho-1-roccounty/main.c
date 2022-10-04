/*------------------------------------------------------
 * Primeiro trabalho AEDs I - Programação
 * Assunto: Comandos de controle de repetição e seleção
 * Prof. Luiz Eduardo da Silva
 * Aluno: <NICOLE LIMA>
 *-----------------------------------------------------*/
#include <stdio.h>

int main(void) {
  int num = 123, caso = 0;
  while (num < 988)
  {
    int a, b, c, a1, b1, c1, inv1, sub, inv2, maior, menor, soma;
    a = num / 100;
    b = num / 10 - a * 10;
    c = num - a * 100 - b * 10;
    if (a != b && b != c && a != c && a != 0 && b != 0 && c != 0)
    {
      inv1 = c * 100 + b * 10 + a;
      if (inv1 > num)
      {
        maior = inv1;
        menor = num;
      } else
      {
        maior = num;
        menor = inv1;
      }
      sub = maior - menor;
      a1 = sub / 100;
      b1 = sub / 10 - a1 * 10;
      c1 = sub - a1 * 100 - b1 * 10;
      inv2 = c1 * 100 + b1 * 10 + a1;
      soma = sub + inv2;
      caso++;
      printf("caso %3.d: %3.d-%3.d=%3.d, %3.d+%3.d=%3.d\n", caso, maior, menor, sub, sub, inv2, soma);
    }
    num++;
  }
}
  