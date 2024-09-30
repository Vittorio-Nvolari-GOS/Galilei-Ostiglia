#include<stdio.h>
int main()
{
    float num1=0,num2=0,calc=0;
    printf("Inserisci il primo numero: \t");
    scanf("%f",&num1);
    printf("Inserisci il secondo numero: \t");
    scanf("%f",&num2);
    calc=num2*num2;
    if(num1==calc)
    {
        printf("Il primo numero inserito corrisponde al doppio del secodo ");
    }
    else
    {
        printf("Il primo numero inserito non corrisponde al doppio del secodo");
    }
}