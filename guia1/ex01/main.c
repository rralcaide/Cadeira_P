#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b,total,*p=&a,*q=&b, *r = &total;

    //*p = conteudo de a
    //*q = conteudo de b
    //*r = conteudo de total

    //p = endereço de a
    //q = endereço de b
    //r = endereço de total

    //printf("a=%d\n",a);
    //printf("ponteiro de p=%d\n",*p);

    printf("Valor de a:");
    scanf("%d",&a);

    printf("\nValor de b:");
    scanf("%d",&b);

    *r=*p+*q; //*r = conteudo de total. ou seja, conteudo de total = conteudo de a + conteudo de b

    printf("a=%d \t b=%d \t total=%d\n",a,b,total);

    //printf("\nEndereco de total=%d",&total);



}
