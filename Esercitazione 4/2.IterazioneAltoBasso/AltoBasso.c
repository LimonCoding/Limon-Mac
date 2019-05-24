#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/*Gioco: indovina che numero ho pensato*/

int main() {
  int num, vittoria, tentativi=0;
  srand(time(NULL));
  printf("Ciao utente ho pensato un numero intero compreso tra 1 e 100\n");
  printf("Se vuoi terminare inserisci 0\n\n");
  /*Ciclo per generare un numero casuale tra 1 e 100*/
  do {
    vittoria = rand();
  } while(vittoria<0 || vittoria>100);

  /*Ciclo di input*/
  do {
    printf("Indovina il numero:\t");
    scanf("%d", &num);
    if (num < vittoria && num != 0) {
      printf("%d %c troppo basso!\n", num, 138);
    }
    else if (num > vittoria) {
      printf("%d %c troppo alto!\n", num, 138);
    }
    tentativi++;
  } while(num!=vittoria  && num !=0);
  if (!num)
    return 0;
  printf("\nDaje! Hai indovinato in %d tentativo/i\n", tentativi);
  return 0;
}
