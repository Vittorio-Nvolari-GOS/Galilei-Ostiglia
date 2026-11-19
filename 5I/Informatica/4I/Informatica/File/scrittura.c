#include <stdio.h>
#include <stdlib.h>
#include <string.h>




int main()
{
    FILE *file = fopen("dati.txt","w");

    if (file==NULL)
    {
        printf("Errore apertura file");
        return 1;
    }
    fprintf(file,"Ciao mondo! \n");
    fprintf(file,"Il numero; %d \n",10);
    
    fclose(file);
    return 0;







}