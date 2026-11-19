#include <stdio.h>
#include <stdlib.h>
#include <string.h>


typedef char* String;

int stringa_in_stringa(String s1, String s2)
{
    int dim1 = strlen(s1)-1;
    int dim2 = strlen(s2)-1;
    int flag = 0;
    int cnt = 0;

    for(int i = 0; i <= dim1-dim2+1; i++)
    {
        if(s1[i] == s2[0])
        {
            flag = 1;
            for(int j = 1; j < dim2; j++)
            {
                if(s1[i+j] != s2[j]){
                flag = 0;
                break;
                }
            }
            cnt += flag;
        }
    }
    return cnt;
}

int main()
{
    String frase1 = malloc(30*sizeof(char));
    String frase2 = malloc(30*sizeof(char));

    printf("Inserisci una frase: ");
    fgets(frase1,30,stdin);
    
    printf("Inserisci una frase: ");
    fgets(frase2,30,stdin);

    
    printf("La prima frase è %d nella seconda",stringa_in_stringa(frase1,frase2));
    
}