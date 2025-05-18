#include <stdio.h>
#include <string.h>

struct cadastro
{
    char nome[50];
    int idade;
    char rua[50];
    int numero;
};


int main(int argc, char const *argv[])
{
    // Inicializei minha struct
    struct cadastro c1;

    // Lendo os valores

    // Primeira forma de ler
    // strcpy(c1.nome, "Davi Marques");
    // c1.idade = 24;
    // strcpy(c1.rua, "Avenidad Brasil");
    // c1.numero = 123;

    // Segunda forma de ler 
    printf("Digite o seu nome: ");
    fgets(c1.nome, sizeof(c1.nome), stdin);

    printf("Digite sua idade: ");
    scanf("%d",&c1.idade);

    printf("Digite sua rua: ");
    fgets(c1.rua, sizeof(c1.rua), stdin);

    printf("Digite o numero: ");
    scanf("%d",&c1.numero);


    // Exibir os valores
    printf("Nome: %s\n",c1.nome);
    printf("Idade: %d\n",c1.idade);
    printf("Rua: %s\n",c1.rua);
    printf("Numero: %d\n",c1.numero);

    return 0;
}
