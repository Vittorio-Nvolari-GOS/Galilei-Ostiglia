/*
Consegna:
1) Calcola il costo sostenuto dalla scolaresca per 
andare a teatro sapendo che il biglietto ordinario
 costa 12 euro, i 2 docenti accompagnatori hanno 
 lo sconto del 50% e che il numero degli alunni 
 deve essere letto in INPUT.
*/

#include<stdio.h> // librerie
int main()
{
    int studenti=0; // dichiaro le variabili
    float sconto=0;
    printf("Inserisci numero studenti \t");
    scanf("%d",&studenti);
    sconto=(studenti*12)/2; // calcolo il prezzo con lo sconto
    printf("la spesa per %d sarebe di %.2f euro \t",studenti,sconto);
}