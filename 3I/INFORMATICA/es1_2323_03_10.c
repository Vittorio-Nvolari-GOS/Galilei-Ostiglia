#include<stdio.h>
int main()
{
    float n1,n2,n3,n4,perimmetro,area,base,altezza;
    printf("Inserisci il primo valore: \t");
    scanf("%f",&n1);
    printf("Inserisci il secondo valore: \t");
    scanf("%f",&n2);
    printf("Inserisci il terzo valore: \t");
    scanf("%f",&n3);
    printf("Inserisci il quarto valore: \t");
    scanf("%f",&n4);
    if(n1==n2 && n2==n3 && n3==n4)
    {
        perimmetro=n1*4;
        area=n1*n1;
        printf("L'area del quadrato è %0.2f e il suo perimmetro corrisponde a %0.2f",area,perimmetro);
    }
    else
    {
        printf("Inserisci qual'è il valore della base \t");
        scanf("%F",&base);
        printf("Inserisci qual'è il valore della altezza \t");
        scanf("%F",&altezza);
        perimmetro=n1+n2+n3+n4;
        area=base*altezza;
        printf("L'area di questo rettangolo è %0.2f e il suo perimmetro è %0.2f",area,perimmetro);
    }
}