/*Scrivi un programma che effettua il calcolo della media dei voti della pagella,
 inserendoli uno alla volta e chiedendo a ogni inserimento di un numero se i voti 
da inserire sono terminati accettando come risposta S oppure N*/

#include <stdio.h>
int main()
{
    int voto, somma = 0, contatore = 0;
    char risposta;
    do
    {
        printf("Inserisci il voto: ");
        scanf("%d", &voto);
        somma += voto;
        contatore++;
        printf("Hai finito di inserire i voti? (S/N): ");
        scanf(" %c", &risposta);
    } while (risposta != 'S'|| risposta != 's');
    printf("La media dei voti è: %.2f\n", (float)somma / contatore);
    return 0;
}