/*
Consegna:
3) Calcola l’importo totale da pagare al cinema,
sapendo che, ogni 12 studenti, spetta una gratuità e che
per chi ha meno di 15 anni il biglietto è scontato del 40%:
leggi in ingresso il numero di studenti, il numero di studenti 
con meno di 15 anni e il costo del biglietto.
*/

#include<stdio.h>  // librerie
int main()
{
    int std_15=0,std=0; // dichiarazione variabili
    float costo_biglietto=0,biglietti_gratis=0,biglietti_normali=0,costo_biglietti_normali=0,costo_biglietti_15=0,importo_totale=0; 
    printf("Inserisci numero studenti \t"); // richiesta dei vari dati
    scanf("%d",&std);
    printf("Inserisci numero studenti sotto i 15 anni \t");
    scanf("%d",&std_15);
    printf("Inserisci costo biglietto \t");
    scanf("%f",&costo_biglietto);
    biglietti_gratis=std/12; //calcolo numero biglietti gratuiti
    biglietti_normali=std-(biglietti_gratis+std_15);  // calcolo numero di biglietti normali 
    costo_biglietti_normali=biglietti_normali*costo_biglietto;  // calcolo costo biglitti normali
    costo_biglietti_15=(std_15*costo_biglietto)*0.6;  // calcolo costo biglietti per chi ha meno di 15 anni
    importo_totale=costo_biglietti_15+costo_biglietti_normali; // calcolo costo totale
    printf("L'importo da versare equivale a %.02f ",importo_totale);

}