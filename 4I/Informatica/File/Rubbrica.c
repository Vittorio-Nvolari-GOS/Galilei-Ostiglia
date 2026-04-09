/*
    Creare una rubrica che gestisca la memorizzazione 
    dei contatti e ne visualizzi l'elenco
*/

#include <stdio.h>

typedef struct Contatto
{
    char nome[30];
    char telefono[15];
}Contatto;

void MostraContatto()
{
    FILE *fp=fopen("rubrica.bin","rb");
    
    if (fp==NULL)
    {
        printf("Errore di aperrtura file");
        return;
    }
    Contatto c;
    printf("_/------Rubrica-------\_\n");
    while (fread(&c,sizeof(Contatto),1,fp)==1)
    {
        printf("-------------------------\n");    
        printf("%s\n",c.nome);
        printf("%s\n",c.telefono);
        printf("-------------------------\n");
    }
    fclose(fp);
   
    
}

void InserisciContatto()
{
    FILE *fp=fopen("rubrica.bin","ab");

    if (fp==NULL)
    {
        printf("Errore di aperrtura file");
        return;
    }

    Contatto c;
    printf("Inserisci il nome del contatto: \n");
    scanf("%s[^\n]",&c.nome);
    printf("Inserisci il numero del contatto: \n");
    scanf("%s[^\n]",&c.telefono);
    fwrite(&c,sizeof(Contatto),1,fp);
    fclose(fp);
}


int main()
{
    int scelta=0;


    do
    {
        printf("Menu Rubbrica\n");
        printf("1. Aggiungi contatto\n");
        printf("2. Visualizza Contatti\n");
        printf("0. Exit\n");
        scanf("%d",&scelta);

        switch (scelta)
        {
        case 0:
            break;
        case 1:
            InserisciContatto();
            break;
        case 2:
            MostraContatto();
            break;
        
        default:
            printf("La scelta selezionata non esiste");
            break;
        }
    } while (scelta!=0);
    

}
