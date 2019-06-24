/*!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!CORRETO!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!*/

/* SPECIFICA
* Input: sequenza di interi, intero che indica la lunghezza dell'array
* Pre-condizione: Array di almeno 3 interi
* Output: Istanza positiva o negativa al problema
* Post-condizione: Positiva se una tripla di consecutivi contiene esattamente 2 interi positivi e 2 dispari, negativa altrimenti
* TIPO DI PROBLEMA: Verfica esistenziale
*/

#include <stdio.h>

int tripleDuePosDueDis(int *interi, int lung){
  int i=0, dispari=0, positivo=0, verificato=1;
  /*Fin tanto che l'ultimo intero della tripla è minore del valore della lunghezza entra nel for*/
  for (i = 0; (i+2) < lung; i++) {
    /*Se il primo *numero e il *secondo sono positivi o (||) (primo e terzo) o (||) (secondo e terzo)
      e (&&)
      il primo *numero e il *secondo sono dispari o (||) (primo e terzo) o (||) (secondo e terzo)*/
    if(((interi[i]>0 && interi[i+1]>0) || (interi[i]>0 && interi[i+2]>0) || (interi[i+1]>0 && interi[i+2]>0)) &&
		   ((interi[i]%2!=0 && interi[i+1]%2!=0) || (interi[i]%2!=0 && interi[i+2]%2!=0) || (interi[i+1]%2!=0 && interi[i+2]%2!=0))){
         verificato=1; // verificato = 1 e termina il ciclo restituendo verificato
         break;
       }
    /*Altrimenti verificato = 0 ma continua il ciclo fin tanto che *(guarda il commento sopra il for)*/
    else
      verificato=0;
  }
  return verificato;
}

int main() {
  int lung, i;
  do {
    printf("Ciao utente, sono un programma che verifica se \n");
    printf("una tripla ha esattamente 2 positivi e 2 dispari\n");
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
  if (tripleDuePosDueDis(interi, lung)) {
    printf("\n\nL'array inserito contiene 2 positivi e 2 dispari in una tripla consecutiva!\n");
  }
  else
    printf("\n\nMi dispace, condizioni non verificate.\n");
  return 0;
}
