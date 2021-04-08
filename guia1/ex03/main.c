#include <stdio.h>
#include <stdlib.h>

#define TAM 5

void ex3(int *tab, int tam){

    int media=0,soma=0,i;

    printf("Tabela antiga: ");
    for(i=0;i<tam;i++){
        soma+=tab[i];
        printf("%d",tab[i]);
    }

    media=soma/tam;

    //printf("soma: %d",soma);
    //printf("media: %d",media);

    printf("\nTabela alterada: ");
    for(i=0;i<tam;i++){
        if(tab[i]<media){
            tab[i]=0;

        }
        printf("%d",tab[i]);
    }

}

int main()
{
    int tab[TAM]={2,2,3,4,5};
    ex3(tab,TAM);

    return 0;
}
