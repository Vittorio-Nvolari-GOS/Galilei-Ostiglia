/*
    calcolato il vettor con valori random
    calcolare la media dei valori
*/

#include<stdio.h>

#include"libreria.c"
#include<time.h>
#include<stdlib.h>
#include"libreria.h"
#define DIM 10

int main()
{

    int vettore[DIM]={0};
    float media=0;
    

    
    

    riempirand(vettore,DIM);
    stampaVett(vettore,DIM,' ');
    calcolaMediaVett(vettore,DIM,&media);

    printf("\n La media è : %.2f" , media);
    






}