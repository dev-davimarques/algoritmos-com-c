#include <stdio.h>

int main(int argc, char const *argv[])
{
    int matrix [3][3] = 
    {
        {5, -8, 10},    // 00, 01, 02
        {1, 2, 15},     // 10, 11, 12
        {25, 10, 7}     // 20, 21, 22
                //  soma = 30, 33, 36
    };

    int somaColunas = 0;


    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            if(j % 2 == 0){
                somaColunas += matrix[i][j];
            }
        }
    }

    printf(" %d\n",somaColunas);


    return 0;
}
