#include "stdio.h"

int fun(int m){
  int res;
  if (m<=-1) {
    res = 0;
  }
  else  {
        res = 1 + fun(m-2) + fun(m-3);
  }
  printf("Sto terminando l'esecuzione con input %d e output %d\n", m, res);
  return res;
}

int main() {
  int m = 6;
  printf("Valore restituito dalla funzione 'fun' con m = 6:\t%d\n", fun(m));
  return 0;
}
