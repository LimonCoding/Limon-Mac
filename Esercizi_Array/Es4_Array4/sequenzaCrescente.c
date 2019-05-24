#include <stdio.h>

void sequenzaCrescente(int *interi, int length);

int main() {
  int i, length;
  printf("Ciao utente, inserisci la lunghezza dell'array:\n");
  scanf("%d", &length);
  int interi[length];
  printf("Ora inserisci %d elementi:\n", length);
  for (i=0; i<length; i++) {
    scanf("%d", &interi[i]);
  }
  sequenzaCrescente(interi, length);
  return 0;
}

void sequenzaCrescente(int *interi, int length){
  int i, crescente=0;
  for (i = 0; i < length-1; i++) {
    /*Attenzione alle seq. crescenti e decrescenti*/
      if (interi[i]<interi[i+1]&&!crescente){
          printf("Dall'elemento %d\n", interi[i]);
          crescente=1;
      }
    }
  if (crescente==1) printf("La sequenza inserita %c crescente\n", 138);
  else printf("La sequenza inserita non %c crescente\n", 138);
}
