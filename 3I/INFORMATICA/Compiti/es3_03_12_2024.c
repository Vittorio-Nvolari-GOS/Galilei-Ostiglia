/* Scrivi un programma che visualizzi i primi 100 numeri dispari a gruppi di 5.*/

#include<stdio.h>
int main()
{
    int num1=1,num2=3,num3=5,num4=7,num5=9,i;

    printf("%d  %d  %d  %d  %d\n",num1,num2,num3,num4,num5);
    for (i=0; i!=9; i++)
    {
        num1+=10;
        num2+=10;
        num3+=10;
        num4+=10;
        num5+=10;

        printf("%d %d %d %d %d\n",num1,num2,num3,num4,num5);

    }

}