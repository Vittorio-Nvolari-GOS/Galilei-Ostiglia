/*Scrivi un programma in C che dato un numero a più cifre in input mostri le cifre maggiori di un altro numero scelto dall'utente compreso tra 1 e 9.*/

#include<stdio.h>
int main() 
{
    int numero=0, soglia=0;
    
    printf("Inserisci un numero a più cifre: ");
    scanf("%d", &numero);
    
    printf("Inserisci un numero compreso tra 1 e 9: ");
    scanf("%d", &soglia);

    

    printf("Le cifre maggiori di %d sono: ", soglia);
    while (numero > 0) 
    {
        int cifra = numero % 10;
        if (cifra > soglia) 
        {
            printf("%d ", cifra);
        }
        numero /= 10;
    }
    printf("\n");

    
}