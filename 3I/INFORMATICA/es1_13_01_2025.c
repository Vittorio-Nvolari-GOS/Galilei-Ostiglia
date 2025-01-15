/*Scrivi un programma che visualizzi la 
somma dei quadrati dei primi 12 numeri naturali successivi a 8*/
#include <stdio.h>
int main()
{
    int i, somma = 0,end=0, start=0,econsi=0;
    
    printf("Insrisci il numero iniziale:\t");
    scanf("%d", &start);
    do
    {
        printf("quanti elementi vuoi considerare:\t");
        scanf("%d", &econsi);
    } while (start<=0);
    
    

    end=start+econsi;

    
    for (i = start; i <= end; i++)
    {
        somma+=i * i;
    }
    printf("La somma è: %d\n", somma);
    return 0;
}