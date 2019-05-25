#include <stdio.h>

void contieneUguali(int *interi, int length);

int main() {
  int i, length;
  printf("Ciao utente, inserisci la lunghezza dell'array:\n");
  scanf("%d", &length);
  int interi[length], interiInversi[length];
  printf("Ora inserisci %d elementi:\n", length);
  for (i=0; i<length; i++) {
    scanf("%d", &interi[i]);
  }
  contieneUguali(interi, length);
}

void contieneUguali(int *interi, int length){
  int i, j, uguali;
  for (i = 0; i < length-1; i++) {
    for (j = i+1; j < length; j++) {
      if (interi[i]==interi[j]) {
        uguali=1;
      }
    }
  }
  if(uguali) printf("La sequanza contiene elementi uguali\n");
  else printf("La sequenza non contiene elementi uguali\n");
}
