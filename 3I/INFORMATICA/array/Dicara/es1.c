/*dari dall'utente deu vettori v1 e v2 eseguire lo scambio dei valori tra
 i due vettori */


#include <stdio.h>
#include "libArray.c"
#include "libArray.h"
#define DIM1 10 
#define DIM2 10 


int main()
{
    int v1[DIM1]={0}, v2[DIM2]={0};

    printf("Riempi il primo vettore\n");
    riempiVettore(&v1,DIM1);
    printf("Riempi il secondo vettore\n");
    riempiVettore(&v2,DIM2);

    scambiaVettori(&v1,&v2,DIM1,DIM2);

    printf("Primo vettore: ");
    stampaVettore(v1,DIM1,' ');
    printf("Sencondo vettore: ");
    stampaVettore(v2,DIM2,' ');




}