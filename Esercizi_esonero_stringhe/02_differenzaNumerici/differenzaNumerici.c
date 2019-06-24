#include <stdio.h>
#include <string.h>
#include <math.h>
#define  DIM 50

int differenzaNumerici(char *stringa){
  /*OK SE NON CI SONO CARATTERI NUMERICI*/
  int i=0, j=1, difMax=0, numerici=0;
  int differenza;
  while(stringa[i]!='\0'){
    if (stringa[i]>='0' && stringa[i]<='9') {
      numerici++;
      while (stringa[j]!='\0') {
        /*OK SE CI SONO DUE O PIU' NUMERI, RITORNA SOLO LA DIFFERENZA MASSIMA*/
        if (stringa[j]>='0' && stringa[j]<='9' && i!=j) {
          numerici++;
          if (stringa[j]>stringa[i] && stringa[j]-stringa[i]>difMax) {
            difMax=stringa[j]-stringa[i];
          }
          else if (stringa[i]>stringa[j] && stringa[i]-stringa[j]>difMax) {
            difMax=stringa[i]-stringa[j];
          }
        }
        j++;
      }
      /*PROBLEMA SE E' UN SOLO CARATTERE NUMERICO*/
      if (numerici==1) {
        return difMax=-1;
      }
    }
    i++;
  }
  return difMax;
}

void testDifferenzaNumerici(){
  printf("\n********  TEST  *****************************************************\n\n");
/* stringa con un 0 caratteri numerici */
  char stringa1[]="abc";
  printf("\nTest differenzaNumerici(\"abc\"): Atteso = 0, Calcolato = %d\n\n", differenzaNumerici(stringa1));
/* stringa con 1 carattere numerico */
  char stringa2[]="abc5fsh(";
  printf("\nTest differenzaNumerici(\"abc5fsh(\"): Atteso = -1, Calcolato = %d\n\n", differenzaNumerici(stringa2));
/* stringa con un 2 caratteri numerici, di cui il primo piu' GRANDE del secondo*/
  char stringa3[]="abc8abc4";
  printf("\nTest differenzaNumerici(\"abc8abc4\"): Atteso = 4, Calcolato = %d\n\n", differenzaNumerici(stringa3));
/* stringa con un 2 caratteri numerici, di cui il secondo piu' GRANDE del primo*/
    char stringa4[]="abc5abc9";
    printf("\nTest differenzaNumerici(\"abc5abc9\"): Atteso = 4, Calcolato = %d\n\n", differenzaNumerici(stringa4));
/* stringa con un 3 caratteri numerici, di cui il primo piu' GRANDE del secondo e del terzo*/
    char stringa5[]="abc9abc5abc2";
    printf("\nTest differenzaNumerici(\"abc9abc5abc2\"): Atteso = 7, Calcolato = %d\n\n", differenzaNumerici(stringa5));
/* stringa con un 3 caratteri numerici, di cui il secondo piu' GRANDE del primo e del terzo*/
  char stringa6[]="abc2abc9abc5";
  printf("\nTest differenzaNumerici(\"abc2abc9abc5\"): Atteso = 7, Calcolato = %d\n\n", differenzaNumerici(stringa6));
/* stringa con un 3 caratteri numerici, di cui il terzo piu' GRANDE del primo e del secondo*/
  char stringa7[]="abc2abc5abc9";
  printf("\nTest differenzaNumerici(\"abc2abc5abc9\"): Atteso = 7, Calcolato = %d\n\n", differenzaNumerici(stringa7));
}

int main() {
  char stringa[DIM];
  printf("Ciao utente inserisci una stringa:\t");
  fgets(stringa, 50, stdin);
  stringa[strlen(stringa)-1]='\0';
  if (differenzaNumerici(stringa)==-1) {
    printf("\nE' presente un solo carattere numerico!\n");
  }
  else
    printf("\nLa differenza massima tra due caratteri numerici nella stringa e':\t%d\n", differenzaNumerici(stringa));
  testDifferenzaNumerici();
  return 0;
}
