/*
    Crea una struct prodotto con nome, id e prezzo
    scrivere su file binario una serie di prodotti.
    modificare il prezzo di un prodotto dato il suo id
*/



#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct Prodotto
{
    int id;
    char nome[30];
    float prezzo;
}Prodotto;

void InserisciProdotto(const char *filename)
{
    FILE *fp = fopen(filename,"ab");
    int n=0;
    Prodotto p;

    if (fp==NULL)
    {
        printf("Errore di aperrtura file");
        return;
    }
    
    printf("Quanti prodotti vuoi inserire ?\n");
    scanf("%d",&n);
    getchar();

    for (int i = 0; i < n; i++)
    {
        printf("Prodotto n.%d\n",i+1);
        printf("ID:\n");
        scanf("%d",&p.id);
        getchar();
        printf("Nome:\n");
        scanf("%[^\n]",p.nome);
        getchar();
        printf("Prezzo:\n");
        scanf("%f",&p.prezzo);
        getchar();

        fwrite(&p,sizeof(Prodotto),1,fp);
    }
    fclose(fp);
}

void MostraProdotto(const char *filename)
{
    FILE *fp=fopen(filename,"rb");
    
    if (fp==NULL)
    {
        printf("Errore di aperrtura file");
        return;
    }
    Prodotto p;
    printf("_/------Prodotti-------\_\n");
    while (fread(&p,sizeof(Prodotto),1,fp)==1)
    {
        printf("-------------------------\n");    
        printf("%d\n",p.id);
        printf("%s\n",p.nome);
        printf("%0.2f\n",p.prezzo);
        printf("-------------------------\n");
    }
    fclose(fp);
}

void cercaProdotto(const char *filename, int _ID){
    FILE *fp = fopen(filename, "rb");
    Prodotto p;
    int trovato;

    if(fp== NULL){
        printf("Non ci sono prodotti.\n");
        return;
    }
    while(fread(&p, sizeof(Prodotto), 1, fp)==1){
        if(p.id==_ID){
            printf("\nTrovato Nome: %s - Prezzo: %f", p.nome, p.prezzo);
            trovato=1;
        }
    }
    if(!trovato){
        printf("\nProdotto non trovato.");
    }
    fclose(fp);
}

void ModificaPrezzo(const char *filename,int _id,float nP)
{
    FILE *fp = fopen(filename, "rb+");
    Prodotto p;

    if (fp==NULL)
    {
        printf("Errore di aperrtura file");
        return;
    }

    while (fread(&p,sizeof(Prodotto),1,fp)==1)
    {
        if (p.id==_id)
        {
            p.prezzo=nP;

            fseek(fp,sizeof(Prodotto),SEEK_CUR);
            fwrite(&fp,sizeof(Prodotto),1,fp);
        }
        
    }
    fclose(fp);
    
}

int main()
{
    const char *file = "prodotti.dat";
    
    float newPrice=0;
    int scelta=0,id=0;
    do
    {
        printf("Menu Prodotto\n");
        printf("1. Aggiungi prodotto\n");
        printf("2. Visualizza elenco prodotti\n");
        printf("3. Modifica prezzo prodotto\n");
        printf("0. Exit\n");
        scanf("%d",&scelta);
        getchar();

        switch (scelta)
        {
        case 0:
            break;
        case 1:
            InserisciProdotto(file);
            break;
        case 2:
            MostraProdotto(file);
            break;
        case 3:
            printf("inserisci l'id del prodotto\n");
            scanf("%d",&id);
            getchar();
            printf("Inserisci nuovo Prezzo\n");
            scanf("%f",&newPrice);
            getchar();
            ModificaPrezzo(file,id,newPrice);
            break;
        
        default:
            printf("La scelta selezionata non esiste");
            break;
        }
    } while (scelta!=0);



}