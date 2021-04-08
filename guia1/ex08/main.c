#include <stdio.h>
#include <stdlib.h>

#define DIM 5

int maior_subida(int tab[], int dim){
    int dif=0,maior=0,i,j,pos;

    for(i=1;i<dim;i++){
        printf("Atual= %d\n",tab[i]);
        dif=(tab[i]) - (tab[i-1]);
        printf("dif = %d\n",dif);

        if(dif>maior){
            maior=dif;
            pos=i+1;
        }
    }

    printf("A maior diferenca e %d\n",maior);
    printf("A posicao e: %d",pos);

}

int main()
{
    int tab[DIM]={1,2,5,20,30};
    maior_subida(tab,DIM);
    return 0;
}
