#include<stdio.h>
int main()
{
    int num=0,cifra=0,pos=1,num_q=0;

    do
    {
        printf("Inserisci un valore:\t");
        scanf("%d", &num);
    } while (0>=num);
    
    num_q=num;

    while (num_q!=0)
    {
        cifra=num_q%10;
        num_q=num_q/10;

        if (cifra==pos)
        {
            printf("La cifra  %d corrisponde alla sua poszione %d",cifra, pos);
        }
        pos++;
    }
    
}