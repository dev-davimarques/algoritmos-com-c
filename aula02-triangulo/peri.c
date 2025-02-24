#include <stdio.h>

int main(int argc, char const *argv[])
{
    /* code */
    int a, b, c, p;
    printf("Digite o valor de a: ");
    scanf("%d",&a);
    printf("\nDigite o valor de b: ");
    scanf("%d", &b);
    printf("\nDigite o valor de c: ");
    scanf("%d",&c);

    p = a + b + c;

    printf("Perímetro: %d\n",p);

    return 0;
}
