#include<stdio.h>
int main()
{
    int studenti;
    float sconto;
    studenti=0;
    sconto=0;
    printf("Inserisci numero studenti \t");
    scanf("%d",&studenti);
    sconto=(studenti*12)/2;
    printf("la spesa per %d sarebe di %.2f euro \t",studenti,sconto);
}