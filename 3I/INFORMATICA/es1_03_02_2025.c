/*dato un valore eseguire la conversione da decimale a binario */

#include<stdio.h>

long convDectoBin(int _numero);

int main()
{
    int n=0;
    long conv=0;

    do
    {
        printf("Isnerisci un numero:\t");
        scanf("%d", &n);

    }while(n<=0);

    conv=convDectoBin(n);
    




}

long convDectoBin(int _numero)
{
    long r=0,q=0;

    q=_numero;

    while(q!=0)
    {
        r=q%2;
        q/=2;

        printf("%ld",r);
    }


}