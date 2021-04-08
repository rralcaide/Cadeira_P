#include <stdio.h>
#include <stdlib.h>
#define N 5

int soma(int *a, int *b, int n){
    int i,j,soma=0,soma_aux=0;

    printf("Matriz Final: \n");
    for(i=0;i<n;i++){
        soma_aux=a[i]+b[i];
        soma=soma+soma_aux;
        a[i]=soma_aux;
        printf("%d\t",a[i]);
    }


    //printf("A soma das matrizes e: %d\n",soma);

}

int main()
{
    int a[N]={1,2,3,4,5};
    int b[N]={1,2,3,4,5};

    soma(a,b,N);
    return 0;
}
