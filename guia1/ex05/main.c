#include <stdio.h>
#include <stdlib.h>
#define TAMA 5
#define TAMB 5

void comuns(int *tabA, int tamA, int *tabB, int tamB){
    int i, j, comum=0;

    for(i=0;i<tamA;i++){
        for(j=0;j<tamB;j++){
            if(tabA[i]==tabB[j]){
               comum=tabA[i];
               printf("Numero comum detetado: %d\n",comum);
            }
        }
    }
}

int main()
{
    int tabA[TAMA]={2,4,5,8,10};
    int tabB[TAMB]={3,4,5,7,9,11};
    comuns(tabA,TAMA,tabB,TAMB);
    return 0;
}
