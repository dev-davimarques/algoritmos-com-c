#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <locale.h>

#define TAM 3

struct tipo_pessoa
{
    int idade;
    float peso;
    char nome[50];
};

typedef struct tipo_pessoa tipo_pessoa;

int main(int argc, char const *argv[])
{
    setlocale(LC_ALL, "Portuguese");

    return 0;
}