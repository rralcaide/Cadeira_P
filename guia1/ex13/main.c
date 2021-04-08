#include <stdio.h>
#include <stdlib.h>

#define n 5

double produto_escalar (double *a, double *b, int N){

    int i,j,auxiliar_produto=0,auxiliar_soma=0;

    for(i=0;i<N;i++){
       auxiliar_produto=a[i]*b[i];
       auxiliar_soma=auxiliar_soma+auxiliar_produto;

    }
    //printf("%d\n",auxiliar_soma);
    return auxiliar_soma;
}

int main()
{
    double recebe;
    double a[n]={1,2,3,4,5};
    double b[n]={1,2,3,4,5};

    recebe=produto_escalar(a,b,n);
    printf("%.0f",recebe);


    return 0;
}
