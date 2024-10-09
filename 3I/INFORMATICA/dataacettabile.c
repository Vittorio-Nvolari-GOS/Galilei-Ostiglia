/* data uan datain formato gg mm aaaa 
    verificare se la data è acettabile */ 
#include<stdio.h>
int main()
{
    int g=0,m=0,a=0,bisestile=0;
    printf("inserisci la data in ordine gg mm aaaa");
    scanf("%d%d%d", &g, &m, &a);
    if(a%100==0)
    {
        if (a%400==0)
            printf("L'anno è bisestile");
            bisestile=1;
    }
    else
    {
        if(a%4==0)
        {
            printf("L'anno è bisestile");
            bisestile=1;
        }        
    }
    if(m>1 && m<12)  
    {
        if(m==2)
        {
            if(g=>1 && g<=28+bisestile);
            {
                printf("La data è acettabile");             
            }
        }
        else
        {
            if (m==11 || m==4 || m==6 || m==9)
            {
                if(g>=1 && g<=31)
                {
                    printf("\n La data è accettabile");
                }
                else
                {
                    printf("\n La data non è accettabile");
                }
            }
            else
            {
                if(g>=1 && g<=31)
                {
                    printf("\n La data è accettabile");
                }
                else
                {
                    printf("1n La data non è acettabile");

                }
            }
            
        }
    }  

}