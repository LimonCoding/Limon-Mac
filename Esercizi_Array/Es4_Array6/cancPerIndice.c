#include <stdio.h>



int main() {
  int i, length, indice;
  printf("Ciao utente, inserisci la lunghezza dell'array:\n");
  scanf("%d", &length);
  int interi[length], interiCanc[length];
  printf("Ora inserisci %d elementi:\n", length);
  for (i=0; i<length; i++) {
    scanf("%d", &interi[i]);
  }
  printf("inserisci ora l'indice dell'elemento che vuoi eliminare\n");
  scanf("%d", &indice);
  printf("\n");
  if(indice>=0&&indice<=length-1) {
    for (i = 0; i < length; i++) {
      if (i!=indice) {
        interiCanc[i]=interi[i];
        printf("%d\n", interiCanc[i]);
      }
    }
  }
  else printf("L'indice non ha nessun elemento");
  return 0;
}
