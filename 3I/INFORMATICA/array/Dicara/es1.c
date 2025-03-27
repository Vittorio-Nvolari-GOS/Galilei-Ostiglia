/*dari dall'utente deu vettori v1 e v2 eseguire lo scambio dei valori tra
 i due vettori */


#include <stdio.h>
#include "libArray.c"
#include "libArray.h"
#define DIM 10 


int main()
{
    int v1[DIM]={0}, v2[DIM]={0};

    printf("Riempi il primo vettore\n");
    riempiVettore(&v1,DIM);
    printf("Riempi il secondo vettore\n");
    riempiVettore(&v2,DIM);

    scambiaVettori(&v1,&v2,DIM);

    printf("Primo vettore:");
    stampaVettore(v1,DIM,' ');
    printf("Sencondo vettore:");
    stampaVettore(v2,DIM,' ');




}