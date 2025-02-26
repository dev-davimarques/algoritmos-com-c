#include <stdio.h>
#include <stdlib.h>

void calculate(float x, float y){
  float soma = x + y;
  printf("Soma: %.2f\n",soma);
  float sub = x - y;
  printf("Subtração: %.2f\n",sub);
  float mult = x * y;
  printf("Multiplicação: %.2f\n",mult);
  float div = x / y;
  printf("Divisão: %.2f\n",div);
}

int main (void)
{
  float num1, num2;

  printf("Digite o primeiro valor: ");
  scanf("%f",&num1);

  printf("Digite o segundo valor: ");
  scanf("%f",&num2);

  calculate(num1, num2);
  
  return(0);
}