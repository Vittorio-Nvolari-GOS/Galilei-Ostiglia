/*
    Scrivere un programma in C che gestisca un insieme di numeri interi usando un array dinamico.
Il programma deve permettere, tramite menù:
    1. Aggiungere un numero (espandendo l’array con realloc)
    2. Visualizzare tutti i numeri
    3. Cercare un numero specifico
    4. Ordinare i numeri in ordine crescente
    5. Eliminare un numero scelto
    6. Uscire
*/

#include <stdio.h>
#include <stdlib.h>


int main()
{
    int *numer=NULL;  // Array dinamico
    int dimensione=0; //dimensione arry
    int scelta,i,n,j,trovato=0;
    
    do
    {
        printf("Scegli trale seguenti oozioni:\n1. Aggiungere un numero \n2. Visualizzare tutti i numeri\n3. Cercare un numero specifico\n4. Ordinare i numeri in ordine crescente\n5. Eliminare un numero scelto\n6. Uscire\n");
        scanf("%d", &scelta);
        switch (scelta)
        {
            case 1:
                printf("Inserisci il numero");
                scanf("%d", &n);
                numer=(int*)realloc(numer, (dimensione+1)*sizeof(int));
                if(numer=NULL)
                {
                    printf("Errore di allocazione\n\n");
                    return 1;
                }
                numer[dimensione]=n;
                dimensione++;
                printf("Numero Aggiunto\n");
                break;
            case 2:
                if(dimensione==0)
                    printf("l'array è vuoto\n\n");
                else
                    for ( i = 0; i < dimensione; i++)
                    {
                        printf("%d \t",numer[i]);
                    }
                
                break;
            case 3:
                printf("Digita il numero da cercare: ");
                scanf("%d", &n);
                trovato=0;
                for ( i = 0; i < dimensione; i++)
                {
                    if(numer[i]==n)
                    {
                        trovato==1;
                        printf("Il numero %d trovato in posizione %d\n", n,i);
                        
                    }
                        
                }
                if(trovato==0)
                    printf("Elemento non trovato");
                
                break;
            case 4:
                for (i = 0; i < dimensione - 1; i++) 
                {
                    for (j = 0; j < dimensione - i - 1; j++) 
                    {
                        if (numer[j] > numer[j+1]) 
                        {
                            int tmp = numer[j];
                            numer[j] = numer[j+1];
                            numer[j+1] = tmp;
                        }
                    }
                }
                // Visualizza
                printf("Numeri ordinati:\n");
                for (i = 0; i < dimensione; i++)
                {
                    printf("%d ", numer[i]);
                }
                printf("\n");
                break;
            case 5:
                //
                break;
            case 6:
                //
                break;
            default:
                printf("si è verificato un'errore durante l'esecuzione");
                break;
        }
    
    } while (scelta!=6);
    
   
    





}