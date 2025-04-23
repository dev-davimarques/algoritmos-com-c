#include <stdio.h>

int main(int argc, char const *argv[])
{
    int matrix [3][3] = 
    {
        {5, -8, 10},    // 00, 01, 02
        {1, 2, 15},     // 10, 11, 12
        {25, 10, 7}     // 20, 21, 22
    };

    int somaDiogonalPrincipal = 0;


    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            if(i == j){
                somaDiogonalPrincipal += matrix[i][j];
            }
        }
    }

    printf("A soma da diagonal principal e %d\n",somaDiogonalPrincipal);


    return 0;
}
