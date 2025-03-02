#include <stdio.h>

void area(float a, float b){
    float area = (a * b);
    printf("Área igual: %.2f\n",area);
}
int main(int argc, char const *argv[])
{
    /* code */
    float base, altura;
    printf("Digite o valor da base: ");
    scanf("%f", &base);

    printf("Digite o valor da altura: ");
    scanf("%f",&altura);

    area(base,altura);
    return 0;
}
