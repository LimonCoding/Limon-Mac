#include <stdio.h>

void stampaCompresixy(int x, int y, int numdastampare);

int main(){
  int x, y, temp, numdastampare;
  printf("Ciao utente, inserisci due numeri interi x e y:\n");
  scanf("%d", &x);
  scanf("%d", &y);
  if (x<0&&y<0) {
    printf("non ci sono numeri positivi da stampare!\n");
    return 0;
  } // se entrambi gli interi sono negativi non fa nulla
  if(x>y) {
    printf("\nHo scambiato le variabili!\n\n");
    temp=x;
    x=y;
    y=temp;
  } // cambio variabili
  /*Stampa l'array letto*/
  printf("\nArray letto:\n\n%d\n\n%d\n", x, y);

  while (x<0) {
    x=x+1;
    //printf("Ho incrementato il primo intero di 1!\n");
  }
  if (x>=0){
      numdastampare=y-x;
      printf("\nNumeri da stampare:\t%d\n\n", numdastampare);
      stampaCompresixy(x, y, numdastampare);
  }
}

void stampaCompresixy(int x, int y, int numdastampare) {
  // printf("\nSono entrato nella funzione stampa compresi x y\n\n");
  if(x==0)
    printf("%d\n\n", x);
  for (int i=0; numdastampare>=0; i++) {
    if ((x+i)%3!=0) {
      //printf("numdastampare=\t%d\n\n", numdastampare);
      printf("%d\n\n", x+i);
    }
      numdastampare--;
  }
}
