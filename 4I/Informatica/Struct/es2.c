#include <stdio.h>
#include <stdlib.h>


typedef struct canzone
{
    char titolo[50];
    char artista[50];
    int durata;
    int id;
    struct canzone *next;
}canzone;

typedef struct lista
{
    canzone *head;
    int longo;
}lista;


void stampa_canzone(canzone *temp){
printf("Il titolo è %s", temp->titolo);
        printf("Il titolo è %s", temp->artista);
        printf("Il titolo è %d", temp->durata);
        printf("Il titolo è %d", temp->id);
}
void stampa_lista(lista *c)
{
    canzone* temp=c->head;
    while (temp->next!=NULL)
    {
        stampa_canzone(temp);
    }
    
    
}


int main ()
{






}
