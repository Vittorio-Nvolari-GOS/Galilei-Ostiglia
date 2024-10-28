/*Scrivi un programma in C che simuli una calcolatrice semplice. Il programma deve permettere all'utente 
    di scegliere un'operazione tra somma, sottrazione, moltiplicazione e divisione. Il programma deve quindi chiedere due numeri 
        e restituire il risultato dell'operazione scelta.  Usare il costrutto switch case.*/
#include<stdio.h>
int main()
{
    float num1=0,num2=0;
    float ope=0;
    char  calc;
    
    printf("Inserisci il primo nuemro: \t");
    scanf("%f", &num1);
    printf("Inserisci il primo nuemro: \t");
    scanf("%f", &num2);
    printf("seleziona il tipo di operazione");
    printf("\n a: somma");
    printf("\n b: sottrazione");
    printf("\n c: moltiplicazione");
    printf("\n d: divisione");
    scanf("%c", &calc);
    
    switch (calc)
    {
    case 'a':
        ope=num1+num2;
        printf("La somma tra i seguenti numeri corrisponde a : %0.2f",ope);
        break;
    case 'A':
        ope=num1+num2;
        printf("La somma tra i seguenti numeri corrisponde a : %0.2f",ope);
        break;
    case 'b':
        ope=num1-num2;
        pintf("La sotrazzione tra i seguenti numeri corrisponde a : %0.2f",ope);
        break;
    case 'B':
        ope=num1-num2;
        pintf("La sotrazzione tra i seguenti numeri corrisponde a : %0.2f",ope);
        break;
    case 'c':
        ope=num1*num2;
        pintf("La moltiplicazione tra i seguenti numeri corrisponde a : %0.2f",ope);
        break;
    case 'C':
        ope=num1*num2;
        pintf("La moltiplicazione tra i seguenti numeri corrisponde a : %0.2f",ope);
        break;
    case 'd':
        ope=num1/num2;
        pintf("La divisione tra i seguenti numeri corrisponde a : %0.2f",ope);
        break;
    case 'D':
        ope=num1/num2;
        pintf("La divisione tra i seguenti numeri corrisponde a : %0.2f",ope);
        break;

    
    default:
        printf("C'è stato un errore durante il processo di operazione");
        break;
    }
}
