// esempio di apertura file in append

#include <stdio.h>
int main ()
{
    FILE *Fp;
    char frase[200];
    char scelta;

    // apriamo il file in append 
    Fp=fopen("righe.txt","a");
    if (Fp== NULL)
    {
        printf("Errore durante l'apertura del file\n");
        return;
    }
    do
    {
        printf("inserisci una frase: \n");
        fgets(frase, sizeof(frase),stdin);
        //scriviamo la frase sul file
        fputs(frase,Fp);
        printf("Vuoi inserire un'altra frase ? (S/N)");
        scanf("%c",&scelta);
        getchar();
    } while (scelta=='s' ||scelta=='S');

    fclose(Fp);
    return;
    

}