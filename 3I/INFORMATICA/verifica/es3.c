/*DATA UNA COPPIA DI NUMERI INTERI COSTRUIRE UN MENÙ TALE CHE
PREVEDA:
1) LA SOMMA IN VALORE ASSOLUTO;
2) LA DIFFERENZA TRA IL MAGGIORE E IL MINORE;
3) GENERATO UN VALORE K(INTERO) DETERMINARE CHI DEI VALORI SI
AVVICINA DI PIÙ;
4) DETERMINARE SE UNO È MULTIPLO DELL’ALTRO.*/

#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main ()
{
    int scelta=0,opeas=0;
    float ope=0,n1=0,n2=0,temp=0;

    printf("inserisci il primo numero\t");
    scanf("%f", &n1);
    printf("inserisci il secondo numero\t");
    scanf("%f", &n2);

    printf("____Scegli tra le seguenti opzioni____");
    printf("\n1.Somma In valore assoluto\n2.La differenza tra il maggiore minore\n3.Determina quale dei due valori si avvicina di piu ad un valore generato\n4.Determina se uno è il multiplo dell'altro\t");
    scanf("%d", &scelta);

    switch (scelta)
    {
    case 1:
        opeas=n1+n2;
        printf("la somma in valore assoluto corrisponde a %d",opeas);
        break;
    case 2:
        if(n2>n1)
        {
            n1=temp;
            n1=n2;
            n2=temp;
            ope=n1-n2;
            printf("La differenza è %f",ope);
        }
        else
        {
            ope=n1-n2;
            printf("La differenza è %f",ope);
        }
        break;
    case 3:
        srand(time(NULL));
        
        int random_max=50;
        int random_min=1;

        int k = rand()%random_max + random_min;
        
        printf("Il numero randomico corrisponde a %d",k);

        int minore=0,maggiore=0;
        float ope1=0,ope2=0;
        ope1=k-n1;
        ope2=k-n2;
        if(ope1<ope2)
            printf("Il primo numero è il piu vicino al numero randomico");
        else
            printf("Il secondo numero è il piu vicino al numero randomico");
        
        break;
    case 4:
        int ope3=0,ope4=0;
        ope3=(float)n1%n2;
        ope4=(float)n2%n1;
        if(ope3==0)
            printf("Il secondo numero è il multiplo del primo");
        else if(ope4==0)
           printf("Il primo numero è il multiplo del secondo");
        else
            printf("Nessuno dei due numeri è il multiplo dell'altro");

        break;
    
    default:
        printf("La selezione inserita non è valida");
        break;
    }
}