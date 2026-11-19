/*
    Creare un'arry dinamico chiedendo all'utente la sua dimensione , ilprogrammadeve eseguirele seguenti funzioni:
    1.Creaun'array
    2.Carica l'arry
    3.stampa
    4.esci
*/

#include <stdlib.h>
#include <stdio.h>
int N ;

int creaArry()
{
    N=0;
    do
    {
        printf("Inserisci la quantità degli elementi: ");
        scanf("%d", &N); 
    } while (N<0);
    
    int *_vettore=(int)malloc(N*sizeof(int));
    if(_vettore==NULL)
    {
        printf("Errore di Allocazione!!");
        return 1;
    }
    return _vettore;

    
    

}

int riepVet(int *_arry)
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

int main()
{
    int *vettore=NULL; // puntatore
    

    vettore=creaArry();
    vettore=riepVet(vettore);
    stampVet(vettore);

    free(vettore);









}