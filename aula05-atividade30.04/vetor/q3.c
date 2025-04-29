#include <stdio.h>

// Corrigir!

int main(int argc, char const *argv[]) {
    int vetor[8] = {2, 4, 6, 8, 3, 5, 7, 9};
    int x, y, soma = 0;
    int encontrou_x = 0, encontrou_y = 0;

    printf("Digite o valor da posicao X: ");
    scanf("%d", &x);
    printf("Digite o valor da posicao Y: ");
    scanf("%d", &y);

    // Verifica se X e Y estão no vetor
    for (int i = 0; i < 8; i++) {
        if (x == vetor[i]) encontrou_x = 1;
        if (y == vetor[i]) encontrou_y = 1;
    }

    if (encontrou_x && encontrou_y) {
        soma = x + y;
        printf("Soma de %d e %d: %d\n", x, y, soma);
    } else {
        printf("X ou Y nao encontrado no vetor.\n");
    }

    return 0;
}