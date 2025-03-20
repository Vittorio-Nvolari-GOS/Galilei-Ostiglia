/*Dati in imput 10 numeri interi determinare il 
valore maggiore e qunate vlte compare */

#include<stdio.h>
int main()
{
    int max=0,n1=0,cnt=0;

    

    for (int i = 0; i!=10; i++)
    {
        printf("Insrisci un nuemro:\t");
        scanf("%d", &n1);

        if(n1>max)
        {
            max=n1;

        }   
        else if(max)
            cnt++;
        
        

        

    }
    
    printf("Il numero maggiore è %d e comapre %d volte", max,cnt);
}