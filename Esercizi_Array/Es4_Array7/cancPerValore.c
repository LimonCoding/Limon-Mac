#include <stdio.h>

void quantiPositivi(int *interiCanc, int length, int valore);

int main() {
  int i, length, valore, numUguali, nonPresente, eleUguali;
  printf("Ciao utente, inserisci la lunghezza dell'array:\n");
  scanf("%d", &length);
  int interi[length], interiCanc[length];
  printf("Ora inserisci %d elementi:\n", length);
  for (i=0; i<length; i++) {
    scanf("%d", &interi[i]);
  }
  printf("inserisci ora il valore dell'elemento che vuoi eliminare:\n");
  scanf("%d", &valore);
  printf("\nArray con eventuali elementi cancellati:\n");
  for (i = 0; i < length; i++) {
    if (interi[i]!=valore) {
      interiCanc[i]=interi[i];
      printf("%d\n", interiCanc[i]);
    }
    else nonPresente=0;
  }
  if (nonPresente) printf("\nIl valore inserito non e' presente nell'array\n");
  printf("Ora inserisci un altro valore, io controllo quanti ce ne sono\n");
  scanf("%d", &eleUguali);
  quantiPositivi(interiCanc, length, eleUguali);
  return 0;
}

void quantiPositivi(int *interiCanc, int length, int eleUguali){
  int conteggioUguali=0;
  for (int i = 0; i < length; i++) {
    if (interiCanc[i]==eleUguali) {
      conteggioUguali+=1;
    }
  }
  printf("\nCi sono %d numeri uguali nell'array\n", conteggioUguali);
}
