/*
PROBLEMA
Sviluppa un programma che eroga il resto per un distributore di bevande automatico. Il cliente sceglie un prodotto (numero intero da 1 a 5) e gli viene visualizzato il costo: quindi
 inizia a inserire monete nell’apposita fessura, che possono essere da 1, 5, 10, 20 e 50 centesimi.
Non appena l’importo richiesto viene raggiunto o superato, il programma interrompe l’acquisizione della sequenza e restituisce una serie di numeri interi corrispondenti
 al resto in monete da 1 e 5 centesimi.
Passi operativi
Definisci le costanti per inserire il prezzo dei prodotti.
Definisci le variabili necessarie per compiere tutte le operazioni, contemplando anche il caso di inserimento di moneta errata e, quindi, rifiutata.
Scrivi il programma e predisponi un elenco di use case con i quali testarne il funzionamento.
Suggerisci come potresti estendere il programma per utilizzare anche altre monete come resto.
*/



#include<stdio.h>
int main ()
{
    int prodotto=0,selezione=0, risposta=0, i,mone1=0,mone5=0;
    float resto=0, costo=0,creditoi=0,ope=0,ope2=0;


    do
    {
        printf("_____Scegli tra i seguenti prodotti_____\n\n");
        printf("1.CocaCola\n2.Patatine\n3.Cioccolato\n4.Baretta\n5.Acqua\n");
        scanf("%d", &prodotto);
    } while (prodotto<=0 || prodotto>5);

    switch (prodotto)
    {
    case 1:
        printf("Il prezzo del prodotto selezionato è 1.00$ ");

        costo=1.00;
        
        break;
    
    case 2:
        printf("Il prezzo del prodotto selezionato è 0.70$ ");

        costo=0.70;
        
        break;
    
    case 3:
        printf("Il prezzo del prodotto selezionato è 2.50$ ");

        costo=2.50;
        
        break;
    
    case 4:
        printf("Il prezzo del prodotto selezionato è 2.00$ ");

        costo=2.00;
        
        break;
    
    case 5:
        printf("Il prezzo del prodotto selezionato è 1.00$ ");
        
        costo=1.00;

        break;
    
    
    default:
        printf("C'è stato un probblema di elaborazione");
        break;
    }

    do
    {
        printf("\n_____Scegli tra le seguenti monete_____\n\n");
        printf("1_0.01$\n2_0.05$\n3_0.10$\n4_0.20$\n5_0.50$\n0_finie selezione\n");
        scanf("%d", &selezione);

        switch (selezione)
        {
            case 1:
                printf("quante ne vuoi inserire ?\t");
                scanf("%d", &risposta);

                for ( i = 0; i < risposta; i++)
                {
                    creditoi+=0.01;
                }
                    
                        
                
                break;
            
            case 2:
                printf("quante ne vuoi inserire ?\t");
                scanf("%d", &risposta);

                for ( i = 0; i < risposta; i++)
                {
                    creditoi+=0.05;
                }
                    
                break;
            
            case 3:
                printf("quante ne vuoi inserire ?\t");
                scanf("%d", &risposta);

                for ( i = 0; i < risposta; i++)
                {
                    creditoi+=0.10;
                }
                    
                break;
                
            case 4:
                printf("quante ne vuoi inserire ?\t");
                scanf("%d", &risposta);

                for ( i = 0; i < risposta; i++)
                {
                    creditoi+=0.20;
                }
                    
                break;
                
            case 5:
                printf("quante ne vuoi inserire ?\t");
                scanf("%d", &risposta);

                for ( i = 0; i < risposta; i++)
                {
                    creditoi+=0.50;
                }
                    
                break;
            case 0:
                break;
                
                
            default:
                printf("C'è stato un probblema di elaborazione");
                break;
        }



    } while (selezione!=0);

    ope=costo-creditoi;
    
    if(ope<0)
    {
        resto=ope*-1;
        printf("Il resto è di %0.2f\n",resto);
                    
        do
        {
            if(resto>=0.05)
            {
                resto-=0.05;
                mone5+=1;
            }
            else
            {
                resto-=0.01;
                mone1+=1;
            }
        } while (resto>0);
                
        printf("Sono %d monete da 0.05$ e %d monete da 0.01$ \n",mone5,mone1);
        printf("Grazie mille arrivederci");

    }

    if (ope==0)
    {
        printf("Grazie mille arrivederci");
    }
    
    do
    {
    
    
        if(ope>0)
        {
            printf("Mancano ancora %0.2f$ , inserire il credito mancante",ope);

            do
            {
                printf("\n_____Scegli tra le seguenti monete_____\n\n");
                printf("1_0.01$\n2_0.05$\n3_0.10$\n4_0.20$\n5_0.50$\n0_finie selezione\n");
                scanf("%d", &selezione);

                switch (selezione)
                {
                case 1:
                        printf("quante ne vuoi inserire ?\t");
                        scanf("%d", &risposta);

                        for ( i = 0; i < risposta; i++)
                        {
                            creditoi+=0.01;
                        }
                        
                            
                    
                        break;
                
                    case 2:
                        printf("quante ne vuoi inserire ?\t");
                        scanf("%d", &risposta);

                        for ( i = 0; i < risposta; i++)
                        {
                            creditoi+=0.05;
                        }
                        
                        break;
                
                    case 3:
                        printf("quante ne vuoi inserire ?\t");
                        scanf("%d", &risposta);

                        for ( i = 0; i < risposta; i++)
                        {
                            creditoi+=0.10;
                        }
                        
                        break;
                    
                    case 4:
                        printf("quante ne vuoi inserire ?\t");
                        scanf("%d", &risposta);

                        for ( i = 0; i < risposta; i++)
                        {
                            creditoi+=0.20;
                        }
                        
                        break;
                    
                    case 5:
                        printf("quante ne vuoi inserire ?\t");
                        scanf("%d", &risposta);

                        for ( i = 0; i < risposta; i++)
                        {
                            creditoi+=0.50;
                        }
                        
                        break;
                    case 0:
                        break;
                    
                    
                    default:
                        printf("C'è stato un probblema di elaborazione");
                        break;
                }



            } while (selezione!=0);

            ope=costo-creditoi;
        
            if(ope<0)
            {
                resto=ope*-1;
                printf("Il resto è di %0.2f\n",resto);
                    
                do
                {
                    if(resto>=0.05)
                    {
                        resto-=0.05;
                        mone5+=1;
                    }
                    else
                    {
                        resto-=0.01;
                        mone1+=1;
                    }
                } while (resto>0);
                        
                printf("Sono %d monete da 0.05$ e %d monete da 0.01$ \n",mone5,mone1);
                printf("Grazie mille arrivederci");


            }

            if (ope==0)
            {
                printf("Grazie mille arrivederci");
            }

        }
    }while (ope>0);
   
    
    



    
    
    
    
}