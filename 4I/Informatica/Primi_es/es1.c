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

int* creaArray()
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

int* riepVet(int *_array)
{
    for (int i = 0; i < N; i++)
    {
        printf("Inserisci un valore:  ");
        scanf("%d", &_array[i]);
    }
    return _array;
}

void stampVet(int *_array)
{
    for (int i = 0; i < N; i++)
    {
        printf("%d", _array[i]);
        printf("\n");
    }
    
}

int* somM3(int *_array)
{
    int som=0;
    for (int i = 0; i < N; i++)
    {
        if(_array[i]%3==0)
            som+=_array[i];

    }
    

}

int estraiDispar(int *_array,int *_dispari)
{
    int *_dispari=NULL;
    *_dispari=0; 

        for(int i=0; i<N; i++){
            if(_array[i]%2!=0){
                (*_dispari)++;
                int tmp=realloc(_dispari, (_dispari)*sizeof(int));
                if(tmp==NULL){
                    printf("Errore di allocazione!\n");
                    free(_dispari);
                    return NULL;
                }
                _dispari=tmp;
                _dispari[(*_dispari)-1]=_array[i];
            }
        }
    return _dispari;
}


int main()
{
    int *vettore=NULL; // puntatore
    

    vettore=creaArray();
    vettore=riepVet(vettore);
    stampVet(vettore);
    printf("%d",somM3(vettore));



        
    free(vettore);










}