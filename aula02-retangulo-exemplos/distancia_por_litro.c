#include <stdio.h>

int main(int argc, char const *argv[])
{
    int tempo;
    float vel_media;
    float distancia;
    float litros_usados;

    printf("Digite o tempo em horas: ");
    scanf("%d", &tempo);
    printf("Digite a velocidade média em km/h: ");
    scanf("%f", &vel_media);

    distancia = tempo * vel_media;
    litros_usados = distancia / 12;

    printf("Distância percorrida: %.2f km\n", distancia);
    printf("Quantidade total de litros usados: %.2f L\n", litros_usados);

    return 0;
}
