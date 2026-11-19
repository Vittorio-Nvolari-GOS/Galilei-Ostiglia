#include <stdio.h>
#include <string.h>

typedef char * Stringa;


int main ()
{
    char s[200];
    char s2[200];

    printf("Scrivi una frase ");
    fgets(s,200,stdin);

    printf("Scrivi una frase ");
    fgets(s2,200,stdin);

    printf("la lunghezza della stringa 1 è : %d\n",strlen(s));
    printf("la lunghezza della stringa 2 è : %d\n",strlen(s2));

    printf("le due stringhe sono %d\n", strcmp(s,s2));
    if(strcmp(s,s2)!=0)
    {
        printf("Le stringhe non sono ugali\n");
    }
    else
        printf("Le stringhe sono uguali\n");
    
    printf("le stringhe sono : %s\n",strstr(s,s2));


    
    strcat(s,s2);

    printf("il risultato : %s",s);

    free(s);
    free(s2);




}