/*Dato il raggio calcolare la circonferenza e l'area del cerchio*/


#include<stdio.h>

void conf(float *_raggio ,float *_diametro);

void area(float *_raggio,float *_area);
const float pigreco=3.14;


int main()
{
   float raggio=0,circonferenza=0,area=0;

   prinft("Inserisci il valore del raggio:\t");
   scanf("%d", &raggio);

   conf(&raggio,&circonferenza);

   area(&raggio,&area);


}   

void conf(float *_raggio ,float *_conf)
{
    *_conf=*_raggio*2*pigreco;
}