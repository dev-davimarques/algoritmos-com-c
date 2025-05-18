#include <stdio.h>
#include <string.h>

int main(int argc, char const *argv[])
{
    
    char nome[20];

    printf("Digite o seu nome: ");
    fgets(nome, 20, stdin);
    printf("O nome digitado foi: %s",nome);
    printf("\nTamanho da string armazenada: %ld\n", strlen(nome));
    return 0;
}
