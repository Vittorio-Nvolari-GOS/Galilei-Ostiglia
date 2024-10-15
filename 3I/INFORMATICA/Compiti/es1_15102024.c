#include<stdio.h>
int main()
{
    float n1=0,n2=0,n3=0,ope=0,ope2=0;
    
    
    printf("Inserisci il primo numero:\t");
    scanf("%f",&n1);
    printf("Inserisci il secondo numero:\t");
    scanf("%f",&n2);
    printf("Inserisci il terzo numero:\t");
    scanf("%f",&n3);
    ope=n1-n2;
    ope2=n2-n3;
    if(ope==ope2)
        printf("I numeri inseriti possono eseere considerati in progressione aritmetica");
    else
        printf("Il numeri ineriti non possono essere considerati in progressione aritmetica");
    



}