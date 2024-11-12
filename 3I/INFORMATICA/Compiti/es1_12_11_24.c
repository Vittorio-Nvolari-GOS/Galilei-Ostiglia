/*scrivi un programma che chieda all'utente un numero che sia necessariamente maggiore di 3 e che indica quanti valori della sequenza di fibonacci mostrare.
Per esempio se l'utente inserisce 6 dovranno essere mostrati 1 1 2 3 5 8.*/


#include<stdio.h>
int main ()
{
    int num=0,num1=1,num2=1,num3=0,flag=2;
    
    printf("Inserisci valore maggiore di 3 :\t ");
    scanf("%d", &num);

    if(num>3)
    {
        printf("%d %d",num1,num2);

        while (num!=flag)
        {
            num3=num1+num2;

            num1=num2;
            num2=num3;
            
            printf(" %d",num3);

            flag++;



            
        }
        
    }
    else
        printf("Il numero inserito è minore di 3");
    


   
    
}