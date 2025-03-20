/*inizilizzre - riempimento con valori pari - stampa 
Creazione di una libreria personale */


#include <stdio.h>

#include "libreria.h"

#define DIM 10

int main()
{

    int vettore[DIM]={0};


    richiedivalore(vettore,DIM);

    stampaVett(vettore,DIM,"-");


}