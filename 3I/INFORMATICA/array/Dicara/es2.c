/*dopo aver caricaro un vettore numerico confrontare la somma delle
 componenti di indice pari con la somma delle componenti dispari 
 e dire se la somma maggiore è divisibile
 per un assegnato valore k(con k diverso da 0)
*/

#include<stdio.h>
#include<time.h>
#include<stdlib.h>
#include"libArray.h"
#include"libArray.c"
#define DIM 10

int main()
{
    int v1[DIM]={0},v2[DIM]={0},k=0,somD=0,somP=0;

    riempiVettore(&v1,DIM);
    riempiVettore(&v2,DIM);
    
    do
    {
        printf("Insrisci Valore K:\t");
        scanf("%d", &k);
    } while (k<0);
    
    







}