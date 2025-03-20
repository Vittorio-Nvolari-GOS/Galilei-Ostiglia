/*Dato il raggio calcolare la circonferenza e l'area del cerchio*/


#include<stdio.h>

const float pigreco=3.14;

void conf(float *_raggio ,float *_conf);

void Area(float *_raggio,float *_area);


int main()
{
   float raggio=0,circonferenza=0,area=0;

   printf("Inserisci il valore del raggio:\t");
   scanf("%f", &raggio);

   conf(&raggio,&circonferenza);

   Area(&raggio,&area);

   printf("La circonferenza del cerchio è %.2f\n",circonferenza);
   printf("L'area del cerchio è %.2f\n",area);


}  

void conf(float *_raggio ,float *_conf)
{
    *_conf=*_raggio*2*pigreco;
}

void Area(float *_raggio,float *_area)
{
    *_area=(*_raggio**_raggio)*pigreco;
}