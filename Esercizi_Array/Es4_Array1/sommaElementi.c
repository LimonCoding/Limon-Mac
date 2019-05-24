#include <stdio.h>

int sommaElementi(int *interi, int length);

int main() {
  int i, length, somma;
  printf("Ciao utente, inserisci la lunghezza dell'array:\n");
  scanf("%d", &length);
  int interi[length];
  printf("Ora inserisci %d elementi:\n", length);
  for (i=0; i<length; i++) {
    scanf("%d", &interi[i]);
  }
  somma=sommaElementi(interi, length);
  printf("La somma degli elementi %c: %d", 138, somma);
  return 0;
}

int sommaElementi(int *interi, int length){
  int i, sum=0;
  for (i=0; i<length; i++) {
    sum=sum+interi[i];
  }
  return sum;
}
