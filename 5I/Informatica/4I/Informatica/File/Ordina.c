/*
    Scrivere una funzione che preso in ingresso il nome del filecontenente interi,
    lo modifichi in modo tale da contenere gli stessi numeri ma ordinati
    in senso decrescente
*/


#include <stdio.h>
#include <stdlib.h>



void OrdinaFile(char nomeFile[])
{
    FILE *Fp;
    int i=0,j=0,temp=0,n=0;
    int vet[100];

    Fp=fopen(nomeFile,"r");
    if (Fp==NULL)
    {
        printf("Errore Di Lettura\n");
        return;
    }
    // lettura file
    while (fscanf(Fp, "%d", &vet[n]) == 1)
    {
        printf("Elemento %d : %d\n", i+1,vet[i]);
        n++;
        i++;
    }

    fclose(Fp);
    // ordinamento in bubble sort 
    for (i = 0; i <n-1; i++)
    {
        for (j = i+1; j < n; j++)
        {
            if(vet[i]<vet[j])
            {
                temp=vet[i];
                vet[i]=vet[j];
                vet[j]=temp;
            }
        }
        
    }
    // riapriamo il file per scriverci i numeri riordinati

    Fp = fopen(nomeFile,"w");
    if(Fp==NULL)
    {
        printf("Errore di apertura file \n");
        return;
    }

    for ( i = 0; i < n; i++)
    {
        fprintf(Fp,"%d ",vet[i]);
    }
    fclose(Fp);    

    Fp = fopen(nomeFile,"r");
    if(Fp==NULL)
    {
        printf("Errore di apertura file \n");
        return;
    }
    i=0;
    printf("\n\n");
    while (fscanf(Fp, "%d", &temp) == 1)
    {
        printf("Elemento %d : %d\n", i+1, temp);
        i++;
    }
    fclose(Fp);

    
    


}




int main()
{
    char nome[20];

    printf("Inserisci il nome del file :\n");
    scanf("%s",nome);


    OrdinaFile(nome);




}