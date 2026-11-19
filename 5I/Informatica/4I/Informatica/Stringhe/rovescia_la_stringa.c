//  data una stringa scrivila la contrario

#include <stdio.h>
#include <stdlib.h>
#include <string.h>


typedef char* String;

void scambiaElementi(String _frase)
{
    int len=strlen(_frase)-1;
    int len2=len;
    String temp=malloc(len*sizeof(char));
    strcpy(temp,_frase);

    for (int i = 0; i < len; i++)
    {
        _frase[i]=temp[len2-1];
        len2--;
    }
    

}

int main()
{
    String frase = malloc(30*sizeof(char));

    printf("Inserisci una frase: ");
    fgets(frase,30,stdin);

    scambiaElementi(frase);

    printf("La frase al Contrario è : %s",frase);
}