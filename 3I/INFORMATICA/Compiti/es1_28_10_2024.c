/*Dato un numero controllare se è divisibile o meno per 3 applicando la regola della 
omma delle cifre che compongono il numero. ES:   dato di input: 123 eseguo la somma delle 
sue cifre -> 1+2+3=6 ->  risultato 6 -> ok 6 è multiplo di 3.NNB: qualora il numero fosse a
 più cifre vi fermate alla prima somma delle cifre e poi controllate se il risultato è divisibile per 3*/
#include <stdio.h>
int main ()
{
    int num1=0,ope1=0,ope2=0,ope3=0,ope4=0;
    printf("Inserisci il primo numero:\t");
    scanf("%d", &num1);

    ope1=num1%10;
    ope2=num1%100;
    ope3=num1%1000;
    ope4=ope1+ope2+ope3;
    printf("%d%d%d",ope1,ope2,ope3);
    
    if(ope4%3==0)
    {
        printf("Il numero è divisibile per 3 \t");
    }
    else
    {
        printf("Il numero non è divisibile per 3 \t");
    }

}