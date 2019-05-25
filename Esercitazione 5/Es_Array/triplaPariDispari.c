/*SPECIFICA DEL PROBLEMA
  Input: lunghezza array, n interi;
  Pre-condizione: lunghezza > 2;
  Output: messaggio che indica se la condizione è stata verificata
  Post-condizione: OGNI tripla consecutiva ha almeno un intero pari e uno dispari
  TIPO DI PROBLEMA: VERIFICA UNIVERSALE*/
  
#include <stdio.h>
#include <math.h>

int triplePariDispari(int *interi, int lung);

int main() {
  int lung, i, ogniTripla;
  do {
    printf("Ciao utente, quanti interi ha la sequenza?\n");
    scanf("%d", &lung);
  } while(lung < 3);
  int interi[lung];
  printf("Vuoi inserire %d interi\n", lung);
  for (i = 0; i < lung; i++) {
    scanf("%d", &interi[i]);
  }
  for (i = 0; i < lung; i++) {
    printf("Intero in posizione [%d] dell'array -> %d\n", i, interi[i]);
  }
  ogniTripla = triplePariDispari(interi, lung);
  if (ogniTripla) {
    printf("\nOgni tripla dell'array inserito HA almeno un intero pari e uno dispari\n");
  }
  else
    printf("\nOgni tripla dell'array inserito NON HA almeno un intero pari e uno dispari\n");
  return 0;
}

int triplePariDispari(int *interi, int lung){
  int i, verificato, pari, dispari;
  i = 0;
  while ((i+2) < lung) {
    pari = 0;
    dispari = 0;
    if (abs(interi[i])%2==0 || abs(interi[i+1])%2==0 || abs(interi[i+2])%2==0) {
      pari = 1;
    }
    if (abs(interi[i])%2!=0 || abs(interi[i+1])%2!=0 || abs(interi[i+2])%2!=0){
      dispari = 1;
    }
    if (pari && dispari && verificato) {
      verificato = 1;
    }
    else
      verificato = 0;
    i++;
  }
  return verificato;
}
