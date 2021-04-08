#include <stdio.h>
#include <stdlib.h>
#define DIM1 5
#define DIM2 5

int compara(int *vet1,int *vet2, int dim1, int dim2 ){
    int i,j,somai=0, somaj=0 ;

    if(dim1!=dim2){
        //printf("sao diferentes1\n");
        return 0;
    }
    for(i=0;i<dim1;i++){
        if(vet1[i]!=vet2[i]){
            //printf("sao diferentes2\n");
            return 0;
        }

    }

    return 1;


}

int main()
{
    int recebe;
    int vet1[DIM1]={1,2,3,4,5};
    int vet2[DIM2]={1,2,3,4,5};

    recebe=compara(vet1,vet2,DIM1,DIM2);

    printf("%d",recebe);

    return 0;
}
