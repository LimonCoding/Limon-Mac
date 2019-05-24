#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

int isPrimo(int num){
  int nessunDivisore, i;
  nessunDivisore = 1;
  i = 2;
  while (i<num && nessunDivisore)  {
    if (num%i==0){
      nessunDivisore = 0;
    }
    else
      i++;
    }
    return nessunDivisore;
}

void generatore(int numPrimi){
  int num, numGenerati, contatorePrimi;
  contatorePrimi=0;
  while (contatorePrimi!=numPrimi) {
    /*  questo ciclo genera numeri interi ma esce dal ciclo solo se
        il valore generato è compreso tra 1 e 100 */
    do {
      num = rand();
    } while(num<1 || num>101);
    numGenerati++; // incrementa la variabile 'numGenerati'
    /*se la funzione 'isPrimo' restituisce '0' stamperà il numero generatp (primo)
      altrimenti stamperà il numero generato (non primo)*/
    if (isPrimo(num)) {
      contatorePrimi++;
      printf("Numero primo\t->\t%d\n", num);
    }
    else
      printf("Numero non primo -> %d\n", num);
  }
  printf("\nSono stati generati %d numeri\n", numGenerati);
}

int main() {
  int n, nonPrimo;
  printf("Quanti numeri primi vuoi generare?\n");
  scanf("%d",&n);
  printf("\n");
/* Inizializzo il generatore di numeri pseudo-casuali */
  srand(time(NULL));
/* invoca la funzione per generare i numeri random */
  generatore(n);
  return 0;
}
