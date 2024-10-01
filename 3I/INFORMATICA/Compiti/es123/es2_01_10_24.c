#include<stdio.h>
int main()
{
    float num1=0,num2=0,num3=0,min=0,max=0,media=0;
    printf("Inserisci il primo numero: \t");
    scanf("%f",&num1);
    printf("Inserisci il secondo numero: \t");
    scanf("%f",&num2);
    printf("Inserisci il terzo numero: \t");
    scanf("%f",&num3);
    media = (num1 + num2 + num3) / 3;
     min = num1;
    if (num2 < min) 
    {
        min = num2;
    }
    if (num3 < min) 
    {
        min = num3;
    }
     max = num1;
    if (num2 > max) 
    {
        max = num2;
    }
    if (num3 > max) 
    {
        max = num3;
    }
    printf("Il numero minore è: %.2f\n", min);
    printf("Il numero maggiore è: %.2f\n", max);
    printf("La media è: %.2f\n", media);

}