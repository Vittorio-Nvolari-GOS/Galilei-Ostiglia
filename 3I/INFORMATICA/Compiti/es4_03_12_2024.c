/*Scrivi un programma che visualizzi 
i primi 12 multipli di un numero n inserito da tastiera usando un ciclo a conteggio.*/

#include<stdio.h>
int main()
{
    int num1=1,i,ope=0;
    printf("Inserisci un numero:\t");
    scanf("%d", &num1);

    for (i=1; i!=13; i++)
    {
        ope=num1*i;
        

        printf("%d\n",ope);

    }

}