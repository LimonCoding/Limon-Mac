/*!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!CORRETO!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!*/

/* SPECIFICA
* Input: Sequenza di interi, intero che indica la lunghezza dell'array
* Pre-condizione: Array di almeno 3 interi
* Output: Istanza positiva o negativa al problema
* Post-condizione: Positiva se ogni tripla di consecutivi contiene esattamente 2 interi pari, negativa altrimenti
* TIPO DI PROBLEMA: Verfica universale
*/

#include <stdio.h>

int tripleDuePari(int *interi, int lung){
  int i=0, dispari=0, verificato=0;
  /*Fin tanto che l'ultimo intero della tripla è minore del valore della lunghezza entra nel for*/
  for (i = 0; (i+2) < lung; i++) {
    /*Se il primo intero della tripla è dispari incrementa la variabile*/
    if (interi[i]%2!=0) {
      dispari++;
    }
    /*Se il secondo intero della tripla è dispari incrementa la variabile*/
    if (interi[i+1]%2!=0) {
      dispari++;
    }
    /*Se il terzo intero della tripla è dispari incrementa la variabile*/
    if (interi[i+2]%2!=0) {
      dispari++;
    }
    /*Se nella tripla utilizzata non c'è solo un intero dispari la condizione non è verificata*/
    if (dispari!=1) {
      return verificato=0;
    }
    /*Altrimenti verificato è positivo*/
    else
      verificato=1;
    /*Riporta il conteggio dei dispari a 0 per la ricerca sulla tripla successiva*/
    dispari = 0;
  }
  return verificato;
}

int main() {
  int lung, i;
  do {
    printf("Ciao utente, sono un programma che verifica se ogni tripla ha esattamente 2 pari\n");
    printf("inserisci il valore della lunghezza dell'array:\t");
    scanf("%d", &lung);
    printf("\n");
  } while(lung < 3);
  printf("\nLunghezza inserita:\t%d\n", lung);
  int interi[lung];
  printf("\nOra inserisci %d interi:\n");
  for (i = 0; i < lung; i++) {
    printf("Intero in posizione %d nell'array:\t", i);
    scanf("%d", &interi[i]);
  }
  printf("\nArray letto:\t");
  for (i = 0; i < lung; i++) {
      printf("%d\t", interi[i]);
  }
  if (tripleDuePari(interi, lung)) {
    printf("\n\nL'array inserito contiene esattamente 2 pari ogni tripla consecutiva!\n");
  }
  else
    printf("\n\nL'array inserito NON contiene esattamente 2 pari ogni tripla consecutiva.\n");
  return 0;
}
