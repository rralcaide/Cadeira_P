#include <stdio.h>
#include <stdlib.h>

#define M 2
#define N 3

int unicaMat(int nLin, int nCol, int mat[][nCol]){
  int i,j;


  for(i=0;i<nLin*nCol;i++){
    for(j=i+1;j<nLin*nCol;j++){
        if( *(*(mat)+i) == *(*(mat)+j) ){
            return 0;
        }
    }
  }
  return 1;

}

int main()
{
    int recebe;
    int mat[M][N]={{1,2,3},{4,5,6}};

    recebe=unicaMat(M,N,mat);

    if(!recebe){
        printf("Nao ");
    }
    printf("Sao unicos");



    return 0;
}
