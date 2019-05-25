#include <stdio.h>

void valoriPariaIntero(int *interi, int length, int valorePari);
int ricercaMassimo(int *interi, int length);

int main() {
  int i, j, length, piuFrequente, valorePari;
  /*Chiede all'utente la lunghezza dell'array*/
  printf("Ciao utente, inserisci la lunghezza dell'array:\n");
  scanf("%d", &length);
  /*Condizione per cui il programma termina se la lung. dell'array è minore o uguale a 0*/
  if (length<=0) return 0;
  /*Dichiara l'array con lunghezza 'length'*/
  int interi[length];
  /*Chiede all'utente gli elementi dell'array*/
  printf("\nOra inserisci %d elementi dell'array, io verifico il piu' frequente\n", length);
  /*Ciclo for per inserire l'array*/
  for (i = 0; i < length; i++)  scanf("%d", &interi[i]);
  /*Ciclo for per controllare la frequenza degli elementi*/

  /*algoritmo corretto*/
  /*Assegna l'intero in prima posizione alla variabile 'piuFrequente'*/
  piuFrequente=interi[0];
  /*Vengono eseguiti due for annidati per verificare la condizione (che i due numeri presi
    in considerazione sono uguali) anche se non consecutivi,
    ad esempio in un array di 4 elementi:

    intero[0] = 6;  intero[1] = 8; intero[2] = 7; intero[3] = 8;

    Qual'è il più frequente?

    intero[0]==intero[1]  NO;		intero[0]==intero[2]   NO;		intero[0]==intero[3]   NO;
        (6) ==  (8)       NO;       (6)  ==  (7)       NO;        (6) ==  (8)        NO;

    intero[1]==intero[2]  NO;		intero[1]==intero[3]   SI;
        (8) ==  (7)       NO;       (8)  ==  (8)       SI;

    intero[2]==intero[3]  NO;
        (7) ==  (8)       NO;
    */
  for (i = 0; i < length-1; i++) {
    for(j=i+1; j<length; j++){
      /*Se i due elementi sono uguali, assegna l'intero di indice 'i' a 'piuFrequente'*/
      if (interi[i]==interi[j]) {
        piuFrequente=interi[i];
      }
    }
  }

  printf("Il valore piu' frequente nell'array e': %d\n", piuFrequente);

  printf("\nOra inserisci un valore, io verifico quante volte e' presente nell'array\n");
  scanf("%d", &valorePari);
  valoriPariaIntero(interi, length, valorePari);
  printf("\nIl valore massimo dell'array %c: %d\n", 138, ricercaMassimo(interi, length));
}

/*funzione corretta*/
void valoriPariaIntero(int *interi, int length, int valorePari) {
  int uguali;
  for (int i = 0; i < length; i++) {
    if (interi[i]==valorePari) {
      uguali+=1;
    }
  }
  printf("Sono presenti %d valore/i pari a %d, ovvero quello inserito\n", uguali, valorePari);
}
/*funzione corretta*/
int ricercaMassimo(int *interi, int length){
  int massimo=0;
  for (int i = 0; i < length; i++) {
    if (interi[i]>massimo) {
      massimo=interi[i];
    }
  }
  return massimo;
}
