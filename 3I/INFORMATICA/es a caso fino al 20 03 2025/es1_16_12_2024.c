/*Calcolare la somma dei primi N numeri naturali

es: 5  1+2+3+4+5*/


{
    int n=0,ope=0;

    do
    {    
        printf("Inserisci un numero: \t");
        scanf("%d", &n);
    
    }while (n<0)    
    
    
    for (int i = 0; i != n+1; i++)
    {
        ope+=i;
    }

    printf("Il risultato è %d", ope);
    
}