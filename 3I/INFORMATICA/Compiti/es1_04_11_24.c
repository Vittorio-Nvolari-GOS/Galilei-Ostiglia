#include<stdio.h>
int main ()
{
    const float dollari=1.23;
    float qunatita=0,ope=0;
    int scelta=0;
    
    printf("Inserisci \n 0. Da dollaro a euro \n 1. Da euro a dollaro\n");
    scanf("%d", &scelta);
    
    switch (scelta)
    {
    case 1:
        printf("Inserisci quanti euro da convertire in dollari\t");
        scanf("%f", &qunatita);
        ope=qunatita*dollari;
        printf("La quantità inserita corrisponde a %.2f dollari",ope);
        break;
    case 0:
        printf("Inserisci quanti dollari da convertire in euro\t");
        scanf("%f", &qunatita);
        ope=qunatita/dollari;
        printf("La quantità inserita corrisponde a %.2f dollari",ope);
        break;
    
    default:
        printf("Il tipo di conversione non è valida");
        break;
    }
    
    
}