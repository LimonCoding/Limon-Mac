#include <stdio.h>

void fibonacci(int n);

int main() {
  int n;
  printf("Ciao utente inserisci un valore n, io stampero' la seq. di Fibonacci\n");
  scanf("%d", &n);
  fibonacci(n);
}

void fibonacci(int n){
  int i, primo, secondo, terzo;
  primo=1;
  secondo=1;
  printf("%d\t",primo);
  printf("%d\t",secondo);
  for(i=2;i<n;i++) {
      terzo=primo+secondo;
      primo=secondo;
      secondo=terzo;
      printf("%d\t",terzo);
    }
}
