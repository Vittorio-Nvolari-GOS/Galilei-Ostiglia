/*

    sviluppiamo le funzioni 
*/

#include<stdio.h>
#include "libreria.h"//Prototipi delle funzioni

void richiedivalori(int vett[],int dim)
{
    int n=0;

    for (int i = 0; i < dim i++)
    {
        printf("Inserisci un valore :\t");
        scanf("%d", &n);

        if (n%2==0)
            vett[i]=n;
        
    }
    
}

