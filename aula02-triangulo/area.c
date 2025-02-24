#include <stdio.h>
int main(int argc, char const *argv[])
{
    /* code */
    float b, h, area;

    printf("\nDigite o valor da base: ");
    scanf("%f",&b);

    printf("\nDigite o valor da altura: ");
    scanf("%f",&h);

    area = (b * h)/2;

    printf("\nÁrea = %f\n",area);

    return 0;
}
