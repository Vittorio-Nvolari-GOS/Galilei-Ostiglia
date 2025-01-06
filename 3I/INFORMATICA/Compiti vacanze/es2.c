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
int main()
{
    int num=0,num2=1,i,c;
    
    do
    {
        printf("Inserisci un numero:\t ");
        scanf("%d", &num);

    }while(num<0);

    
    
    
    for(i=1; i<=num; i++)
    {
        
        if(i>=2)
        {
            if(i%2==0)
            {
                num2=num2+num-1;
            }
            else{
                num2=num2+num+1;
            }
        }

        if(i%2==1)
        {
            for(c=1; c<=num; c++)
            {
                printf("%d ",num2);
                num2+=1;
            }
        }
        else
        {
            for(c=1; c<=num; c++)
            {
                printf("%d ",num2);
                num2-=1;
            }
        }
        
        printf("\n");
    }
    
}