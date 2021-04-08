#include <stdio.h>
#include <stdlib.h>
#define N 3

void transposta(int n, int a[][n]){
    int i,j,matriz_aux[n][n];

    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
           matriz_aux[i][j]= a[j][i];
           printf("%d\t",matriz_aux[i][j]);
        }
        printf("\n");

    }



}

int main()
{
    int a[N][N]={{1,2,3},{4,5,6},{7,8,9}};

    transposta(N,a);

    return 0;
}
