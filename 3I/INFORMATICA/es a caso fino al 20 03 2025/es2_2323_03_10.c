#include<stdio.h>
int main()
{
    float n1,n2,n3,area,perimetro;
    printf("Inserisci il primo valore: \t");
    scanf("%f",&n1);
    printf("Inserisci il secondo valore: \t");
    scanf("%f",&n2);
    printf("Inserisci il terzo valore: \t");
    scanf("%f",&n3);
    if(n1==n2 && n2==n3)
    {
        area= (float) (n1*n1*1,73)/4;
        perimetro= (float) n1*3;
        printf("L'area del triangolo equilatero è %0.2f e il suo perimetro è %0.2f",area,perimetro);

    }
    else
    {
        printf("Non è un triangolo equilatero");
    }
}