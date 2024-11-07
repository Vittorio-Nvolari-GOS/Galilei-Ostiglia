#include<stdio.h>
#include <stdlib.h>
#include <time.h>
int main ()
{
    int scelta=0;
    float ope=0;
    printf("_____________Scegli tra le seguenti opzioni:____________");
    printf("\n1.Sasso\n2.Carta\n3.forbice\n");
    scanf("%d", &scelta);

    srand(time(NULL));

    int random_max=3;
    int random_min=1;

    int sceltacomputer = rand()%(random_max - random_min + 1) + random_min;

    if(scelta==1 || scelta==2 || scelta==3)
    {
        if (scelta==sceltacomputer)
        {
            printf("Pareggio!");
        }
        else if(scelta == 1 && sceltacomputer==3)
            printf("Hai vinto");
        else if(scelta == 2 && sceltacomputer==1)
            printf("Hai vinto");
        else if(scelta == 3 && sceltacomputer==2)
            printf("Hai vinto");
        else
            printf("Hai perso!");
        
    }
    else
        printf("Scelta non valida")
}