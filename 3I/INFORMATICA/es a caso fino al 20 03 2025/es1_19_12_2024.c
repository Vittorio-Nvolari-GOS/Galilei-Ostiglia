/* Dato un numero N da calcolare il suo quadrato sommando i primi N numeri discpari*/
#include<stdio.h>

int main()
{
    int N=0,i,ope=1,disp=1;

    do
    {
        printf("Inserisci un numero:\t");
        scanf("%d", &N);
    } while (N<0);
    
    

    for ( i = 1; i!=N; i++)
    {
        disp+=2;
        
        ope+=disp;
    }
    
    printf("In risultato è %d", ope);
}