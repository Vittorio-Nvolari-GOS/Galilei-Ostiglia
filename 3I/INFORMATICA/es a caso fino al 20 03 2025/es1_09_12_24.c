/*Progettare un algoritmo che legga e che scriva qunate volte a è divisibile per b
  es: a=162 b=3*/

#include<stdio.h>
int main ()
{
    int a=0,b=0,ope=0,cnt=0,temp=0;

    printf("Inserisci il un numero: \t");
    scanf("%d", &a);
    printf("Inserisci il un numero: \t");
    scanf("%d", &b);

    
    if (a<b)
    {
        temp=a;
        a=b;
        b=temp;
    }
    ope=a;
    if (a%b==0)
    {
        do
        {
            ope=ope/b;
            cnt++;
        }while(ope%b==0);

        printf("Il numero %d è divisibile per %d per %d",a,b,cnt);
    }
    else
        printf("I numeri inseriti non sono divisibile tra loro");
    
    
    


}