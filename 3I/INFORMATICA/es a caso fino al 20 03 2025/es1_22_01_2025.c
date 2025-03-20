#include<stdio.h>
int main()
{
    int num1=0,num2=0,cnt1=0,cnt2=0,i,j;

    do
    {
        printf("Inserisci il primo numero:\t");
        scanf("%d", &num1);

    }while(num1<0);
       
    do
    {
        printf("Inserisci il secondo numero:\t");
        scanf("%d", &num2);
    
    }while(num2<0);
        
    
    for(i=1;i<num1;i++)
    {
        if(num1%i==0)
        {
            cnt1++;
        }
    
    }

    for(j=1;j<num1;j++)
    {
        if(num1%j==0)
        {
            cnt2++;
        }
    }

    if(cnt1>cnt2)
    {
        printf("Il numero %d ha piu divisori del numero %d",cnt1,cnt2);
    }
    if(cnt2>cnt1)
    {
        printf("Il numero %d ha piu divisori del numero %d",cnt2,cnt1);
    }
    if(cnt1==cnt2)
    {
        printf("I numeri inseriti hanno lo stesso numero di divisori");
    }
}