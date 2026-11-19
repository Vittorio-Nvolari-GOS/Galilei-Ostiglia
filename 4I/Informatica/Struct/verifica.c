#include <stdlib.h>
#include <stdio.h>
#include <string.h>
int num_libri=0;

typedef struct Data
{
    int Anno;
    int Mese;
    int Giorno;
}Data;

typedef struct Libro
{
    char Titolo[50];
    char Autore[50];
    int Isbn;
    int Copie_totali;
    int Copie_disponibili;
    Data Data_prestito;
    Data Data_restituzione;
}Libro;

void AggiungiLibro(Libro* L,int* num_libri)
{
    
    int i= *num_libri;
    printf("Quale è il titolo? \n");
    fgets(L[i].Titolo,50,stdin);
    printf("Quale è l'autore? \n");
    fgets(L[i].Autore,50,stdin);
    printf("Inserisci l'isbn \n");
    scanf("%d",&L[i].Isbn);
    printf("Quante copie hai in totale? \n");
    scanf("%d",&L[i].Copie_totali); 

    getchar();
    


    L[i].Copie_disponibili=L[i].Copie_totali;
    num_libri++;
    L=(Libro*)realloc(L, *num_libri * sizeof(Libro*));
    if (L == NULL) 
    {
        printf("Errore: ridimensionamento fallito\n");
    }

    
}

void VisualizzaLibri(Libro* libreria) 
{
    if(num_libri==0)
        printf("Nessun libro gay");
    else
    {
    for(int i=0;i<num_libri;i++)
        {
            printf("--------------------------------------");
            printf("%c\n",libreria[i].Titolo);
            printf("%c\n",libreria[i].Autore);
            printf("%d\n",libreria[i].Isbn);
            printf("%d\n",libreria[i].Copie_totali);
            printf("%d\n",libreria[i].Copie_disponibili);
            printf("%d/%d/%d\n",libreria[i].Data_prestito.Anno,libreria[i].Data_prestito.Mese,libreria[i].Data_prestito.Giorno);
            printf("%d/%d/%d\n",libreria[i].Data_restituzione.Anno,libreria[i].Data_restituzione.Mese,libreria[i].Data_restituzione.Giorno);
            printf("--------------------------------------");

        }
    }
      // Se num_libri == 0, stampa "Nessun libro"
    // Altrimenti, stampa tutti i libri in un formato leggibile
}

void RegistraPrestito(Libro* L)
{
    int i=0;
    int tmp=0;
    
    
    printf("Inserisci l'isbn del libro");
    scanf("%d",&tmp);

    for ( i = 0; i < num_libri; i++)
    {
        if (tmp==L[i].Isbn)
        {
            if (L[i].Copie_disponibili<1)
                printf("Il libro non è piu disponibile");
            else
            {
                printf("Inserisci il giorno di prestito");
                scanf("%d",L[i].Data_prestito.Giorno);
                printf("Inserisci il mese di prestito");
                scanf("%d",L[i].Data_prestito.Mese);
                printf("Inserisci il anno di prestito");
                scanf("%d",L[i].Data_prestito.Anno);


                if(L[i].Data_prestito.Mese+1>12)
                {
                    L[i].Data_restituzione.Mese=1;
                    L[i].Data_restituzione.Anno=1;
                }
                else
                    L[i].Data_restituzione.Mese=L[i].Data_prestito.Mese+1;
                L[i].Data_restituzione.Giorno=L[i].Data_prestito.Giorno;
                L[i].Copie_disponibili-=1;
            }
        }
        
    }
    
    
    
   

}

void CercaLibroISBN(Libro* L)
{
    int tmp=0;
    printf("Inserisci l'isbn del libro");
    scanf("%d",&tmp);

    for (int i = 0; i < num_libri; i++)
    {
        if(tmp==L[i].Isbn)
        {
            printf("--------------------------------------");
            printf("%c\n",L[i].Titolo);
            printf("%c\n",L[i].Autore);
            printf("%d\n",L[i].Isbn);
            printf("%d\n",L[i].Copie_totali);
            printf("%d\n",L[i].Copie_disponibili);
            printf("%d/%d/%d\n",L[i].Data_prestito.Anno,L[i].Data_prestito.Mese,L[i].Data_prestito.Giorno);
            printf("%d/%d/%d\n",L[i].Data_restituzione.Anno,L[i].Data_restituzione.Mese,L[i].Data_restituzione.Giorno);
            printf("--------------------------------------");

        }
        else
            printf("Libro non trovato");
    }
    
}

void LibriInPrestito(Libro* L)
{
    for (int i = 0; i < num_libri; i++)
    {
        if(L[i].Copie_disponibili<L[i].Copie_totali)
        {
            printf("--------------------------------------");
            printf("%c\n",L[i].Titolo);
            printf("%c\n",L[i].Autore);
            printf("%d\n",L[i].Isbn);
            printf("%d\n",L[i].Copie_totali);
            printf("%d\n",L[i].Copie_disponibili);
            printf("%d/%d/%d\n",L[i].Data_prestito.Anno,L[i].Data_prestito.Mese,L[i].Data_prestito.Giorno);
            printf("%d/%d/%d\n",L[i].Data_restituzione.Anno,L[i].Data_restituzione.Mese,L[i].Data_restituzione.Giorno);
            printf("--------------------------------------");

        }
        

    }
}

void LibriScaduti(Libro* L)
{

}




int main()
{
    Libro* Libri=(Libro*)malloc( num_libri* sizeof(Libro));
    int scelta;
    do
    {
        printf("______Menu_____\n");
        printf("1. Aggiungi libro\n");
        printf("2. Visualizza libri\n");
        printf("3. Cerca libro con isbn\n");
        printf("4. Libri in prestito\n");
        printf("5. Libri con prestito scaduto\n");
        printf("6. Registra Prestito\n");
        printf("7. Esci\n");

        scanf("%d",&scelta);

        switch (scelta)
        {
        case 1:
            AggiungiLibro(Libri,num_libri);
            break;
        case 2:
            VisualizzaLibri(Libri);
            break;
        case 3:
            CercaLibroISBN(Libri);
            break;
        case 4:
            LibriInPrestito(Libri);
            break;
        case 5:
            LibriScaduti(Libri);
            break;
        case 6:
            RegistraPrestito(Libri);
            break;
        case 7:
            exit;
            break;
        default:
            break;
        }


    } while (scelta=!7);
    
}