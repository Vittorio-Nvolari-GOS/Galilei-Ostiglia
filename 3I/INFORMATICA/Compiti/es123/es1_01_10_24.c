#include<stdio.h>
int main()
{
    int num1;
    printf("Inserisci il numero: \t");
    scanf("%d",&num1);
    if(num1 % 3 == 0 && num1 % 5 == 0)
    {
        printf("Il numero inserito è divisiblile sia per 3 che per 5 \n");
    }
    else
    {
        printf("Il numero inserito non è divisibile sia per 3 sia per 5 \n");
    }
    return 0;
}