#include <stdlib.h>
#define N 4
void riempimat(int _mat[N][N])
{
    int num=0,i=0;
    int top=0,bottom=N-1;
    int left=0, right= N-1;

    while (num<=N*N)
    {
        for (i=left; i<=right;i++)
            _mat[top][i]=num++;
        top++;
        for ( i = top; i < left; i++)
            _mat[i][right]=num++;
        right--;
        for(i=right; i>left;i--)
            _mat[bottom][i]=num++;
        bottom--;
        for ( i = bottom; i >top ; i--)
            _mat[i][left]=num++;
        left++;
        
    }
    
}
void stampamat(int _mat[N][N])
{
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            printf("%d ", _mat[i][j]);
        }
        printf("\n");
    }
    
}


int main()
{
    int mat[N][N];

    riempimat(mat);
    printf("La matrice spirale è: ");
    stampamat(mat);



}

    












