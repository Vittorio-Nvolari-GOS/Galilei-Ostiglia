/*
    Scrivere un programma in C che:
    1.Allochi dinamicamente un array iniziale di N numeri
    2.Inserimento valori
    3.Stampa Array
    4.Calcoli la Somma degli elementi multipli di 3
    5.Creiamo un nuovo Array solamente valori dispari
*/

#include <stdlib.h>
#include <stdio.h>
int N ;

int* creaArry()
{
    N=0;
    do
    {
        printf("Inserisci la quantità degli elementi: ");
        scanf("%d", &N); 
    } while (N<0);
    
    int *_vettore=(int*)malloc(N*sizeof(int));
    if(_vettore==NULL)
    {
        printf("Errore di Allocazione!!");
        return 1;
    }
    return _vettore;

    
    

}

int* riepVet(int *_arry)
{
    for (int i = 0; i < N; i++)
    {
        printf("Inserisci un valore:  ");
        scanf("%d", &_arry[i]);
    }
    return _arry;
}

void stampVet(int *_arry)
{
    for (int i = 0; i < N; i++)
    {
        printf("%d", _arry[i]);
        printf("\n");
    }
    
}

int somM3()
{


}

int main()
{
    int *vettore=NULL; // puntatore
    

    vettore=creaArry();
    vettore=riepVet(vettore);
    stampVet(vettore);

    free(vettore);









}