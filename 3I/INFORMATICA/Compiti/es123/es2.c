/*
Consegna: 
2) Calcola il resto ricevuto dal benzinaio: dopo aver inserito
il numero di litri di carburante introdotto nel motorino e il 
costo al litro della benzina, il programma deve visualizzare 
l’importo da pagare. L’utente digita l’importo di una banconota
di valore superiore a tale importo e il programma visualizza 
il resto della banconota che questi deve ricevere.
*/

#include<stdio.h> // librerie
int main()
{
    float litri=0,costolitro=0,prezzo=0,importo=0,resto=0; // dichiaro le variabili
    printf("Inserisci numero di litri \t");  // chiedo i dati necessari
    scanf("%f",&litri);
    printf("Inserisci costo al litro del carburante \t");
    scanf("%f",&costolitro);
    prezzo=litri*costolitro; // calcolo il prezzo 
    printf("Il costo di questo rifornimento sarebbe di: %.2f \n",prezzo);
    printf("Inserisci l'importo da pagare \t");
    scanf("%f",&importo);
    resto=importo-prezzo;  // calcolo il resto 
    if(resto==0)
    {
        printf("Non c'e resto da errogare");
    }
    else
    {
        printf("Il resto da pagare corrisponde  a %.2f",resto);
    }
    
}