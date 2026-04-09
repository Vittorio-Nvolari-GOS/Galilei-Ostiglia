/* Inserite le informazioni di studenti: NOME - ETA' - 
MEDIA VOTI SCOLASTICI DETERMINARE LO STUDENTE CON LA MEDIA PIU' ALTA*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct Studente{
    char nome[50];
    int eta;
    float media_voti;
} Studente; 

void scriveStudente(char *nome_file, int n_studenti{
    FILE *f= fopen(nome_file, "w");
    if(f == NULL){
        printf("Errore nell'apertura del file\n");
        exit(1);
    }
    for(int i = 0; i< n_studenti; i++){
        Studente s; 
        printf("Inserire nome studente: &d", i+1);
        scanf("%s", s.nome);
        printf("Inserire eta studente: &d", i+1);
        scanf("%d", &s.eta);
        printf("Inserire media voti studente: &d", i+1);
        scanf("%f", &s.media_voti);
        getchar();
        fwrite(&s, sizeof(Studente), 1, f);
    }
    fclose(f);
    if(ferror(f)){
        printf("Errore nella scrittura del file\n");
        exit(1);
    }   
}

void leggistudenti(char *nome_file, Studente *array){
    FILE* f = fopen(nome_file, "r");
    if(f == NULL){
        printf("Errore nell'apertura del file\n");
        return array;
    }
    int i = 0;
    array = (Studente*) realloc(array, sizeof(Studente));
    if(array == NULL){
        printf("Errore nella allocazione della memoria\n");
        exit(1);
    }
    while(fread(&array[i], sizeof(Studente), 1, f) != 0){
        i++;
        array = (Studente*) realloc(array, (i+1) * sizeof(Studente));
        if(array == NULL){
            printf("Errore nella allocazione della memoria\n");
            exit(1);
        }
    }
    fclose(f);
    if(ferror(f)){
        printf("Errore nella lettura del file\n");
        exit(1);
    }
    return array;
}

Studente trova_migliore(Studente* array)
{
    int dim = sizeof(array)/sizeof(Studente);
    Studente best= {"",0,0};

    for (int i = 0; i < dim; i++)
    {
        if (array[i].media_voti > best.media_voti )
        {
            best.media_voti=array[i].media_voti;
            best.eta=array[i].eta;
            strcpy(best.nome,array[1]
        }
        
    }
    

}
