#include <stdio.h>


typedef struct Persona
{
    char nome[20];
    char cognome[20];
    int eta;


}Persona;


void Riempi(Persona* pers,int *n)

int main()
{
    Persona persone;
    printf("Inserisci il nome:\n");
    fgets(persone.nome,20,stdin);
    printf("Inserisci il congnome: \n");
    fgets(persone.cognome,20,stdin);
    printf("Inserisci eta:\n");
    scanf("%d", &persone.eta);
    
    FILE *file = fopen("dati.txt","w");




    if (file==NULL)
    {
        printf("Errore apertura file");
        return 1;
    }
    fprintf(file,"Ciao mondo! \n");
    fprintf(file,"Mi chiamo %s \n",10);
    
    fclose(file);
    return 0;
    



}