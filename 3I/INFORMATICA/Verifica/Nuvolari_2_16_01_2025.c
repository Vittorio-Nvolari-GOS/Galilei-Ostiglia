/*Richiesti due numeri da tastiera verifica e comunica se sono numeri Amici/Amicali.
Definizione di numeri Amicali: due numeri si dicono amicali se la somma dei divisori del primo
numero è uguale al secondo numero e viceversa.*/

#include<stdio.h>
int main()
{
    int num1=0,num2=0,som1=0,som2=0,i,ope1=0,ope2=0,j;

    do
    {
        printf("Inserisci il primo numero:\t");
        scanf("%d", &num1);
    } while (num1<0);

    do
    {
        printf("Inserisci il secondo numero:\t");
        scanf("%d", &num2);
    } while (num2<0);

    for ( i = 1; i < num1 ; i++)
    {
        ope1=num1%i;
        if (ope1==0)
        {
            som1+=i;
        }
        

    }
    
    for ( j = 1; j < num2 ; j++)
    {
        ope2=num2%j;
        if (ope2==0)
        {
            som2+=j;
        }
        

    }
    
    if (som1==num2 && som2==num1)
    {
        printf("Il %d e il %d sono detti numeri amici",num1,num2);
    }
    else
    {
        printf("Il %d e il %d non sono detti numeri amici",num1,num2);
    }
    
    
    
    
}