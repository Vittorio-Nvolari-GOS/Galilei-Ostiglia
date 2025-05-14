/*  creiamo un menu di richieste 
    1)caricare un anrray
    2)stampare l'arry
    3)ordina ordina l'array trammidte bubble sort 


*/

#include<stdio.h>
#include "libArray.h"
#include "libArray.c"
#define DIM 10


int main()
{
    int vett[DIM]={0};
    int r=0;


    do
    {
        printf("============== Menu Array ==============");
        printf("\n1) Carica vettore ");
        printf("\n2) Stampa Array ");
        printf("\n3) Ordina l'array trammite bubble sort");
        printf("\n Digita 0 per terminare");
    
        switch(r)
        {
            case 1:
            {
                riempiVettore(vett,DIM);
                break;
            }

            case 2:
            {
                stampaVettore(vett,DIM,' ');
                break;
            }
            
            case 3:
            {
                bubbleSort(vett,DIM);
                break;
            }

            case 0:
                break;
            
            default:
            {
                printf("C'è stato un probblema");
                break; 
            }
                 
        }
    
    
    
    } while (r!=0);
    
    
}
    