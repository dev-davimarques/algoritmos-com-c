#include <stdio.h>

int main(int argc, char const *argv[])
{
    /* code */
    double volume, diametro_cm, altura_cm, pi = 3.14159, raio;
    double volume_litros;

    printf("Digite o altura em cm: ");
    scanf("%lf",&altura_cm);
    printf("Digite o diametro da lata em cm: ");
    scanf("%lf",&diametro_cm);

    raio = diametro_cm / 2;
    volume = pi * (raio * raio) * altura_cm;
    volume_litros = volume / 1000;

    printf("\nVolume da lata: %.2lf L\n",volume_litros);

    return 0;
}
