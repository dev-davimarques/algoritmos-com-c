#include <stdio.h>

int main(int argc, char const *argv[])
{
    int matriz[3][3] = {{10,22,30}, {45,58,6}, {7,89,9}};
    int menor = matriz[0][0];

    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            if(matriz[i][j] < menor){
                menor = matriz[i][j];
            }
        }
    }

    printf("Menor numero da matriz %d\n",menor);
    
    return 0;
}
