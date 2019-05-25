#include <stdio.h>

void stampaMedia(float somma, int n);

int main() {
  float voti, somma, n;
  printf("\tCiao utente inserisci tutti i tuoi voti\n");
  printf("\tIo faro' la media!\n");
  printf("\tPer terminare l'inserimento immetti un valore minore o uguale a 0\n");
  do {
    printf("\t");
    scanf("%f", &voti);
    if (voti>0) {
      somma+=voti;
      n++;
    }
    else {
      stampaMedia(somma, n);
    }
  } while(voti>0);
}

void stampaMedia(float somma, int n){
  printf("\tSono entrato nella funzione stampa Media\n");
  float media;
  media=somma/n; // Attenzione! la media di tipo float viene fatta sempre su valori anch'essi float
  printf("\tLa media dei voti %c:\t%.3f\n", 138,  media);
  /* non è possibile fare la media float con valori di tipo int */
}
