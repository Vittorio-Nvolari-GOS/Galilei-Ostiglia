/* dati N numeri in imput (cn N chiesto all'utente strettamente maggiore di 5)
    calcolare e mostrare la somma dei numeri negativi e dei numeri positivi*/

#include<stdio.h>
int main ()
{
    int n1=0,ope=0,val=0,opep=0,open=0;

    printf("__Il programma si ferma solo se viene inserito il valore 0___\n\n");
    do
    {
        printf("inserisci un valore:\t ");
        scanf("%d", &n1);
    }while(n1<=5);

    for(int i=0; i<n1; i++)
    {
        printf("inserisci un valore: ");
        scanf("%d", &val);
        if(val<0)
        {
            opep+=val;
        }
        else
        {
            open+=val;
        }


    }


    printf("Il risultato dei numeri positivi è %d",opep);

    printf("Il risultato dei numeri negativi  è %d", open);


    
}