#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char buffer[20];

    printf("Inserisci una stringa:\t");
    if(fgets(buffer,20,stdin)!=NULL)
    {
        printf("Hai inserito: %s", buffer); 
    }
}