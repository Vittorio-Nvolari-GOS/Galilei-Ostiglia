// riordina 5 numeri in ordine decrescente 
#include <stdio.h>
int main()
{
    int n1=0,n2=0,n3=0,n4=0,n5=0,temp=0;
    printf("Inserisci il primo numero: \t");
    scanf("%d",&n1);
    printf("Inserisci il secondo numero: \t");
    scanf("%d",&n2);
    printf("Inserisci il terzo numero: \t");
    scanf("%d",&n3);
    printf("Inserisci il quarto numero: \t");
    scanf("%d",&n4);
    printf("Inserisci il quinto numero: \t");
    scanf("%d",&n5);
       
    if(n1<n2)
    {
        temp=n1;
        n1=n2;
        n2=temp;
    }
    if(n1<n3)
    {
        temp=n1;
        n1=n3;
        n3=temp;
    }
    if(n1<n4)
    {
        temp=n1;
        n1=n4;
        n4=temp;
    }
    if(n1<n5)
    {
        temp=n1;
        n1=n5;
        n5=temp;
    }
    if(n2<n3)
    {
        temp=n2;
        n2=n3;
        n3=temp;
    }
    if(n2<n4)
    {
        temp=n2;
        n2=n4;
        n4=temp;
    }
    if(n2<n5)
    {
        temp=n2;
        n2=n5;
        n5=temp;
    }
    if(n3<n4)
    {
        temp=n3;
        n3=n4;
        n4=temp;
    }
    if(n3<n5)
    {
        temp=n3;
        n3=n5;
        n5=temp;
    }
    if(n4<n5)
    {
        temp=n4;
        n4=n5;
        n5=temp;

    }

    printf("I numeri in ordine decrescente sono:\t %d %d %d %d %d",n1,n2,n3,n4,n5);
}