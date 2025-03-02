#include <stdio.h>

void perimetro(float a, float b){
    float peri = 2 * (a + b);
    printf("Área igual: %.2f\n",peri);
}
int main(int argc, char const *argv[])
{
    /* code */
    float base, altura;
    printf("Digite o valor da base: ");
    scanf("%f", &base);

    printf("Digite o valor da altura: ");
    scanf("%f",&altura);

    perimetro(base,altura);
    
    return 0;
}
