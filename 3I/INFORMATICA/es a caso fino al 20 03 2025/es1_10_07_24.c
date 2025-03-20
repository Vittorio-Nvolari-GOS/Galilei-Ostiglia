#include<stdio.h>
int main()
{
    float n1=0,n2=0,n3=0,media=0,max=0,min=0;
    
    /*
    printf("Inserisci i 3 numeri");
    scanf("%f%f%f", &n1, &n2, &n3);
    */
    
    printf("Inserisci il primo numero:\t");
    scanf("%f",&n1);
    printf("Inserisci il secondo numero:\t");
    scanf("%f",&n2);
    printf("Inserisci il terzo numero:\t");
    scanf("%f",&n3);
    media=(float) (n1+n2+n3)/3;
    printf("la media dei numeri eseguiti corrisponde a %0.2f \t",media);
    max=n1;
    min=n1;
    if(max<n2)
    {
        max=n2;
        if(max<n3)
            max=n3;
            printf("il massimo è: %0.2f \t", max);
    }
    
    if(min>n2)
    {
        min=n2;
        if(min>n3)
            min=n3;
            printf("il minimo è: %0.2f \t", min);
    }
    



    
    
    return 0;

}