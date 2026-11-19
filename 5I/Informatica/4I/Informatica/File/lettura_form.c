#include <stdio.h>
#include <stdlib.h>
#include <string.h>




int main()
{
    FILE *file = fopen("dati.txt","r");
    char nome[100];
    int eta=0;
    float media=0;
    
    if (file==NULL)
    {
        printf("Errore apertura file");
        return 1;
    }
    fscanf(file,"%s %d %f",nome,eta,media);
    printf("Nome: %s Eta: %d Media: %.2f",nome,eta,media);
    fclose(file);
    return 0;