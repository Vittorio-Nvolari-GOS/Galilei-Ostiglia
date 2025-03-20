/* stampa i primi N numeriu dispari 
    sucessivi al numero A
    es: A=5 e N=8
    7,9,11,13,15,17,19,21*/

#include<stdio.h>
int main ()
{
    int n=0,a=0,ope=0,i=0;
    
    do
    {
        printf("inserisci un numero:\t");
        scanf("%d", &n);
        printf("inserisci un numero:\t");
        scanf("%d", &a);
        

    } while (n<0 || a<0);
    if(a%2==0)
    {
        a+=1;
        printf("%d ",a);
    }

    ope=a;

    for (i = 0; i !=n; i++)
    {
        ope+=2;
        printf("%d ",ope);   
    }
    
    
    
}