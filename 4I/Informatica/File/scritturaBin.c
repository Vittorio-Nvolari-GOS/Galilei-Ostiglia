// Scrittura di un file binario
#include <stdio.h>

int main()
{
    FILE *fp=fopen("numeri.bin","wb");
    int numeri[3]={10,20,30};

    if (fp==NULL)
    {
        printf("Errore di aperrtura file");
        return;
    }
    fwrite(numeri,sizeof(int),3,fp);
    fclose(fp);
}