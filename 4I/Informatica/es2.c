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
void stampaVet(int *_Array)
{
    for (int i = 0; i < N; i++)
    {
        printf("%d ", _Array[i]);
    }
    
}

int riempiArry(int *_Array)
{
    for (int i = 0; i < N; i++)
    {
        printf("Insrisci valore:  ");
        scanf("%d", *_Array[i]);
    }
    
}




int main()
{
    int *vdv;
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
        switch (risposta)
        {
            case 1:
                /* code */
                break;
            case 2:
                /* code */
                break;
            case 3:
                /* code */
                break;
            case 4:
                /* code */
                break;
            case 5:
                /* code */
                break;
            case 6:
                exit;
                break;
        }

    } while (risposta==6);
    
    





}