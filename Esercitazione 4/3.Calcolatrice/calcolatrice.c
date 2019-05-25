#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#define SOGLIA 1

int maggiore(int valore1, int valore2);
int massimo(int valore1, int valore2);
int quoziente(int valore1, int valore2);
int resto(int valore1, int valore2);
int potenza(int valore1, int valore2);
int isPari(int valore1);
int isQuadrato(int valore1);
int radice(int valore1);
int isSommaQuadrati(int valore1);

int main()
{
    int scelta = -1, x, y;
    printf("Benvenuto nella Calcolatrice,");
    printf(" scegli la funzione da svolgere:\n");
    while(scelta!=0){
        printf("\n0. Termina programma");
        printf("\n1. Verifica che il primo intero e' maggiore del secondo");
        printf("\n2. Valore massimo tra due interi");
        printf("\n3. Calcolo il quozione fra due interi");
        printf("\n4. Calcola il resto fra due interi");
        printf("\n5. Calcola la potenza inserendo base e esponente");
        printf("\n6. Verifica se l'intero inserito e' pari");
        printf("\n7. Verifica se l'intero inserito e' un quadrato");
        printf("\n8. Calcola la radice intera di un intero");
        printf("\n9. Verifica se l'intero inserito e' la somma di due quadrati\n");
        scanf("%d", &scelta);
    switch (scelta){
        case 0:
          return 0;
          break;
          /*x>y*/
        case 1:
          printf("\nInserisci due numeri interi:\n");
          scanf("%d", &x);
          scanf("%d", &y);
          if(maggiore(x, y)){
              printf("%d e' maggiore di %d\n", x, y);
          }
          else
            printf("%d non e' maggiore di %d\n", x, y);
          break;
          /*massimo*/
        case 2:
          printf("\nInserisci due numeri interi:\n");
          scanf("%d", &x);
          scanf("%d", &y);
          printf("%d e' il valore massimo tra i due\n", massimo(x, y));
          break;
          /*quoziente*/
        case 3:
          printf("\nInserisci due numeri interi:\n");
          scanf("%d", &x);
          scanf("%d", &y);
          printf("%d e' il quoziente della divisione %d/%d\n", quoziente(x, y), x, y);
          break;
          /*resto*/
        case 4:
          printf("\nInserisci due numeri interi:\n");
          scanf("%d", &x);
          scanf("%d", &y);
          printf("%d e' il resto della divisione %d/%d\n", resto(x, y), x, y);
          break;
          /*potenza*/
        case 5:
          printf("\nInserisci due numeri interi:\n");
          scanf("%d", &x);
          scanf("%d", &y);
          if (y>=0) {
            printf("%d e' il valore di %d elevato a %d\n", potenza(x, y), x, y);
          }
          else
            printf("1/%d e' il valore di %d elevato a %d\n", potenza(x, y), x, y);
          break;
          /*isPari*/
        case 6:
          printf("\nInserisci un numero intero:\n");
          scanf("%d", &x);
          if (isPari(x)) {
            printf("%d e' un intero pari\n", x);
          }
          else
            printf("%d non e' un intero pari\n", x);
          break;
          /*isQuadrato*/
        case 7:
          printf("\nInserisci un numero intero:\n");
          scanf("%d", &x);
          if (isQuadrato(x)) {
            int rad=sqrt(x);
            printf("%d e' il quadrato di %d\n", x, rad);
          }
          else
            printf("%d non e' un quadrato\n", x);
          break;
          /*radice*/
        case 8:
          printf("\nInserisci un numero intero:\n");
          scanf("%d", &x);
          if (x>=0) {
            printf("%d e' la radice intera di %d\n", radice(x), x);
          }
          else
            printf("Il numero inserito non ha radici\n");
          break;
         /*isSommaQuadrati*/
        case 9:
          printf("\nInserisci un numero intero:\n");
          scanf("%d", &x);
          if (isSommaQuadrati(x)) {
            printf("%d e' la somma di due quadrati\n", x);
          }
          else
            printf("Il numero inserito non e' la somma di due quadrati\n");
          break;
    }
  }
}

int maggiore(int valore1, int valore2){
    int piuGrande = 0;
    if(valore1>valore2){
        piuGrande = 1;
    }
    return piuGrande;
}

int massimo(int valore1, int valore2){
    int max;
    if (maggiore(valore1, valore2))
      max = valore1;
    else
      max = valore2;
}

int quoziente(int valore1, int valore2){
  int quoz=0;
  int sottrazione=valore1-valore2;
  while (sottrazione>=0 && valore2>0) {
    sottrazione=sottrazione-valore2;
    quoz++;
  }
  return quoz;
}

int resto(int valore1, int valore2){
  int resto;
  int sottrazione=valore1-valore2;
  while (sottrazione>=valore2+0 && valore2>0) {
    sottrazione=sottrazione-valore2;
  }
  return resto=sottrazione;
}

int potenza(int valore1, int valore2){
  int pot=valore1;
  int esp=valore2;
  while (esp>1) {
    pot=pot*valore1;
    esp--;
  }
  if (esp==0) {
    pot = 1;
  }
  return pot;
}

int isPari(int valore1){

  return valore1%2==0;
}

int isQuadrato(int valore1){
  int quad;
  if (valore1>0 && sqrt(valore1)*sqrt(valore1)==valore1) {
    quad=1;
  }
  return quad;
}

int radice(int valore1){
  int square, rn_meno1, diff;
  rn_meno1=valore1;
  diff=2*SOGLIA;
  while(diff>SOGLIA){
    square=(rn_meno1+valore1/rn_meno1)/2;
    diff=fabs(square-rn_meno1);
    rn_meno1=square;
	}
  if (valore1==1) {
    square=1;
  }
  return square;
}

int isSommaQuadrati(int valore1){
  int verificato, i, j;
  for (i = 1; i <= valore1; i++) {
    for (j = 1; j <= valore1; j++) {
      if (i*i+j*j==valore1) {
        verificato = 1;
      }
    }
  }
  return verificato;
}
