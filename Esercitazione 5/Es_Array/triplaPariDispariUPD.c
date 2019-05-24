/*SPECIFICA DEL PROBLEMA
  Input: lunghezza array, n interi;
  Pre-condizione: lunghezza > 2;
  Output: messaggio che indica se la condizione è stata verificata
  Post-condizione: OGNI tripla consecutiva ha almeno un intero pari e uno dispari
  TIPO DI PROBLEMA: VERIFICA UNIVERSALE*/

#include <stdio.h>
#include <math.h>

int triplePariDispari(int *interi, int lung){
  int i, triplaAtt, triplaPrec = 1;
  for (i=0; (i+2) < lung; i++) {
    triplaAtt = 0;
    /*verifica che ogni tripla abbia almeno un intero pari e un intero dispari*/
    if ((abs(interi[i])%2==0 || abs(interi[i+1])%2==0 || abs(interi[i+2])%2==0)&&(abs(interi[i])%2!=0 || abs(interi[i+1])%2!=0 || abs(interi[i+2])%2!=0))
      triplaAtt = 1;
    /*assegna 1 a 'triplaPrec'
      se entrambe le triple (tripla attuale e precedente)
      rispettano la condizione richiesta */
    if (triplaAtt && triplaPrec)
      triplaPrec = 1;
    else
      triplaPrec = 0;
  }
  return triplaPrec;
}

int main() {
  int lung, i, ogniTripla;
  /*chiede all'utente di indicare di quanti interi è composta la sequenza
    fin tanto che il valore inserito 'lung' < 3*/
  do {
    printf("Ciao utente, quanti interi ha la sequenza?\n");
    scanf("%d", &lung);
  } while(lung < 3);
  /*Crea un array di lunghezza 'lung'*/
  int interi[lung];
  printf("Vuoi inserire %d interi\n", lung);
  /*Permette all'utente di inserire 'lung' numeri interi*/
  for (i = 0; i < lung; i++) {
    scanf("%d", &interi[i]);
  }
  /*Stampa l'array memorizzato*/
  for (i = 0; i < lung; i++) {
    printf("Intero in posizione [%d] dell'array -> %d\n", i, interi[i]);
  }
  /*Invoca la funzione 'triplePariDispari' che restituirà 1 o 0*/
  ogniTripla = triplePariDispari(interi, lung);
  /*infine stamperà un messaggio che indica che la condizione è soddisfatta, se ha valore 1*/
  if (ogniTripla) {
    printf("\nOgni tripla dell'array inserito HA almeno un intero pari e uno dispari\n");
  }
  /*altrimenti stamperà un messaggio che indica che la condizione NON è soddisfatta*/
  else
    printf("\nOgni tripla dell'array inserito NON HA almeno un intero pari e uno dispari\n");
  return 0;
}
