#include <stdio.h>
#include <stdlib.h>
#define TAM 5
void procura_dupla(int *tab, int tam, int *prim, int *seg){
    int maior=tab[0],maior2=tab[0];

    for(int i=1;i<tam;i++){
        if(tab[i]>maior){
            maior2=maior;
            maior=tab[i];
        }
        else if (tab[i]>maior2){
            maior2=tab[i];
        }
    }

    /*for(int i=1;i<tam;i++){
       if((tab[i]>maior2) && (tab[i]<maior)){
            maior2=tab[i];
       }
    }*/

    *prim=maior;
    *seg=maior2;






}

int main()
{
    int prim,seg;
    int tab[TAM]={5,7,9,8,-2};
    procura_dupla(tab,TAM,&prim,&seg);
    printf("%d\n",prim);
    printf("%d",seg);
    return 0;
}
