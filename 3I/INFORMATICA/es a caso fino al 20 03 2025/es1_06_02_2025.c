/*Calcolare il fattoriale di un numero*/

#include<stdio.h>
void fattoriale(int *_numero,long *_fatt);
int main()
{
    int num1=0;

    long fatt=0;

    do
    {
        printf("Inserisci un numero:\t");
        scanf("%d", &num1);
    }while (num1<=0);
  

    fattoriale(&num1,&fatt);

    printf("%ld", fatt);
}   
void fattoriale(int *_numero,long *_fatt)
{
    int i;

    *_fatt=*_numero;
    for(i=1;i<*_numero;i++)
    {
        *_fatt*=i;
    }

    
}