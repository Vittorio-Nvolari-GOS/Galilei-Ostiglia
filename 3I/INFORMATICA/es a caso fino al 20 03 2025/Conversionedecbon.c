/*convertire un  valore da decimale a bimario 
 introducendo un valore da  0 a 63 */
 #include<stdio.h>
 int main()
 {
    int n0=0,n1=0,n2=0,n3=0,n4=0,n5=0,num=0,quoz=0;

    printf("Inserisci un numero compreso tra 0 e 63\t");
    scanf("%d",&num);

    quoz=num;
    if(num>=0 && num<=63)
    {
        //Convertiamo il numero
        if(quoz!=0)
        {
            n0=quoz%2;// in n0 abbiamo inserito il resto del bit meno significvativo
            quoz=quoz/2;// abbimo aggiornato il nuovo valore de quozziente
                        
        }
       
        if(quoz!=0)
        {
            n1=quoz%2;// in n0 abbiamo inserito il resto del bit meno significvativo
            quoz=quoz/2;// abbimo aggiornato il nuovo valore de quozziente
                        
        }
        
        if(quoz!=0)
        {
            n2=quoz%2;// in n0 abbiamo inserito il resto del bit meno significvativo
            quoz=quoz/2;// abbimo aggiornato il nuovo valore de quozziente
                        
        }
        
        if(quoz!=0)
        {
            n3=quoz%2;// in n0 abbiamo inserito il resto del bit meno significvativo
            quoz=quoz/2;// abbimo aggiornato il nuovo valore de quozziente
                        
        }
        
        if(quoz!=0)
        {
            n4=quoz%2;// in n0 abbiamo inserito il resto del bit meno significvativo
            quoz=quoz/2;// abbimo aggiornato il nuovo valore de quozziente
                        
        }
        
        if(quoz!=0)
        {
            n5=quoz%2;// in n0 abbiamo inserito il resto del bit meno significvativo
            quoz=quoz/2;// abbimo aggiornato il nuovo valore de quozziente
                        
        }
        
        printf("\nIl numero decimale %d in binario vale :  %d%d%d%d%d%d",num,n5,n4,n3,n2,n1,n0);




    }
    else    
        printf("\nIl valore inserito non rispetta la richiesta!");
 }