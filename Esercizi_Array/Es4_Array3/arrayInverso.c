#include <stdio.h>

int main() {
  int i, k=0, length;
  printf("Ciao utente, inserisci la lunghezza dell'array:\n");
  scanf("%d", &length);
  int interi[length], interiInversi[length];
  printf("Ora inserisci %d elementi:\n", length);
  for (i=0; i<length; i++) {
    scanf("%d", &interi[i]);
  }
  printf("\n\n");
  for (i=length-1; i>=0 ; i--) {
    interiInversi[k]=interi[i];
    printf("%d\n", interiInversi[k]);
    k++;
  }
}
