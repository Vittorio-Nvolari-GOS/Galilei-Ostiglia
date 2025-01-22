/*Calcolare quanti e quali numeri primi sono presenti in un ampio intervallo di valori.
Definizione di numero primo: un numero si dice primo se è divisibile solo per 1 e per 
se stesso.*/

#include<stdio.h>
int main()
{
    int num1=1,i,j,ope1=0,ope2=0,cont=0;
    long int num2=100000;

    for ( i = num1; i < num2; i++)
    {
        for ( j = 1; j < i; j++)
        {
            ope1=i%j;
            if (ope1==0)
            {
                cont++;
            }
            
        }
        if (cont==2)
        {
            printf("%d",i);
        }
        
    }

}