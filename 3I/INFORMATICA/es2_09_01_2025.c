/*scrivi un programma che , dati in input N numeri interi 
e un numero X, determini :
- quanti numri sono maggiori di X
- quanti numeri sono minori di X
- qunati numeri sono uguali a X*/
#include <stdio.h>
int main ()
{
    int N=0,X=0,numu=0,nummin=0,nummag=0, i,num=0;
    
    printf("Insrisci il valore di N:\t");
    scanf("%d", &N);
    printf("Inserisci il valore di X:\t");
    scanf("%d", &X);

    for ( i = 0; i < N; i++)
    {
        printf("Insrisci un numero: \t");
        scanf("%d", &num);

        if(num>X)
        {
            nummin+=1;
        }
        if(num<X)
        {
            nummag+=1;
        }
        if(num==X)
        {
            numu+=1;
        }


        
    }
    printf("I numeri maggiori di %d sono: %d\n",X,nummag);
    printf("I numeri minori di %d sono: %d\n",X,nummin);
    printf("I numeri uguali di %d sono: %d\n",X,numu);
}