#include<stdio.h>

#define max 10

int main()
{
    int v[max], j=1;

    for (int i = 0; i < max; i++)
    {
        v[i]=2*j;
        j++;
    }

    for (int j = max-1; j >=0; j--)
    {
        printf("%d\t", v[j]);
    }
    
    

}