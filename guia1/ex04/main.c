#include <stdio.h>
#include <stdlib.h>
#define TAM 5

void ex4(int *t, int tam, int *np, int *ni, int *maior, int *pos){

    int i, j,resto=0;

    for(i=0;i<tam;i++){
        resto=(t[i])%2;
        if(resto != 0){
            printf("O numero %d e impar.\n",t[i]);
        }
        else
            printf("O numero %d e par\n",t[i]);

        if(t[i]>*maior){
            *maior=t[i];
            *pos=i+1;
        }
    }

    printf("o maior numero e: %d\n",*maior);
    printf("o maior numero esta na posicao: %d\n",*pos);
}

int main()
{
    int np,ni,maior,pos;
    int t[TAM]={1,2,3,4,5};
    ex4(t,TAM,&np,&ni,&maior,&pos);
    return 0;
}
