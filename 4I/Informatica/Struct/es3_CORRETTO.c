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

typedef struct Prodotto
{
    char Nome[20];
    int Cod;
    int Pez;
    float Prezzo;

}Prodotto;


void RegistraProdotto(Prodotto **prod, int *N)
{
    int i = *N;
    (*N)++;
    *prod = (Prodotto*)realloc(*prod, *N * sizeof(Prodotto));

    printf("Inserisci il nome del prodotto:\n");
    fgets((*prod)[i].Nome, 20, stdin);
    (*prod)[i].Nome[strcspn((*prod)[i].Nome, "\n")] = 0;  // Rimuove newline
    printf("Inserisci il codice del prodotto:\n");
    scanf("%d", &(*prod)[i].Cod);
    printf("Inserisci la quantità di prodotto:\n");
    scanf("%d", &(*prod)[i].Pez);
    printf("Inserisci il prezzo del prodotto:\n");
    scanf("%f", &(*prod)[i].Prezzo);
    getchar();  // Consuma il newline

}

void StampaProdotti(Prodotto *prod, int N)
{
    int i = 0;
    if(prod == NULL)
        printf("Nessun Prodotto inserito\n");
    else
    {
        for (i = 0; i < N; i++)
        {
            printf("<---------------------->\n");
            printf("Num %d\n", i);
            printf("Nome: %s\n", prod[i].Nome);
            printf("Codice Prodotto: %d\n", prod[i].Cod);
            printf("Quantità: %d\n", prod[i].Pez);
            printf("Prezzo: %.2f\n", prod[i].Prezzo);
            printf("<---------------------->\n");
        }
    }
    
}

void CercaProdottoCOD(Prodotto *prod, int N)
{
    int codice = 0;
    int i = 0;
    int Flag = 0;
    int pos = 0;
    if(prod == NULL)
        printf("Nessun Prodotto inserito\n");
    else
    {
        printf("Inserisci codice prodotto: ");
        scanf("%d", &codice);
        for (i = 0; i < N; i++)
        {
            if(codice == prod[i].Cod)
            {
                Flag += 1;
                pos = i;
            }
        }
        if (Flag == 0)
            printf("Prodotto non trovato\n");
        else
        {
            printf("<---------------------->\n");
            printf("Num %d\n", pos);
            printf("Nome: %s\n", prod[pos].Nome);
            printf("Codice Prodotto: %d\n", prod[pos].Cod);
            printf("Quantità: %d\n", prod[pos].Pez);
            printf("Prezzo: %.2f\n", prod[pos].Prezzo);
            printf("<---------------------->\n");
        }
    }
}

void ValoreMagazzinoTotale(Prodotto *prod, int N)
{
    float somma = 0;
    if(prod == NULL)
        printf("Nessun Prodotto inserito\n");
    else
    {
        for (int i = 0; i < N; i++)
        {
            somma += prod[i].Prezzo * prod[i].Pez;  // Prezzo per quantità
        }
        printf("Il Valore totale del magazzino corrisponde a: %.2f\n", somma);
    }
}

int main()
{
    int n = 0;
    int scelta = 0;
    Prodotto *prodotti = NULL;
    
    do
    {
        printf("\n<---------------------->\n");
        printf("0.Inserisci Prodotto\n");
        printf("1.Stampa lista Prodotti\n");
        printf("2.Cerca Prodotto tramite codice\n");
        printf("3.Valore Totale Magazzino\n");
        printf("4.Exit\n");
        printf("<---------------------->\n");
        printf("Scelta: ");
        scanf("%d", &scelta);
        getchar();
        
        switch (scelta)
        {
        case 0:
            RegistraProdotto(&prodotti, &n);
            break;
        case 1:
            StampaProdotti(prodotti, n);
            break;
        case 2:
            CercaProdottoCOD(prodotti, n);
            break;
        case 3:
            ValoreMagazzinoTotale(prodotti, n);
            break;
        case 4:
            printf("Arrivederci!\n");
            break;
        default:
            printf("Scelta non valida\n");
        } 
    } while (scelta != 4);
    
    free(prodotti);
    return 0;
}
