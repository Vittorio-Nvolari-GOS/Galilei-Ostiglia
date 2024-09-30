#include<stdio.h>
int main()
{
    float num1=0,num2=0,calc=0;
    printf("Inserisci il primo numero: \t");
    scanf("%f",&num1);
    printf("Inserisci il secondo numero: \t");
    scanf("%f",&num2);
    if(num1==num2)
    {
        printf("Il primo numero è uguale al primo");
    }
    else
    {
        if(num1<num2)
        {
            printf("il primo numero è minore del secondo ");
        }
        else
        {
            printf("il primo numero è maggiore del secondo");
        }
    }
}