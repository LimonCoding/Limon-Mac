#include <stdio.h>

void triplicaElementi(int *interi, int length);

int main() {
  int i, length;
  printf("Ciao utente, inserisci la lunghezza dell'array:\n");
  scanf("%d", &length);
  int interi[length];
  printf("Ora inserisci %d elementi:\n", length);
  for (i=0; i<length; i++) {
    scanf("%d", &interi[i]);
  }
  triplicaElementi(interi, length);
}

void triplicaElementi(int *interi, int length){
  int i;
  printf("\n");
  for (i=0; i<length; i++) {
    interi[i]*=3;
    printf("%d\t", interi[i]);
  }
}
