#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>

typedef char* Stringa;

void compatta(Stringa _buffer,int _len )
{
    if (_len>0 && _buffer[_len-1]=='\n')
    {
        _buffer[_len-1] = '\0';
        _len--;
    }
    
}

int conteggio(Stringa frase)
{
    int cnt=0;
    for (int i = 0; frase[i]!='\0' ; i++)
    {
        char c = tolower(frase[i]);
        if(c=='a'|| c=='e'|| c=='i'|| c=='o'|| c=='u')
            cnt++;
    }       
    return cnt;
}



int main()
{
    char buffer[200];
    Stringa frase;
    

    printf("Inserisci una string: ");
    fgets(buffer,sizeof(buffer),stdin);
    int len = strlen(buffer);
    compatta(buffer,len);
    frase = (Stringa)malloc((len+1)*sizeof(char));
    if(frase==NULL)
    {
        printf("C'è un errore\n");
        return 1;
    }
    
    strcpy(frase,buffer);
    
    printf("Il numero delle vocali è : %d",conteggio(frase));

    free(frase);
    return 0;




}