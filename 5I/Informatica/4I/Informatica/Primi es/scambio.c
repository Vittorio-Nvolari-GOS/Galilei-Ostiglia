//Data una matrice di valori scambiare gli elementi della diagonale principale con la diagonale secondaria.
#include <stdlib.h>
#define D 4


int main()
{
    int m1[D][D]=
    {
        {2,4,8,12},
        {9,6,10,3},
        {61,8,3,5},
        {0,1,7,11}
    };
    int temp=0;
    int i=0;
    int j=0;


    printf("Matrice originale: \n");
    for (i = 0; i < D; i++) 
    {
        for (j = 0; j < D; j++) 
        {
            printf("%d ", m1[i][j]);
        }
        printf("\n");
    }

    
    for (i = 0; i < D; i++) 
    {
        temp = m1[i][i];                       
        m1[i][i] = m1[i][D - 1 - i];          
        m1[i][D - 1 - i] = temp;
    }

    printf("\nMatrice dopo lo scambio:\n");

    for (i = 0; i < D; i++) 
    {
        for (j = 0; j < D; j++) 
        {
            printf("%d ", m1[i][j]);
        }
        printf("\n");
    }


}