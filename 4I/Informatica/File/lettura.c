#include <stdio.h>

int main()
{
    FILE *file=fopen("dati.txt","r");
    char riga[100];

    if (file==NULL)
    {
        printf("errore di lettura\n");
        return 1;
    }
    while (fgets(riga,sizeof(riga),file)!=NULL)
    {
        printf("%s",riga);
    }
    fclose(file);
    return 0;
    
    
}