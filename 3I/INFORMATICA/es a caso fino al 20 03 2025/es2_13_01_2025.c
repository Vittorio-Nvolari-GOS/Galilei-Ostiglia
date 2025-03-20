/*Scrivi un programma che esegue il calcolo 
del fattoriale di un numero num inserito.*/

#include <stdio.h>
int main()
{
    int num, i;
    long long int fattoriale = 1;
    printf("Inserisci un numero: ");
    scanf("%d", &num);
    for (i = 1; i <= num; i++)
    {
        fattoriale *= i;
    }
    printf("Il fattoriale di %d è %lld\n", num, fattoriale);
    return 0;
}