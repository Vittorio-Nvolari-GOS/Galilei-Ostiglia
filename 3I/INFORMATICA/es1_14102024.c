/*DATE DUE DATE ESPRESSE IN g, m, a DETERMINARE LA DATA PIU' RECENTE. 
Esempio:  tra la data 5/07/2024 e  14/07/2024  la più recente è il 14/07/2024.*/
#include <stdio.h>

int main() 
{

    int g1, m1, a1;
    int g2, m2, a2;
    int bisestile;
 
    printf("Inserisci la prima data (gg mm aaaa): ");
    scanf("%d %d %d", &g1, &m1, &a1);

    printf("Inserisci la seconda data (gg mm aaaa): ");
    scanf("%d %d %d", &g2, &m2, &a2);

    if(a1%100==0 )
    {
        if (a1%400==0)
            printf("L'anno è bisestile");
            bisestile=1;
    }
    else
    {
        if(a1%4==0)
        {
            printf("L'anno è bisestile");
            bisestile=1;
        }        
    }
    if(m1>1 && m1<12)  
    {
        if(m1==2)
        {
            if(g>=1 && g<=28+bisestile);
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
    if (a1 > a2) 
    {
        printf("La data più recente è: %02d/%02d/%04d\n", g1, m1, a1);
    } 
    else if (a1 < a2) 
    {
        printf("La data più recente è: %02d/%02d/%04d\n", g2, m2, a2);
    } 
    else 
    {
        if (m1 > m2)
        {
            printf("La data più recente è: %02d/%02d/%04d\n", g1, m1, a1);
        } 
        else if (m1 < m2) 
        {
            printf("La data più recente è: %02d/%02d/%04d\n", g2, m2, a2);
        } 
        else 
        {
            if (g1 > g2) 
            {
                printf("La data più recente è: %02d/%02d/%04d\n", g1, m1, a1);
            } 
            else if (g1 < g2) 
            {
                printf("La data più recente è: %02d/%02d/%04d\n", g2, m2, a2);
            }
            else 
            {
                printf("Le due date sono uguali.\n");
            }
        }
    }

    
}