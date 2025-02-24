#include <stdio.h>
#include <stdlib.h>

int main (void)
{
  //declaração de variáveis do tipo inteiro
  float a, b, soma, sub, div, mult;
  
  printf("Digite um numero inteiro: ");
  scanf("%f", &a); //recebe um inteiro e armazena na variável a
  
  printf("Digite um numero inteiro: ");
  scanf("%f", &b); //recebe um inteiro e armazena na variável b
  soma = a + b;
  sub = a - b;
  div = a / b;
  mult = a * b;
  //Efetua adição de a com b e armazena na variável soma
  
  printf("O valor da soma = %f\n", soma); //Mostra mensagem com o resultado
  printf("O valor da subtração = %f\n", sub); //Mostra mensagem com o resultado
  printf("O valor da divisão = %f\n", div); //Mostra mensagem com o resultado
  printf("O valor da multiplicação = %f\n", mult); //Mostra mensagem com o resultado
  
//   system ("pause");
  return(0);
}