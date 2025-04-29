#include <stdio.h>

int main(int argc, char const *argv[])
{
    // Crie um programa que leia do teclado seis valores inteiros e em seguida mostra na tela os valores lidos.

    int vetor[6];

    for (int i = 0; i < 6; i++)
    {
        printf("Digite o %d valor: ",i);
        scanf("%d", &vetor[i]);
    }

    for (int i = 0; i < 6; i++)
    {
        printf("O %d valor digitado foi: %d\n",i,vetor[i]);
    }
    
    return 0;
}
