#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void traduz(char string[]){
    int i;
    char traduzir[24][15]=
    {
        "janeiro", "january",
        "fevereiro", "february",
        "marco", "march",
        "abril", "april",
        "maio", "may",
        "junho", "june",
        "julho", "july",
        "agosto", "august",
        "setembro", "setember",
        "outubro", "october",
        "novembro", "november",
        "dezembro", "december"

    };

    for(i=0;i<24;i=i+2){
        if(!strcmp(string,traduzir[i])){
            printf("A traducao de %s e: %s \n ",string,traduzir[i+1]);
            return;
        }
    }
    printf("mes invalido");
}

int main()
{
    char string[15];

    printf("Introduza um mes em portugues: ");
    scanf("%s",&string);

    traduz(string);
    return 0;
}
