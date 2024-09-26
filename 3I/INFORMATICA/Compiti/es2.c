#include<stdio.h>
int main()
{
    float litri=0,costolitro=0,prezzo=0,importo=0,resto=0;
    printf("Inserisci numero di litri \t");
    scanf("%f",&litri);
    printf("Inserisci costo al litro del carburante \t");
    scanf("%f",&costolitro);
    prezzo=litri*costolitro;
    printf("Il costo di questo rifornimento sarebbe di: %.2f \n",prezzo);
    printf("Inserisci l'importo da pagare \t");
    scanf("%f",&importo);
    resto=importo-prezzo;
    if(resto==0)
    {
        printf("Non c'e resto da errogare");
    }
    else
    {
        printf("Il resto da pagare corrisponde  a %.2f",resto);
    }
    
}