// Letturea di un file binario
#include <stdio.h>

int main()
{
    FILE *fp=fopen("numeri.bin","rb");
    int numeri[3];

    if (fp==NULL)
    {
        printf("Errore di aperrtura file");
        return;
    }
    fread(numeri,sizeof(int),3,fp);
    
    for (int i = 0; i < 3; i++)
    {
        printf("%d\n",numeri[i]);
    }
    
    
    
    fclose(fp);
}