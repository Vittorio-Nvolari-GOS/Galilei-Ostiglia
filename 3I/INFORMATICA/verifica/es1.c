/*CONTARE IL NUMERO DI CIFRE DI CUI SI COMPONE UN NUMERO DATO E
COMUNICARE QUANTE VOLTE COMPARE LA CIFRA DI VALORE K CHIESTA
ALL’UTENTE.
N.B.: accettare valori che vanno da 0 a 9999
ES: 3 è composto da 1 cifra e supponendo k=5 allora k compare 0 volte, 56 è composto
da 2 cifre e k compare 1 volta*/

#include<stdio.h>
int main()
{
    int n1=0,k=0,u=0,d=0,c=0,m=0,cont=0, somma=0;
    printf("inserisci il numero compreo tra 0 e 9999\t");
    scanf("%d", &n1);
    if(n1>=0 && n1<=9999)
    {
        int c1=0,d1=0,m1=0,  /*if(q!=0)
                             {
                                r=q%10;
                                q=q/10;
                                cntc++;
                             }
                             else
                             {
                                printf("hai il serito il numero 0 il programma verrà terminato");
                                cntc++;
                                if(numero==0)
                                    cntn++;
                            
                             }
                             */
        m=n1%10000;
        c=(m/10)%1000;
        d=(c/10)%100;
        u=(d/10)%10;
        
        
        /*m=n1%10000;
        c=m%1000;
        d=c%100;
        u=d%10;*/
        
        
       


        printf("\n%d\n%d\n%d\n%d",u,d,c,m);

        /*if(u>=0)
            cont=+1;
        else if(d)




        somma=


        printf("Ci sono %d numeri",somma);

        */
        
        printf("\nInserisci il numero dove voi contare qunate volte compare ");
        scanf("%d", &k);




    }
    else
        printf("Numero inserito non valido");
    return 0;
}