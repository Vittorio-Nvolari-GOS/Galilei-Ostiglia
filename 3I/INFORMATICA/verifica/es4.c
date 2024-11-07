/*VERIFICARE SE UN NUMERO È POTENZA DEL 2 E SE LO È DETERMINARE
L’ESPONENTE.*/
#include<stdio.h>
int main()
{
    int n1=0,ope=0,ope2=0,ope3=0,ope1=0,flag=0;
    
    printf("Inserisci un numero tra 0 e 10");
    scanf("%d", &n1);
    
    ope=n1/2;
    if(ope==0)
        flag=+1;
        ope1=ope/2;
        if(ope1==0)
        {
            flag=+1;
            ope2=ope1/2;
            printf("Il numero dell esponente è %d",flag);
            if(ope2==0)
            {
                flag=+1;
                ope3=ope2/2;
                printf("Il numero dell esponente è %d",flag);
                if(ope3==0)
                {
                    flag=+1;
                    printf("Il numero dell esponente è %d",flag);
                }
            }
            else
                printf("Il numero non è la potenza del 2");

            
        }
        else
            printf("Il numero non è la potenza del 2");

        
        
    else 
        printf("Il numero non è la potenza del 2");


}   