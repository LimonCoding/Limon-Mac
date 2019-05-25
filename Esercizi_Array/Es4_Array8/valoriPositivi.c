#include <stdio.h>

void valoriPositivi(int *interiPositivi, int lungSenzaNegativi);

int main() {
  int i, length, lungSenzaNegativi;
  /*Chiede all'utente la lunghezza dell'array*/
  printf("Ciao utente, inserisci la lunghezza dell'array:\n");
  scanf("%d", &length);
  /*assegna il valore della lunghezza dell'array alla variabile 'lungSenzaNegativi'*/
  lungSenzaNegativi=length;
  /*crea i due array di lunghezza 'length' *perchè se non sono presenti elementi
    negativi la lunghezza del nuovo array deve essere uguale alla lunghezza
    dell'array inserito*/
  int interi[length], interiPositivi[length];
  /*Chiede all'utente gli elementi dell'array*/
  printf("\nOra inserisci %d elementi dell'array, io cancellero' i valori negativi\n", length);
  /*Ciclo for per inserire l'array*/
  for (i = 0; i < length; i++)  scanf("%d", &interi[i]);
  printf("\nArray con elementi positivi:\n");
  /*Ciclo for per stampare il nuovo array*/
  for (i = 0; i < length; i++) {
  /*se il valore è positivo copia l'elemento sul nuovo array*/
    if (interi[i]>0) {
      interiPositivi[i]=interi[i];
      printf("%d\n", interiPositivi[i]);
    }
  /*altrimente decrementa la variabile della lunghezza dell'array di positivi*/
    else {
      lungSenzaNegativi--;
    }
  }
  /*chiama la funzione valoriPositivi passando il nuovo array e la sua lunghezza*/
  valoriPositivi(interiPositivi, lungSenzaNegativi);
}

/*la funzione stampa lunghezza calcolata ovvero il numeri di valori positivi*/
void valoriPositivi(int *interiPositivi, int lungSenzaNegativi) {
  printf("Il tuo array ha %d elemento/i positivi\n", lungSenzaNegativi);
}
