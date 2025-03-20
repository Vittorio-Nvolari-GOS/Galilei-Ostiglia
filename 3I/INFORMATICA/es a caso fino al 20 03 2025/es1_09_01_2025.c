/*scrivi un programma che ricerca i primi
 tre numeri perfetti e li visualizza sullo schermo 
 es: n=6 div=1 2 3 */

 #include <stdio.h>
 int main ()
    {
        int som=0,i,j;

        for ( i = 1; i < 500; i++)
        {
            
            for ( j = 1; j <= i/2; j++)
            {
                
                if(i%j==0)
                {
                    som+=j;
                }
            }
            if (som==i)
            {
                printf("il numero %d è perfetto\n",i);
            }
            som=0;
        }
        
    }