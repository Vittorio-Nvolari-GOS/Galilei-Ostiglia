/*verificare se una stringa o una parola è una palindroma ovverro 
per esempio anna che al contrario è semore anna */

#include <stdio.h>
#include <stdlib.h>


typedef char* String;


int lughezza(String _s)
{
    int i=0;
    while (_s[i]!='\0')
    {
        i++;
    }
    return i-1;
}

int palindroma (String s, int _dim)
{
    int flag=0, i, j;
    for( i=0, j=_dim-1; i<_dim/2; i++,j--)
    {
        if(s[i]!=s[j])
            flag=1;
    }    
    
    return flag;
}

int main()
{
    int dim=0;
    String s=(String)malloc(sizeof(s)*sizeof(char));

    if (s==NULL)
        return 1;
    printf("Inserisci una stringa:\t");
    fgets(s,50,stdin);
    printf("\n%s",s);
    dim = lughezza(s);
    printf("\n%d",dim);

    printf("\n%d", palindroma(s,dim));










}


