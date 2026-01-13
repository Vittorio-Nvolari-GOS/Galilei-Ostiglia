/* Classe di studenti:
Cognome, Nome, classe, matricola
Per ogni studente dotato di matricola abbiamo
le informazioni riguardante gli esami e il livello raggiunto

ricerca la matricola con piu certificazioni  
*/

#include <stdio.h>
#include <stdlib.h>
 


typedef struct 
{
    char Cognome [20];
    char Nome [20];
    char classe [3];
    int matricola;
} studente;

typedef struct 
{
    int matricola;
    struct esame 
    {
        char corso [20];
        int livello;
    };
}certificazioni;



int main()
{
    


}