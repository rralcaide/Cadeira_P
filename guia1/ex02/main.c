#include <stdio.h>
#include <stdlib.h>

void troca(float *n1, float *n2, float *n3){
    float ajuda;

    printf("Antes:\n");
    printf("Numero 1 = %.f\nNumero 2 = %.f\nNumero 3 = %.f\n",*n1,*n2,*n3);


    ajuda=*n1;

    *n1=*n3;
    *n3=*n2;
    *n2=ajuda;


    printf("Depois:\n");
    printf("Numero 1 = %.f\nNumero 2 = %.f\nNumero 3 = %.f",*n1,*n2,*n3);





}

int main()
{
    float n1=1,n2=2,n3=3;

    //printf("Antes: %.f %.f %.f ",n1,n2,n3);
    troca(&n1,&n2,&n3);
    //printf("Depois: %.f %.f %.f ",n1,n2,n3);
    return 0;
}


// nr2 tem de ficar = nr1
// nr3 tem de ficar = nr2
// nr1 tem de ficar = nr3
