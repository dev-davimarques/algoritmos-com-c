#include <stdio.h>

int main(int argc, char const *argv[])
{

    int vetor[10] = {1,2,3,4,5,6,7,8,9,10};
    int soma = 0;

    for (int i = 0; i < 10; i++)
    {
        if (vetor[i] % 2 == 0){
            soma += 1;
        }
    }

    printf("Um total de %d numeros pares foram armazenados no vetor.\n",soma);
    
    return 0;
}
