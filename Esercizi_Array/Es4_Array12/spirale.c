#include <stdio.h>
#define N 20

int main() {
  int n, i, j, k;
  do {
    printf("Ciao utente, inserisci un valore 'n'(minore di 20) ed io creo una spirale\n");
    scanf("%d", &n);
  } while((n>N)||(n<1));

  int matrice[n][n]{};

  for (i = 0; i < n-1; i++) {
    matrice[0][i]=i+1;
  }
  for(i=0; i<n; i++){
    matrice[i][n-1]=n+i;
  }
  for (i = n-2; i >=0; i--) {
    matrice[n-1][i]=matrice[n-1][i+1]+1;
  }
  for (i = n-1; i > 1; i--) {
    matrice[i-1][0]=matrice[i][0]+1;
  }
  for (i = 0; i < n-2; i++) {
  matrice[1][i+1]=matrice[1][i]+1;
  }
  /*Da sistemare questo for */
  for (i = n-2; i < n-1; i++) {
    matrice[n-2][2]=matrice[n-3][i-1]+1;
  }

/*STAMPA SPIRALE*/
  for(i=0;i<n;i++){
    for(j=0;j<n;j++){
      printf("%d ", matrice[i][j]);
    }
    printf("\n"); //va a capo
  }
}
