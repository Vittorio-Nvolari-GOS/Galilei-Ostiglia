/*DATI  DUE  NUMERI  A  PIU' CIFRE(STESSO NUMERO DI CIFRE)
 SCAMBIARE TRA DI LORO LE CIFRE DI POSIZIONE PARI CON LE 
 CIFRE DI POSIZIONE DISPARI*/
#include<stdio.h>
int main ()
{
    int num1=0,num2=0,quoz1=0,resto1=0,cnt1=0,resto2=0,quoz2=0,cnt2=0;

    printf("Inserisci un numero:\t");
    scanf("%d", &num1);

    quoz1=num1;
    resto1=num1;

    while(quoz1==0)
    {
        resto1%=10;
        quoz1/=10;
        cnt1++;
    }
    
    printf("Inserisci un altro numero:\t");
    scanf("%d", &num2);

    resto2=num2;
    quoz2=num2;

    while(quoz2==0)
    {
        resto2%=10;
        quoz2/=10;
        cnt2++;
    }
    
    if(cnt1!=cnt2)
    {
        do
        {
            printf("Inserisci un altro numero:\t");
            scanf("%d", &num2);

            resto2=num2;
            quoz2=num2;

            while(quoz2==0)
            {
                resto2%=10;
                quoz2/=10;
                cnt2++;
            }  
        } while (cnt2==cnt1);

        
    }

    printf("%d\n", cnt1);
    printf("%d\n", cnt2);

    
}