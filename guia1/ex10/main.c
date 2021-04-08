#include <stdio.h>
#include <stdlib.h>

int tres_consecutivos(char *frase){
    int i;

    //printf("tamanhho: %d",strlen(frase));

    for(i=0;i<strlen(frase)-2;i++){
        if((frase[i] == frase[i+1]) && (frase[i+1] == frase[i+2])){
            /*printf("existem 3 numeros iguais consecutivos" \
                   " a partir da posicao %c\n",frase[i]);*/
        return 1;
        }

    }
    return 0;
}

int main()
{
    int recebe;
    char frase[]="123474567676";
    recebe=tres_consecutivos(frase);
    printf("%d",recebe);
    return 0;
}
