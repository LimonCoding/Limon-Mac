#include <stdio.h>
#define N 100

int main() {
  int i, j, n, m;
  do {
    printf("Ciao utente, inserisci il numero di righe che dovra' avere il triangolo di tartaglia\n");
    scanf("%d", &n);
  } while((n>=N) || (n<1));

  int matrice[n][n];
  matrice[0][0]=1;
  for(j=1; j<n; j++)
    matrice[0][j]=0;
  for (i = 1; i < n; i++) {
    matrice[i][0]=1;

    for (j = 1; j < n; j++) {
      matrice[i][j]=matrice[i-1][j-1]+matrice[i-1][j];
    }
  }
  //visualizzazione triangolo di tartaglia
  int x;
  for(i=0;i<n;i++){
    x=n-i;
    for(j=0;j<n&&matrice[i][j]!=0;j++){
      while(x!=0){
        printf(" ");
        x--;
      }
      printf("%d ", matrice[i][j]);
    }
  printf("\n"); //va a capo
  }
}
