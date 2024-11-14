/*LEggere una sequenza di numeri , visualizzarla si termina nn appena arriva a 0*/

#include<stdio.h>
int main ()
{
    int numero,contatore=1;
    
    printf("Inserisci un numero :\t");
        scanf("%d", &numero);
        printf("Il numero inserito corrisponde a %d \n",numero);
        

    while (numero!=0)
    {
        printf("Inserisci un numero :\t");
        scanf("%d", &numero);
        printf("Il numero inserito corrisponde a %d \n",numero);
        contatore++;
    }
    printf("Il numero di tentativi corrisponde a %d",contatore);
    

}