/*Leggere una serie di numeri interi passati dall’utente dopo aver eseguito una scelta che determini se
stampare i valori in senso crescente o decrescente e fermandosi al primo ‘0’ , tale da stampare solo i
valori che rendono la serie crescente o decrescente e restituire quanti numeri erano stati inseriti.
Esempio: scelta=crescente - l’utente inserisce: 4 10 3 8 16 - numeri inseriti: 5.*/
#include<stdio.h>
int main()
{
    int scelta=0,num=0,num2=0;

    do
    {
        printf("Scegli un ordine tra :\n0.Crescente\n1.Decrescente\n");
        scanf("%d", &scelta);
    } while (scelta<0 || scelta>1);

    printf("Inserisci un numero:\t");
    scanf("%d", &num);
    printf("%d", num);
    do
    {
        printf("\tInserisci un numero:\t");
        scanf("%d", &num2);
        if(scelta==0)
        {
            if(num2>num)
            {
                printf("%d",num2);
                num = num2;
            }
        }
        else if(scelta==1)
        {
            if(num2<num)
            {
                printf("%d", num2);
            }
               
        }
    } while (num2!=0);
    
    
}