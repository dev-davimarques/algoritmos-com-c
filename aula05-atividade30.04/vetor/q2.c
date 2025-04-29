#include <stdio.h>

int main(int argc, char const *argv[])
{
    // Faça um programa que leia cinco valores e os armazene em um vetor. Em seguida, mostre todos os valores
    // lidos juntamente com a média dos valores.

    float vetor[5];
    float soma = 0;

    for (int i = 0; i < 5; i++)
    {
        printf("Digite o %d valor: ",i+1);
        scanf("%f", &vetor[i]);
        soma += vetor[i];
    }

    for (int i = 0; i < 5; i++)
    {
        printf("%.2f ",vetor[i]);
    }

    printf("\nMédia: %.2f\n", soma/5);
    
    
    return 0;
}
