//eliminare spazzi 
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

Stringa eliminaSpazzi(Stringa _frase)
{
    char temp;
    int dim=strlen(_frase);
    for (int i = 0; i < dim+1 ; i++)
    {
        if (_frase[i]==' ')
        {
            for (int j = i; j < dim; j++)
            {
                _frase[i]=_frase[j+1];
                dim--;
                _frase=realloc(_frase,dim*sizeof(char*));

            }
            
        }
        
    }
    return _frase;
    
    
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

    printf("%s", eliminaSpazzi(frase));
    
    
    free(frase);


}

   