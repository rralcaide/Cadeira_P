#include <stdio.h>
#include <stdlib.h>
#define Lin 3
#define Col 3

int media(int nLin, int nCol,int mat[][nCol]){
    int i,j,media=0,media_alta,media_baixa,pos_alta,pos_baixa;

    for(i=0;i<nCol;i++){
        media=0;
        for(j=0;j<nLin;j++){
           media=media+mat[j][i];
           //printf("Coluna %d: ",i+1);
           //printf("%d\n",mat[j][i]);
        }
        media= media / nLin;
        printf("A media da coluna %d e: %d\n",i+1,media);

        if(i==0){
        media_alta=media;
        media_baixa=media;

        pos_alta=0;
        pos_baixa=0;
        }


        if (media > media_alta){
            media_alta = media;
            pos_alta=i;
            printf("A media e mais alta na posica: %d\n",pos_alta);
        }

        if(media < media_baixa){
            media_baixa=media;
            pos_baixa=i;
            printf("A media e mais baixa na posica: %d\n",pos_baixa);
        }


    }



}

int main()
{
    int matriz[Lin][Col]={{1,2,3},{4,5,6},{7,8,9}};
    media(Lin,Col,matriz);
    return 0;
}
