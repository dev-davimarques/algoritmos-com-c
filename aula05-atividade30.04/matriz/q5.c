#include <stdio.h>

int main(int argc, char const *argv[])
{
    int matriz[5][5] = {{1,2,3,4,5},{1,2,3,4,5},{1,2,3,4,5},{1,2,3,4,5},{1,2,3,4,5}};
    int soma = matriz[0][0];
    // 00, 01, 02, 03, 04
    // 10, 11, 12, 13, 14
    // 20, 21, 22, 23, 24
    // 30, 31, 32, 33, 34
    // 40, 41, 42, 43, 44
    int i, j;

    for(i = 0; i < 5; i++){
        for(j = 0; j < 5; j++){
            if(!(i == j) && !(i + j == 4)){
                soma += matriz[i][j];
            }
        }
    }

    printf("Somatoria dos numeros: %d\n",soma);

    return 0;
}
