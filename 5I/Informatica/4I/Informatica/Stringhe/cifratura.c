#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef char* String;

String cifra(String _frase,int _fatcifra)
{
    int len=strlen(_frase);
    for (int i = 0; i < len-1; i++)
    {
        if(_frase[i]!=' ')
        {
            for (int j = 0; j < _fatcifra; j++)
            {
                if(_frase[i]=='{')
                    _frase[i]='a';
                else
                    _frase[i]+=1;
                
                if(_frase[i]=='[')
                    _frase[i]='A';
                else
                    _frase[i]+=1;
                
            }
        }
        
        
    }
    return _frase;
}

String decifra(String _frase,int _fatcifra)
{
    int len=strlen(_frase);
    for (int i = 0; i < len-1; i++)
    {
        if(_frase[i]!=' ')
        {
           for (int j = 0; j < _fatcifra; j++)
            {
                if(_frase[i]=='`')
                    _frase[i]='z';
                else
                    _frase[i]-=1;
                
                if(_frase[i]=='@')
                    _frase[i]='Z';
                else
                    _frase[i]-=1;
            
            } 
        }
        
        
    }
    return _frase;
}

int main()
{
    
    String frase=malloc(30*sizeof(char));
    int cifratore ;

    printf("inserisci una frase\n");
    fgets(frase,30,stdin);
    printf("inseriscdi numero cifratore: \n");
    scanf("%d",&cifratore);
    printf("la frase cifrata corrisponde a : %s\n",cifra(frase,cifratore));
    printf("la frase decifrata corrisponde a : %s",decifra(frase,cifratore));





}