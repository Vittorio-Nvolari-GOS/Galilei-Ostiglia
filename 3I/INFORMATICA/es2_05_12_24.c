/*dati n numeri , sommali 4 a 4
termina il pogramma appena si introduce 0*/
#include<stdio.h>
int main()
{
    int num=0,n1=0,n2=0,n3=0,n4=0,somma=0,i;

    do
    {
        for (i= 0; i!=4 ; i++)
        {
            printf("Insrisci un numero:\t");
            scanf("%d", &num);
            somma+=num;

            
        }
        printf("Il risultato è: %d\n",somma);
        
        
        /*printf("Insrisci un numero:\t");
        scanf("%d", &n1);
        printf("Insrisci un numero:\t");
        scanf("%d", &n2);
        printf("Insrisci un numero:\t");
        scanf("%d", &n3);
        printf("Insrisci un numero:\t");
        scanf("%d", &n4);

        somma=n1+n2+n3+n4;
        
        printf("Il risultato è: %d\n",somma);*/
    } while (n1!=0 || n2!=0 || n3!=0 || n4!=0 || num!=0);
    
}