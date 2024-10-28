#include<stdio.h>
#include <stdlib.h>
#include <time.h>
int main ()
{
    int scelta=0;
    float ope=0;
    printf("_____________Scegli tra le seguenti opzioni:____________");
    printf("\n0.Termina\n1.Somma\n2.Differenza\n3.Moltiplicazione\n4.Divisione\n");
    scanf("%d", &scelta);

    srand(time(NULL));

    int random_max=50;
    int random_min=1;

    int n1 = rand()%(random_max - random_min + 1) + random_min;
    int n2 = rand()%(random_max - random_min + 1) + random_min;
    printf("I numeri sono \n%d e %d\n",n1,n2);     
    
    switch (scelta)
    {
    case 0:
        printf("Il programma termina");
        break;
     case 1:
        ope=(float)n1+n2;
        printf("Il risultato è : \t %0.2f",ope);
        break;
     case 2:
        ope=(float)n1-n2;
        printf("Il risultato è : \t %0.2f",ope);
        break;
     case 3:
        ope=(float)n1*n2;
        printf("Il risultato è : \t %0.2f",ope);
        break;
     case 4:
        ope=(float)n1/n2;
        printf("Il risultato è : \t %0.2f",ope);
        break;
    
    default:
        printf("La selezione non è valida");
        break;
    }
    return 0;
}