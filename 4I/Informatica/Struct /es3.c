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

typedef Prodotto
{
    char Nome[20];
    int Cod;
    int Pez;
    float Prezzo;

}Prodotto;


void RegistraProdotto(Prodotto prod,int *N)
{
    int i=N;
    *N++;
    prod=(Prodotto)realloc(*N*sizeof(prod));

    printf("Inserisci il nome del prodotto:\n");
    fgets(prod[i].Nome,20.,stdin);
    getchar();
    printf("Inserisci il codice del prodotto:\n");
    scanf("&d",&prod[i].Cod);
    printf("Inserisci la quantità di prodotto:\n");
    scanf("&d",&prod[i].Pez);
    printf("Inserisci il prezzo del prodotto:\n");
    scanf("&f",&prod[i].Prezzo);

    

}

void StampaProdotti(Prodotto prod,int N)
{
    int i=0;
    if(prod==NULL)
        printf("Nessun Prodotto inserito");
    else
    {
        for ( i = 0; i < N; i++)
        {
            printf("<---------------------->\n");
            printf("Num %d\n",i);
            printf("Nome: %d\n",prod[i].Nome);
            printf("Codice Prodotto: %d\n",prod[i].Cod);
            printf("2.Inserisci Prodotto\n",prod[i].Pez);
            printf("3.Valore Totale Magazzino\n",prod[i].Prezzo);
            printf("<---------------------->\n");
        }
    }
    
    
}

void CercaProdottoCOD(Prodotto prod,int N)
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
            printf("Nome: %d\n",prod[i].Nome);
            printf("Codice Prodotto: %d\n",prod[i].Cod);
            printf("2.Inserisci Prodotto\n",prod[i].Pez);
            printf("3.Valore Totale Magazzino\n",prod[i].Prezzo);
            printf("<---------------------->\n");
        }
        
        
    }
}

int main()
{
    int n=0;
    int scelta=0;
    Prodotto prodotti=NULL;
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
            RegistraProdotto(prodotti,&n);
            break;
        case 1:
            StampaProdotti(prodotti,n);
            break;
        case 2:

            break;
        case 3:

            break;
        case 4 
            break;
        } 
    } while (scelta==4);
    
    
}