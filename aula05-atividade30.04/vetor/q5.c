#include <stdio.h>

int main(int argc, char const *argv[])
{
    
    double vetor[10] = {-1,2,3,-4,5,6,7,8,9,-10};
    int neg = 0; 
    double pos = 0;

    for (int i = 0; i < 10; i++){
        if(vetor[i] < 0){
            neg += 1;
        } else {
            pos += vetor[i];
        }
    }

    printf("Quantidade de numeros negativos %d\n",neg);
    printf("Somatoria dos numeros positivos %.2lf\n",pos);
    

    return 0;
}
