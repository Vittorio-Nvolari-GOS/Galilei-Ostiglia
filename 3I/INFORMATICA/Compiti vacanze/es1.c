#include<stdio.h>
int main ()
{
    int prodotto=0;
    float resto=0;


    do
    {
        printf("_____Scegli tra le i seguenti prodotti_____\n\n");
        printf("1.CocaCola 1.00$\n2.Patatine 0.70$\n3.Cioccolato 2.50$\n4.Baretta 2.00$\n5.Acqua 1.00$\n");
        scanf("%d", &prodotto);
    } while (prodotto<=0 || prodotto>5);
    
}