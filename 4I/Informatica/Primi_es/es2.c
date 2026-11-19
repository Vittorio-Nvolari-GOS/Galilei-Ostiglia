/*
    Scrivi un programa in C che :
    1.chideall'utente quanti numeri interi vuole inserire;
    2.Alloca dinamicamente un array di quella dimensione con malloc()
    3.Permette all'utente di inserire i numeri;
    4.chiede all'utente se vuole aumentare la dimensionedfell'array
        -sesi , richoedere nuava dimensione realloc() per ridimensionarlo 
        -permettere quindi di inserire i nuovi valori negli spazzi aggiunti
    5.Infine, stampa tutti gli elemnti dell'array
*/
#include <stdlib.h>
#include <stdio.h>
int N=0;
void stampaVet()
{
    for (int i = 0; i < N; i++)
    {
        printf("%d ", _Array[i]);
    }
    
}

void dimeArray(Int *_Array)
{
    printf("Inserisci la grandezza dell'array: ");
    scanf("%d", &N);
    _Array=(int*)malloc(N*sizeof(int));
    if(_Array==NULL)
    {
        printf("Errore di Allocazione!!");
        return 1;
    }
    
}

int* riempiArry(int *_Array)
{
    for (int i = 0; i < N; i++)
    {
        printf("Insrisci valore:  ");
        scanf("%d", _Array[i]);
    }
    
}

int* aumentaDim(int *_Array )
{
    int nuovaDim=0;
    int *_aumenta=NULL;
    do
    {
        printf("inserisci una nuova dimensione: ");
        scanf("%d", &nuovaDim);
        _aumenta=(int*) realloc(_Array, nuovaDim *sizeof(int));
        for(int i=N; i<nuovaDim; i++){
            printf("inserisci nuovi valori: ");
            scanf("%d", &_aumenta[i]);
        }
    }while(nuovaDim!=N);
    return _aumenta;
}



int main()
{
    int *vdv=NULL;
    int risposta=0;
    do
    {
        printf("-------MENU--------");
        printf("1.Definisci dimensioni");
        printf("2.alloca dinamicamente nell'array");
        printf("3.riempi l'arry");
        printf("4.Aumenta Dimensione Array");
        printf("5.Stampa vettore");
        printf("6.Exit");
    
        dimeArray(vdv);

        vdv=riempiArry(vdv);

    
    





}