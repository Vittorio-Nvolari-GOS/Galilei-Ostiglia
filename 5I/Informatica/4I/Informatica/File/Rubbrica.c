/*
    Creare una rubrica che gestisca la memorizzazione 
    dei contatti e ne visualizzi l'elenco
*/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct Contatto
{
    char nome[30];
    char telefono[15];
    char sesso;
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
    printf("_------Rubrica-------_\n");
    while (fread(&c,sizeof(Contatto),1,fp)==1)
    {
        printf("-------------------------\n");    
        printf("%s\n",c.nome);
        printf("%s\n",c.telefono);
        printf("%c\n",c.sesso);
        printf("-------------------------\n");
    }
    fclose(fp);
   
    
}

void InserisciContatto()
{
    FILE *fp=fopen("rubrica.dat","ab");

    if (fp==NULL)
    {
        printf("Errore di apertura file\n");
        return;
    }

    Contatto c;
    printf("Inserisci il nome del contatto: \n");
    scanf("%s[^\n]",c.nome);
    printf("Inserisci il numero del contatto: \n");
    scanf("%s[^\n]",c.telefono);
    printf("Insrisci sesso:\n");
    scanf("%c",&c.sesso);
    fwrite(&c,sizeof(Contatto),1,fp);
    fclose(fp);
}

void EliminaContatto()
{
    FILE *fp=fopen("rubrica.dat","rb");
    FILE *fpTemp =fopen("temp.dat","wb");
    char cerca[30];
    int numeroCe;
    Contatto c;

    if (fp==NULL)
    {
        printf("Errore di aperrtura file\n");
        return;
    }
    if (fpTemp==NULL)
    {
        printf("Errore di aperrtura file temporaneo\n");
        return;
    }
    printf("Inserisci il nome\n");
    scanf("%[^\n]",cerca);
    getchar();
    printf("Inserisci il numero:\n");
    scanf("%d",&numeroCe);

    while (fread(&c,sizeof(Contatto),1,fp)==1)
    {
        if (strcmp(c.nome,cerca)==0 && strcmp(c.telefono,numeroCes)==0)
            printf("Ho strovato il nome che verrà eliminato");
        else
            fwrite(&c,sizeof(Contatto),1,fpTemp);
    }
    fclose(fp);
    fclose(fpTemp);

    fpTemp = fopen("temp.dat","rb");
    fp = fopen("rubbrica.dat","wb");
    if (fp==NULL)
    {
        printf("Errore di aperrtura file\n");
        return;
    }
    if (fpTemp==NULL)
    {
        printf("Errore di aperrtura file temporaneo\n");
        return;
    }

    while (fread(&c,sizeof(Contatto),1,fpTemp))
    {
        fwrite(&c,sizeof(Contatto),1,fp);
    }
    
}

void DividiPerSesso()
{
    FILE *fp =fopen("rubbrica.dat","rb");
    FILE *fpF = fopen("femmine.dat","ab");
    FILE *fpM = fopen("maschi.dat","ab");
    Contatto c;
    if (fp==NULL)
    {
        printf("Errore di aperrtura file rubbrica\n");
        return;
    }
    if (fpF==NULL)
    {
        printf("Errore di aperrtura file femmine\n");
        return;
    }
    if (fpM==NULL)
    {
        printf("Errore di aperrtura file maschi\n");
        return;
    }
    while (fread(&c,sizeof(Contatto),1,fp))
    {
        if (c.sesso=='f'|| c.sesso=='F')
            fwrite(&c,sizeof(Contatto),1,fpF);
        else if (c.sesso=='m'|| c.sesso=='M')
            fwrite(&c,sizeof(Contatto),1,fpM);
    }
    fclose(fp);
    fclose(fpM);
    fclose(fpF);

    fpF = fopen("femmine.dat","rb");
    fpM = fopen("maschi.dat","rb");

    printf("_------Rubrica Maschi-------_\n");
    while (fread(&c,sizeof(Contatto),1,fpM)==1)
    {
        printf("-------------------------\n");    
        printf("%s\n",c.nome);
        printf("%s\n",c.telefono);
        printf("%c\n",c.sesso);
        printf("-------------------------\n");
    }
    fclose(fpM);

    printf("_------Rubrica Femmine-------_\n");
    while (fread(&c,sizeof(Contatto),1,fpF)==1)
    {
        printf("-------------------------\n");    
        printf("%s\n",c.nome);
        printf("%s\n",c.telefono);
        printf("%c\n",c.sesso);
        printf("-------------------------\n");
    }
    fclose(fpF);

}

void cercaPerNumero()
{

}
int main()
{
    int scelta=0;


    do
    {
        printf("Menu Rubbrica\n");
        printf("1. Aggiungi contatto\n");
        printf("2. Visualizza Contatti\n");
        printf("3. Elimina contatto\n");
        printf("4. Separa i contatti in base al sesso\n");
        printf("0. Exit\n");
        scanf("%d",&scelta);
        getchar();

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
            case 3:
                EliminaContatto();
                break;
            case 4:
                DividiPerSesso();
                break;
            
            default:
            
                printf("La scelta selezionata non esiste");
                break;
        }
    } while (scelta!=0);
    

}
