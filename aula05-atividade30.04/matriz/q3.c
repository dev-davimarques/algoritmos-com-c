#include <stdio.h>

int main(int argc, char const *argv[])
{
    int matriz[5][5] = {{1,2,3,4,5},{1,2,3,4,5},{1,2,3,4,5},{1,2,3,4,5},{1,2,3,4,5}};

    for(int i = 0; i < 5; i++){
        for(int j = 0; j < 5; j++){
            if(i == j){
                matriz[i][j] = 1;
            } else {
                matriz[i][j] = 0;
            }
        }
    }

    for(int i = 0; i < 5; i++){
        for(int j = 0; j < 5; j++){
            printf("%d ",matriz[i][j]);
        }
        printf("\n");
    }

    return 0;
}
