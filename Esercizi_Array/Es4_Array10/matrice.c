#include <stdio.h>

int main() {
  int r, c, valoreRiga=1, i=0, j=0;
  printf("Ciao utente, inserisci il numero di colonne e di righe ed io creo la matrice!\n");
  printf("N. COLONNE:\t");
  scanf("%d", &r);
  printf("N. RIGHE:\t");
  scanf("%d", &c);
  /*La matrice creata con i valori 'r' 'c'*/
  int matrice[r][c];
  /*Ad esempio: r=4, c=4
    la matrice sarà:
    00  01  02  03
    10  11  12  13
    20  21  22  23
    30  31  32  33*/
  printf("\n");
  /*il seguente algoritmo assegna 'valoreRiga' ad ogni casella dell'array

    il 1° 'for' continua il ciclo fin tanto che 'i' è minore del numero di COLONNE
    'i' viene incrementato solo al termine della stampa di tutta la riga,
  */
  for (i = 0; i < r; i++) {
    printf("n.colonna: %d -> ", i+1);
    /* il 2° 'for' continua il ciclo fin tanto che 'j' è minore del numero di RIGHE
      'j' viene incrementato solo al termine della stampa dell'elemento
      che ha il valore di 'valoreRiga'

      'valoreRiga' viene incrementato ogni volta che viene stampato l'elemento
    */
    for (j = 0; j < c; j++, valoreRiga++) {
      printf("%d  ", matrice[i][j]=valoreRiga);
    }
    /* 'printf("\n");' andrà a capo al termine di una riga */
    printf("\n");
  }
}
