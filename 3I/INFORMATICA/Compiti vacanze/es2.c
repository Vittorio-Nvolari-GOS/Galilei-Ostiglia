/*Scrivi un programma per la rappresentazione del rettangolo “a spirale”, che contiene numeri naturali, definito riempiendo le righe del 
rettangolo con numeri consecutivi e partendo da 1 nell’angolo in alto a sinistra.
Si consideri ad esempio il caso N=5. Il rettangolo è il seguente:
1  2  3  4  5  
10 9  8  7  6  
11 12 13 14 15  
20 19 18 17 16  
21 22 23 24 25  

Il programma riceve da tastiera un numero intero N e visualizza le prime N righe del rettangolo.
*/

#include <stdio.h>
int main(){
    int n, cifra=1;
    do{
        printf("Inserisci un numero: ");
        scanf("%d", &n);

    }while(n<0);

    for(int i=1; i<=n; i++){
        if(i>=2){
            if(i%2==0){
                cifra=cifra+n-1;
            }
            else{
                cifra=cifra+n+1;
            }
        }
        if(i%2==1){
            for(int j=1; j<=n; j++){
                printf("%d ", cifra);
                cifra++;
            }
        }
        else{
            for(int j=1; j<=n; j++){
                printf("%d ", cifra);
                cifra--;
            }
        }
        printf("\n");
    }
    
}