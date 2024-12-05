/*calcolare il quozziente
 fra due numeri applicando il metodo delle sotrazioni*/

 #include<stdio.h>
 int main()
 {
    int num1=0,num2=0,temp=0,nim=0,ope=0,cnt=0;

    
    do
    {
        printf("Inserisci il primo numero:\t");
        scanf("%d", &num1);

        printf("Inserisci il secondo numero:\t");
        scanf("%d", &num2);

        
        
    } while (num1<=0 || num2<=0);
    
    if(num1<num2)
    {
        temp=num1;
        num1=num2;
        num2=temp;
    }
    nim=num1;
    while (nim>=num2)
    {
        nim-=num2;
        cnt++;
    }
    printf("Il risultato è : %d con resto: %d",cnt,nim);
    

 }