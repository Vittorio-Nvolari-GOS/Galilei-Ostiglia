// Dati 10 valori stampali
#include<stdio.h>
int main ()
{
    int num=0,contatore=0;
    while (contatore!=10)
    {
        printf("Inserisci un numero: \t");
        scanf("%d", &num);
        printf("Il valore inseriti corrisponde a : %d \n",num);
        contatore++;
    }
    
}
