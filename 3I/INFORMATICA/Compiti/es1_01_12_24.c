/*Scrivi un programma che effettua il prodotto tra due numeri utilizzando il metodo 
delle somme successive dopo aver controllato l’input e accettato solo valori maggiori di 0.*/

#include<stdio.h>
int main()
{
    int num1=0,num2=0,ope=0,i;
    
    do
    {
        printf("Inserisci il primo valore:\t");
        scanf("%d", &num1);
    }while (num1<0);

    do
    {
        printf("Inserisci il secondo valore:\t");
        scanf("%d", &num2);
    }while (num2<0);
    
    
    for (i=0; i<num2; i++)
    {
        ope+=num1;
        
    }
    
    

    printf("Il risultato corrisponde a %d ", ope);

    
}