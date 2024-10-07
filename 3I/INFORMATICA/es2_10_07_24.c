/*STABILIRE SE UN NUMERO E DISPARI
CONTROLLANDO L'ULTIMA CIFRA MENO SIGNIFICATIVA*/
#include<stdio.h>
int main()
{
    int n1=0,ope=0;
    printf("Inserisci il primo valore: \t");
    scanf("%d",&n1);
    ope=n1%10;
    if(n1%2==0)
    {
        printf("Il numero non è dispari");
    }
    else
    {
        printf("Il numero è dispari ");
    }

}