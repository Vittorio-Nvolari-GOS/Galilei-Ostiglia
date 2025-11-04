#include <stdio.h>
#include<stdlib.h>
#include <string.h>

typedef char* String;

void Nome(String _nome)
{
    for (int i = 0; i < 3; i++)
    {
        if(_nome[i]!='A','E','I','O','U','a','i','o','u')
            _nome[i]=_nome[i];
    }
    realloc(_nome,4*sizeof(char));
    
}

void Cognome(String _cognome)
{
    for (int i = 0; i < 3; i++)
    {
        if(_cognome[i]!='A','E','I','O','U','a','i','o','u')
            _cognome[i]=_cognome[i];
    }
    realloc(_cognome,4*sizeof(char));
    
}

void Mese(String _mese)
{
    if (strcmp(_mese,"Gennaio")==0 || strcmp(_mese,"gennaio")==0 )
    {
        _mese[0]='A';
        _mese[1]='\n';
    }
    
    if (strcmp(_mese,"Febbraio")==0 || strcmp(_mese,"febbraio")==0 )
    {
        _mese[0]='B';
        _mese[1]='\n';
    }
    
    if (strcmp(_mese,"Marzo")==0 || strcmp(_mese,"marzo")==0 )
    {
        _mese[0]='C';
        _mese[1]='\n';
    }

    if (strcmp(_mese,"Aprile")==0 || strcmp(_mese,"aprile")==0 )
    {
        _mese[0]='D';
        _mese[1]='\n';
    }

    if (strcmp(_mese,"Maggio")==0 || strcmp(_mese,"maggio")==0 )
    {
        _mese[0]='E';
        _mese[1]='\n';
    }

    if (strcmp(_mese,"Giugno")==0 || strcmp(_mese,"giugno")==0 )
    {
        _mese[0]='H';
        _mese[1]='\n';
    }

    if (strcmp(_mese,"Luglio")==0 || strcmp(_mese,"luglio")==0 )
    {
        _mese[0]='L';
        _mese[1]='\n';
    }

    if (strcmp(_mese,"Agosto")==0 || strcmp(_mese,"agosto")==0 )
    {
        _mese[0]='M';
        _mese[1]='\n';
    }
    
    if (strcmp(_mese,"Settembre")==0 || strcmp(_mese,"settembre")==0 )
    {
        _mese[0]='P';
        _mese[1]='\n';
    }

    if (strcmp(_mese,"Ottobre")==0 || strcmp(_mese,"ottobre")==0 )
    {
        _mese[0]='R';
        _mese[1]='\n';
    }

    if (strcmp(_mese,"Novembre")==0 || strcmp(_mese,"novembre")==0 )
    {
        _mese[0]='S';
        _mese[1]='\n';
    }

    if (strcmp(_mese,"Dicembre")==0 || strcmp(_mese,"dicembre")==0 )
    {
        _mese[0]='T';
        _mese[1]='\n';
    }
    realloc(_mese,2*sizeof(char));
}

void Anno(int _anno)
{
    _anno[3]

}



int main()
{
    char Codice[17];
    char Nome[30];
    char Cognome[30];
    int* Giorno=0;
    char mese[30];
    int* anno[4]=0;
    String Comune="G186";

    printf("Inserisci il tuo nome:\n");
    fgets(Nome, 30, stdin);
    printf("Inserisci il tuo cognome:\n");
    fgets(Cognome, 30, stdin);
    printf("Inserisci il tuo giorno di nascita(se ha una cifra aggiungi 0): \n");
    scanf("%d",&Giorno);
    printf("Inserisci il tuo cognome:\n");
    fgets(mese, 30, stdin);
    printf("Inserisci il tuo anno di nascita: \n");
    scanf("%d",&anno);










}
