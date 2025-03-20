/*

    sviluppiamo le funzioni 
*/

#include<stdio.h>
#include "libreria.h"//Prototipi delle funzioni
#include<stdlib.h>
#include<time.h>

void richiedivalori(int vett[],int dim)
{
    int n=0,i=0;

    while (i<dim)    
    {
        printf("Inserisci un valore :\t");
        scanf("%d", &n);

        if (n%2==0)
        {
            vett[i]=n;
            i++;
        }
        
        
    }
    
}

void stampaVett(int vett[],int dim,char sep)
{
    for (int i = 0; i < dim; i++)
    {
        printf("%d%c", vett[i],sep);

    }
    
}



void riempirand(int vett[],int dim)
{
    srand(time(NULL));
    
    for (int i = 0; i < dim; i++)
    {
        vett[i]=rand()%101+0;
    }
}


void calcolaMediaVett(int vett[],int dim,float *_media)
{
    
    int somma=0;
    for ( int i = 0; i < dim; i++)
    {
        somma+=vett[i];
    }
    *_media=somma/dim;
}