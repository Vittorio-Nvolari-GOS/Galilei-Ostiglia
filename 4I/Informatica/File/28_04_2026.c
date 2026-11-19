/*  CREARE UN PROGRAMMA CHE GESTISCA UNA LIBRERIA DOTATA DI DIVERSI LIBRI TALE DA POTER ESEGUIRE LE SEGUENTI OPERAZONI:
    - AGGIUNTA/CREAZIONE DELLA LISTA DI LIBRI;
    - RICERCA DI UN LIBRO;
    - CANCELLAZIONE DI UN LIBRO;
    - MODIFICA DELL'ISBN;
    - SEPARARE LA LISTA DEI LIBRI IN DUE LISTE CONTENENTI RISPETTIVAMENTE I LIBRI CREATI PRIMA DEL 2000 E QUELLI DOPO;
    TUTTO VIENE GESTITO DA FILE BINARI
    typedef struct{
        char autore[30];
        char titolo[30];
        char ISBN[20];
        int anno;
    }Libro;
    */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct
{
    char autore[30];
    char titolo[30];
    char ISBN[20];
    int anno;
}Libro;

void aggiungiLibro()
{
    int annotemp=0;

    printf("Di che anno è il libro ?");
    scanf("%d",&annotemp);
    getchar();
    if (annotemp>2000)
    {
        FILE *fp = fopen("LibriUp.bin", "ab"); 
        if (fp == NULL) 
        {
            printf("Errore apertura file!\n");
            return;
        }
        Libro c;
        printf("Inserisci nome: ");
        scanf(" %[^\n]", c.titolo);
        getchar();
        printf("Inserisci telefono: ");
        scanf(" %[^\n]", c.autore);
        getchar();
        printf("Inserisci il sesso: ");
        scanf(" %c", &c.anno);
        getchar();

        fwrite(&c, sizeof(Libro), 1, fp);
        fclose(fp);
    }
    else
    {
        FILE *fpU = fopen("LibriDw.bin", "ab"); 
        if (fpU == NULL) 
        {
            printf("Errore apertura file!\n");
            return;
        }
        Libro c;
        printf("Inserisci nome: ");
        scanf(" %[^\n]", c.titolo);
        getchar();
        printf("Inserisci telefono: ");
        scanf(" %[^\n]", c.autore);
        getchar();
        printf("Inserisci il sesso: ");
        scanf(" %c", &c.anno);
        getchar();

        fwrite(&c, sizeof(Libro), 1, fpU);
        fclose(fpU);
    }
    

}

void ricercaLibro()
{
    int scelta=0;

    do
    {
        printf("_____Menu______\n");
        printf("1. ")
        
        switch (scelta)
        {
        case 1:
            /* code */
            break;
        
        default:
            break;
        }
    } while (scelta!=0);
    
}




int main ()
{
    int scelta =0;


    do
    {
        printf("_____Menu_____\n");
        printf("1. Aggiungi un libro\n");
        printf("2. Ricerca libro\n");
        printf("3. Cancella libro\n");
        printf("4. Modifica ispn\n");
        printf("0. Exit");
        scanf("%d",&scelta);
        getchar();
        
        switch (scelta)
        {
        case 1:
            
            break;
        case 2:
            /* code */
            break;
        case 3:
            /* code */
            break;
        case 4:
            /* code */
            break;
        case 0:
            break;
        
        default:
            printf("Scelta non disponibile");
            break;
        }
    } while (scelta!=0);
    
}