/*Registrare le informazioni di alcuni libri con titolo,
    autore, anno e prezzo. 
    Determinare il piu costoso e il piu vecchio
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct LIBRO
{
    char Titolo[40];
    char Autore[30];
    int Anno;
    float Prezzo;
}LIBRO;

void Inserisci_libro(LIBRO* l, int* dim)
{
    LIBRO libro;
    printf("Inserisci un Titolo:\t");
    fgets(libro.Titolo,30,stdin);
    printf("Inserisci un Autore:\t");
    fgets(libro.Autore,30,stdin);
    printf("Inserisci un Anno:\t");
    scanf("%d",&libro.Anno);
    printf("Inserisci un Prezzo:\t");
    scanf("%f",&libro.Prezzo);

    l[*dim] = libro;
    (*dim)++;
}

void Stampa_libri(LIBRO* l, int dim)
{
    for (int i = 0; i < dim; i++)
    {
        printf("Libro numero %d", i);
        printf("Il titolo è : %s",l[i].Titolo);
        printf("L'aurtore è: %s",l[i].Autore);
        printf("L'Anno è: %d",l[i].Anno);
        printf("Il prezzo è: %f",l[i].Prezzo);
    }
    
}

void Libro_Costoso(LIBRO* l, int dim)
{
    float max=0;
    int id=0;
    max=l[0].;

    for (int i = 1; i < dim; i++)
    {
        if (l[i].Prezzo>max)
        {
            max=l[i].Prezzo;
            id=i;
        }
        
    }

    printf("Il titolo è : %s",l[id].Titolo);
    printf("L'aurtore è: %s",l[id].Autore);
    printf("L'Anno è: %d",l[id].Anno);
    printf("Il prezzo è: %f",l[id].Prezzo);
    
    
}

void Libro_Vecchio(LIBRO* l,int dim)
{
    int min=0;
    int id=0;
    min=l[0].Anno;

    for (int i = 1; i < dim; i++)
    {
        if (l[i].Anno<min)
        {
            min=l[i].Anno;
            id=i;
        }
        
    }

    printf("Il titolo è : %s",l[id].Titolo);
    printf("L'aurtore è: %s",l[id].Autore);
    printf("L'Anno è: %d",l[id].Anno);
    printf("Il prezzo è: %f",l[id].Prezzo);
}

int main()
{
    LIBRO* libri;
    int n=1;
    int risposta;
    libri=(LIBRO*)malloc(10*sizeof(LIBRO));
    
    do
    {
        printf("________Menu________");
        printf("1.Inserisci un libro");
        printf("2.Visualizza Libri");
        printf("3.Libro piu costoso");
        printf("4.Libro piu vecchio");
        printf("5.Exit");
        printf("______________________");
        scanf("%d", &risposta);
        
        switch (risposta)
        {
        case 1:
            Inserisci_libro(libri, &n);
            break;
        case 2:
            Stampa_libri(libri, n);
            break;
        case 3:
            Libro_Costoso(libri, n);
            break;
        case 4:
            Libro_Vecchio(libri,n);
            break;
        
        }
    } while (risposta==5);
    
    
    

    
}