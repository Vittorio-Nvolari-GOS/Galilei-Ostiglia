/*Scrivi un programma che effettua il prodotto tra due numeri utilizzando il metodo 
delle somme successive dopo aver controllato l’input e accettato solo valori maggiori di 0.*/

#include<stdio.h>
int main()
{
    int num1=0,num2=0,cnt;
    
    
    printf("Inserisci il primo numero:\t");
    scnaf("%d", &num1);
    printf("Inserisci il secondo numero:\t");
    scnaf("%d", &num2);
    
    do
    {
        num1=+num1;
        cnt++;
        
    } while (cnt!=num2);
    

    printf("Il risultato corrisponde a %d ", num1);

    
}