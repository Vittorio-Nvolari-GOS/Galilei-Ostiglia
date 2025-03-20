//Dato un numero stampare tutto i suoi divisori

#include<stdio.h>
int main ()
{
    int num=0,ope=0,divisore=1;

   
    printf("Inserisci un numero:\t");
    scanf("%d", &num);
    do
    {
        
        ope=num%divisore;
        if(ope==0)
            printf("%d\n",divisore);
            
       
        divisore++;

    } while (num!=divisore);
    
    printf("%d",num);
    

    
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   /*printf("inserisci un numero per scwgliere ")
    scanf("%d", &nume)
    switch (nume)
    {
    case 1:
        printf("")
        break;
    
    default:
        break;
    }*/
    

    
    

    

}