/*Scrivere un programma che letto due orari in ore, minuti e secondi restituisce quale orario viene prima.*/
#include <stdio.h>
int main()
{
     int s1=0,m1=0,o1=0;
    printf("inserisci la data in ordine ss mm oo \t");
    scanf("%d%d%d", &s1, &m1, &o1);
     int s2=0,m2=0,o2=0;
    printf("inserisci la data in ordine ss mm oo \t");
    scanf("%d%d%d", &s2, &m2, &o2);
    if(s1==s2 && m1==m2 && o1==o2)
    {
        printf("Gli orari sono uguali");
    }
    if(s1<60 && m1<60 && o1<24 && s2<60 && m2<60 && o2<24 && s1>=0 && s2>=0 && m1>=0 && m2>=0 && o1>=0 && o2>=0 )
    {   
        if(s1<s2 || m1<m2 || o1<o2)
        {
            printf ("Il primo orario viene prima del secondo");
        }  
        else if(s2<s1 || m1<m2 || o2<o1)
        {
            printf("Il secondo orario viene prima del primo");
        }
    }
    else 
    {
        printf("Uno o entrambi gli orari inseriti non sono validi");
    }
    return 0;
}