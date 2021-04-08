#include <stdio.h>
#include <stdlib.h>
#define M 2
#define N 3

int soma(int m, int n, int a[][n], int b[][n]){

    int i;

    for(i=0;i<m*n;i++){

       *(*(a)+i)= *(*(a)+i) + *(*(b)+i);

       printf("%d\t",*(*(a)+i));

       if((i+1) % n == 0 &&  i!=0){
        printf("\n");
       }

    }




}

int main()
{
    int a[M][N]={{1,2,3},{1,2,3}};
    int b[M][N]={{1,2,3},{1,2,3}};
    printf("Nova Matriz: \n");
    soma(M,N,a,b);
    return 0;
}
