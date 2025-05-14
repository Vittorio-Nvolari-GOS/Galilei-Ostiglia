#include <stdio.h>
#include <stdlib.h>
#include <time.h>
void stampaVettore(int vettore[], int dim, char sep){
    for(int i=0; i<dim; i++){
        printf("%d%c", vettore[i], sep);
    }
}
void riempiVettore(int vettore[], int dim){
    for(int i=0; i<dim; i++){
        printf("inserici l'elemento in posizione di %d: ", i);
        scanf("%d", &vettore[i]);
    }
}
void riempiVettoreCasuale(int vettore[], int dim, int minimo, int massimo){
    srand(time(NULL));
    for(int i=0; i<dim; i++){
        vettore[i]=rand()%(massimo-minimo+1)+minimo;
    }
}

int contaOccorrenze(int vettore[], int dim, int valore){
    int cnt=0;

    for(int i=0; i<dim; i++){
        if(vettore[i] == valore){
            cnt++;
        }
    }
    return cnt;
}


int ricercaSequenziale(int *vettore, int dim, int valore){
    for(int i = 0; i<dim; i++){
        if(vettore[i]==valore){
            return i;
        }
    }
    return -1;

}

int ricercaBinaria(int vettore[], int dim, int estInf, int estSup, int valore){
    int media = (estSup+estInf)/2;
    if(estInf > estSup)
        return -1;
    if(vettore[media]== valore)
        return media;
    if(vettore[media] > valore)
        return ricercaBinaria( vettore,dim, estInf, media-1, valore);
    else 
        return ricercaBinaria( vettore,dim, media+1, estSup, valore);
}

void shiftDx (int vett[], int dim, int pos){
    for(int i=dim; i>pos; i--){
        vett[i]=vett[i-1];
    }
}
int trovaPosizione (int vett[], int dim, int num){
    int i=0;
    while(vett[i]<num && i<dim){
        i++;
    }
    return i;
}

void riempiVettoreOrdinatoCasuale(int vett[], int dim, int minimo, int massimo) {
    srand(time(NULL));
    int num, pos;
    vett[0] = rand()%(massimo-minimo+1)+minimo;
    for(int i=1; i<dim; i++){
        num = rand()%(massimo-minimo+1)+minimo;
        pos = trovaPosizione(vett, i, num); 
        shiftDx(vett, i, pos);
        vett[pos] = num;
    }
}

void scambiaVettori(int _vett1[],int _vett2[],int  _dim1, int _dim2)
{
    int temp=0;
    if(_dim1==_dim2)
    {
        for (int i = 0; i < _dim1; i++)
        {
            temp=_vett1[i];
            _vett1[i]=_vett2[i];
            _vett2[i]=temp;
        }
    }
    
    
} 

void bubbleSort(int _vet[], int _dim){

    int temp=0,f=0;

    while (f==1)
    {
        for (int i = 0; i < _dim; i++)
        {
            for (int j = 0; J < _dim; j++)
            {
                if(_vet[j]>_vet[j+1]);
                {
                    temp=_vet[]
                }
            }
            
        }
        
    }
    
}

void scambioMinMax(int vett[], int dim)
{
    int mint=0, max=0;

    min=vett[0];
    max=vett[0];
    for(int i=1 ; i<dim ; i++)
    {
        ifmin = vett[i];
    
    
    }
    
}


