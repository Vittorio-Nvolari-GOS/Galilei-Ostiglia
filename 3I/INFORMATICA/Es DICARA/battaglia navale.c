#include <stdio.h>
#define DIM 10
char griglia[DIM][DIM];
void inizializza_griglia() {
    for (int i = 0; i < DIM; i++)
        for (int j = 0; j < DIM; j++)
            griglia[i][j] = '.';
}
void stampa_griglia() {
    for (int i = 0; i < DIM; i++) {
        for (int j = 0; j < DIM; j++)
            printf("%c ", griglia[i][j]);
        printf("\n");
    }
}
void posiziona_nave(int lunghezza) {
    int x, y, direzione;
    printf("Posizione iniziale (x y): ");
    scanf("%d %d", &x, &y);
    printf("Direzione (0 = orizzontale, 1 = verticale): ");
    scanf("%d", &direzione);
    if (direzione == 0 && x + lunghezza <= DIM) {
        for (int i = 0; i < lunghezza; i++)
            griglia[x + i][y] = '#';
    } else if (direzione == 1 && y + lunghezza <= DIM) {
        for (int i = 0; i < lunghezza; i++)
            griglia[x][y + i] = '#';
    } else {
        printf("Non c'è pioù spazio.\n");
    }
    stampa_griglia();
}
int main() {
    inizializza_griglia();
    stampa_griglia();
    posiziona_nave(5);
    posiziona_nave(4);
    posiziona_nave(3);
    posiziona_nave(3);
    posiziona_nave(2);
    posiziona_nave(2);
    posiziona_nave(2);
    posiziona_nave(1);
    posiziona_nave(1);
    posiziona_nave(1);
    posiziona_nave(1);
    return 0;
}