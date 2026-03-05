/*
    DAra la struct prodotto:
    -nome
    -codice 
    -quantita 
    -prezzo
    Eseguire 
    1.inserire prodotto 
    2.stampare elenco prodotti
    3.cercare un prodotto per codice 
    4.calcolare il valore totale del magazzino
*/

#include <stdlib.h>
#include <stdio.h>
#include <string.h>

typedef  struct Prodotto
{
    char Nome[20];
    int Cod;
    int Pez;
    float Prezzo;

}Prodotto;


void RegistraProdotto(Prodotto *prodotti, int *n)
{
    Prodotto prodotto;
    printf("Inserisci il nome del prodotto:\n");
    fgets(prodotto.Nome,20,stdin);
    printf("Inserisci il codice del prodotto:\n");
    scanf("%d", &prodotto.Cod);
    getchar();
    printf("Inserisci la quantità di prodotto:\n");
    scanf("%d",&prodotto.Pez);
    printf("Inserisci il prezzo del prodotto:\n");
    scanf("%f", &prodotto.Prezzo);

    prodotti[*n] = prodotto;
    (*n)++;
    //prodotti = (Prodotto*)realloc(prodotti, (*n) *sizeof(prodotti));

}

void StampaProdotti(Prodotto* prod,int N)
{
    int i = 0;
        for ( i = 0; i < N; i++)
        {
            printf("<---------------------->\n");
            printf("Num %d\n",i);
            printf("Nome: %s\n",prod[i].Nome);
            printf("Codice Prodotto: %d\n",prod[i].Cod);
            printf("Prezzo: %f\n",prod[i].Prezzo);
            printf("<---------------------->\n");
        }
}
    

void CercaProdottoCOD(Prodotto *prod,int N)
{
    int codice=0;
    int i=0;
    int Flag=0;
    int pos=0;
    if(prod==NULL)
        printf("Nessun Prodotto inserito");
    else
    {
        printf("Inserisci codice prodotto:");
        scanf("%d",&codice);
        for ( i = 0; i < N; i++)
        {
            if(codice==prod[i].Cod)
                Flag+=1;
                pos=i;
        }
        if (Flag==0)
            printf("prodotto non trovato");
        else
        {
            printf("<---------------------->\n");
            printf("Num %d\n",i);
            printf("Nome: %s\n",prod[i].Nome);
            printf("Codice Prodotto: %d\n",prod[i].Cod);
            printf("2.Inserisci Prodotto %d\n",prod[i].Pez);
            printf("3.Valore Totale Magazzino %f\n",prod[i].Prezzo);
            printf("<---------------------->\n");
        }
        
        
    }
}

void ValoreMagazzinoTotale(Prodotto* prod,int N)
{
    float somma=0;
    if(prod==NULL)
        printf("Nessun Prodotto inserito");
    else
    {
        for (int i = 0; i < N; i++)
        {
            somma+=prod[i].Prezzo*prod[i].Pez;
        }
        printf("Il Valore totale del magazzino corrisponde a : %f",somma);
        
    }

}

int main()
{
    int n=30;
    int scelta=0;
    Prodotto* prodotti = (Prodotto*)malloc(n * sizeof(Prodotto));
    do
    {
        printf("<---------------------->\n");
        printf("0.Inserisci Prodotto\n");
        printf("1.Stampa lista Prodotti\n");
        printf("2.Cerca Prodotto trammite codice\n");
        printf("3.Valore Totale Magazzino\n");
        printf("4.Exit\n");
        printf("<---------------------->\n");
        scanf("%d",&scelta);
        getchar();
        switch (scelta)
        {
        case 0:
            if(n>30){
                printf("Array troppo pieno");
            }else{
               RegistraProdotto(prodotti,&n);
            }
            break;
        case 1:
            StampaProdotti(prodotti,n);
            break;
        case 2:
            CercaProdottoCOD(prodotti,n);
            break;
        case 3:
            ValoreMagazzinoTotale(prodotti,n);
            break;
        case 4:
            break;
        } 
    } while (scelta != 4);
    
    
}