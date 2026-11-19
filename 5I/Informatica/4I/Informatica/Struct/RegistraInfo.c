/*Registrare le informazioni di lacuni libri titolo,autore, anno
arry di libri
caricare l'array
visualizzazione
rimuovere un libro 
creare un libro in base al titolo */

#include<stdlib.h>
#include <stdio.h>
#include<string.h>

typedef char* String;

typedef struct
{
    int id;
    char titolo[50];
    char autore[50];
    int annoUsc;
    
}libro;



void inserisciLibro(int )
{

}


int main()
{

    int risposta=0;

    

    while (risposta==4)
    {
        printf("------Menu------\n");
        printf("0.Inserisci un libro\n");
        printf("1.Visualizza libri\n");
        printf("2.Rimuovi un libro\n");
        printf("3.Cerca libro dal titolo\n");
        printf("4.Esci");
        
        
        
        switch (risposta)
        {
        case 0:
            /* code */
            break;
        
        default:
            break;
        }
    }
    
    
   
    
    



}
