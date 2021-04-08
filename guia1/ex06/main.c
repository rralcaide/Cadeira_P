#include <stdio.h>
#include <stdlib.h>

#define DIM 5

void vizinhos(int *tab, int dim, int *igual){
   int i,j,media;


   for(i=1;i<dim-1;i++){
      media=(tab[i-1]+tab[i+1])/2;
      printf("a media e: %d\n",media);

      if(media==tab[i]){
        (*igual)++;
      }
   }



}

int main()
{
    int igual=0;
    int tab[DIM]={1,-2,31,18,5};
    vizinhos(tab,DIM,&igual);
    printf("Existem %d numeros iguais a media dos seus vizinhos.",igual);
    return 0;
}
