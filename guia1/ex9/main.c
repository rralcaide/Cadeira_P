#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>



void verifica(char *tel, char *c){

  int i;

  if (tel[0] != '2'){
    *c='I';
    return;
  }


  //printf("%d",strlen(tel));
  if (strlen(tel) != 9){
    *c='I';
    return;
  }

  for(i=0;i<9;i++){
    if (isdigit(tel[i]) == 0){
        *c='I';
        return;
    }
  }

  *c='V';

}

int main()
{
    char c;

    char tel[]="211111111";
    verifica(tel, &c);
    printf("%c",c);
    return 0;
}
