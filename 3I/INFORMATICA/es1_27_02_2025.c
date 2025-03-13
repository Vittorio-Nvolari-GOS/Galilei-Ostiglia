/*dati i coefficienti di una equaione di secondo grado
 determinare le sue radici e la concavita della parabola
*/

#include<stdio.h>
#include<math.h>

int main()
{
    float a=0,b=0,c=0,delta=0,x1=0,x2=0;

    do
    {
        printf("Insrisci un valore A :\t");
        scanf("%f", &a);
    }while (a<0);

    do
    {
        printf("Insrisci un valore B :\t");
        scanf("%f", &b);
    } while (b<0);

    do
    {
        printf("Insrisci un valore C :\t");
        scanf("%f", &c);
    } while (c<0);

    delta = (b * b) + (-    4 * a * c);

    
    if (a > 0)
        printf("La parabola ha la concavità verso l'alto\n");
    else
        printf("La parabola ha la concavità verso il basso\n");

    
    if (delta > 0) 
    {
        x1 = (-b + sqrt(delta)) / (2 * a);
        x2 = (-b - sqrt(delta)) / (2 * a);
        printf("Le radici sono: x1 = %.2f e x2 = %.2f\n", x1, x2);
    }
    else if (delta == 0) 
    {
        x1 = -b / (2 * a);
        printf("La radice doppia è: x = %.2f\n", x1);
    }
    else {
        printf("Non esistono radici reali\n");
    }



    
}