#include <stdio.h>

int main(int argc, char const *argv[])
{
    int matriz[4][4] = {{10,22,30,111}, {45,58,6,15}, {70,89,9,1}};
    int maior = matriz[0][0];

    for(int i = 0; i < 4; i++){
        for(int j = 0; j < 4; j++){
            if(matriz[i][j] > maior){
                maior = matriz[i][j];
            }
        }
    }

    printf("Maior numero da matriz %d\n",maior);
    
    return 0;
}
