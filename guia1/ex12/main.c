#include <stdio.h>
#include <stdlib.h>
#define DIM1 5
#define DIM2 5
#define DIM3 5
#define DIM4 5

int compara(int dim1, int dim2, int dim3, int dim4, int vet1[][dim3],int vet2[][dim4] ){
    int i,j,somai=0, somaj=0 ;

    if((dim1!=dim2) || (dim3!=dim4)) {
        //printf("sao diferentes1\n");
        return 0;
    }

    for(i=0;i<dim1;i++){
        if(vet1[0][i]!=vet2[0][i]){
            //printf("sao diferentes2\n");
            return 0;
        }

    }
    for(i=0;i<dim3;i++){
        if( (vet1[1][i])!= (vet2[1][i]) ){
            //printf("sao diferentes2\n");
            return 0;
        }
    }

    return 1;


}

int main()
{
    int recebe;
    int vet1[DIM1][DIM3]={{1,2,3,4,5},{6,7,8,9,10}};
    int vet2[DIM2][DIM4]={{1,2,3,4,5},{6,7,8,9,10}};

    recebe=compara(DIM1,DIM2,DIM3,DIM4,vet1,vet2);

    printf("%d",recebe);

    return 0;
}
