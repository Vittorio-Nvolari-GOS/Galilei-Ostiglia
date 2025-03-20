/*Dato unnumero a piu cifrfe
    eseguire la somma delle cifre e stabilire
    se è divisibile per 3*/
#include<stdio.h>
int main()
{
    int n1=0,ope1=0,ope2=0,ope3=0,ope4=0;
    printf("Inserisci il primo valore: \t");
    scanf("%d",&n1);
    ope1=n1%10;
    ope2=n1%100;
    ope3=n1%1000;
    ope4=ope1+ope2+ope3;
    printf("%d%d%d",ope1,ope2,ope3);
    
    if(ope4%3==0)
    {
        printf("Il numero è divisibile per 3 \t");
    }
    else
    {
        printf("Il numero non è divisibile per 3 \t");
    }
    

}