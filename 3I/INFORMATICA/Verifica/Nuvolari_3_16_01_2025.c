/*Dato numero a più cifre comunicare quale e quante cifre corrispondono alla propria posizione
Esempio: n1=4211 la cifra 1corrisponde alla prima posizione e la cifra 4
corrisponde alla quarta posizione.*/
#include <stdio.h>

int main(){
    int num,cifra,i=0,cnt=0;

    printf("Inserisci un numero:\t");
    scanf("%d", &num);

    while(num>0){
        cifra=num%10;
        num=num/10;
        i++;
        cnt++;
        if(cifra==i)
            printf("La cifra %d corrisponde alla %d posizione\n", cifra, i);
    }
    
}