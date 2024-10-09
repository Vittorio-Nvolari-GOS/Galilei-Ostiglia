#include<stdio.h>
int main()
{
    int n1,n2,n3,n4,n5;
    printf("Inserisci il primo numero: \t");
    scanf("%d",n1);
    printf("Inserisci il secondo numero: \t");
    scanf("%d",n2);
    printf("Inserisci il terzo numero: \t");
    scanf("%d",n3);
    printf("Inserisci il quarto numero: \t");
    scanf("%d",n4);
    printf("Inserisci il quinto numero: \t");
    scanf("%d",n5);
    if(n1<=n2 && n1!=n2 && n2<n3 && n2!=n3 && n3<n4 && n3!=n4 && n4<n5 && n4!=n5)
    {
        printf("I numeri inseriti appartengono alla sequenza di numeri naturali");
    }
    else
    {
        printf("I numeri inseriti non appartengono alla sequenza di numeri naturali");        
    }
}