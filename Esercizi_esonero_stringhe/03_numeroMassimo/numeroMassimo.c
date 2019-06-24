#include <stdio.h>
#include <string.h>
#define DIM 50

int numeroMassimo(char *stringa){
  int i = 0, num=-1, numMax=-1;
  while (stringa[i]!='\0') {
    /*PROBLEMA con numeri consecutivi*/
    if (stringa[i]>='0' && stringa[i]<='9') {
      if (num==-1) {
        num=stringa[i]-'0';
      }
      else
        num=num*10+(stringa[i]-'0');
      if (num>numMax) {
        numMax=num;
      }
    }
    else
      num=-1;
    i++;
  }
  return numMax;
}

void testNumeroMassimo() {
  printf("\n***** TEST  *************************************************\n");
  /*stringa con un solo carattere numerico*/
  char stringa1[]="abc4";
  printf("\nTest numeroMassimo(\"abc4\"): Atteso = 4, Calcolato = %d\n", numeroMassimo(stringa1));
  /*stringa con soli caratteri numerici*/
  char stringa2[]="12345";
  printf("\nTest numeroMassimo(\"12345\"): Atteso = 12345, Calcolato = %d\n", numeroMassimo(stringa2));
}

int main() {
  char stringa[DIM];
  printf("Ciao utente, inserisci una stringa:\t");
  fgets(stringa, DIM, stdin);
  stringa[strlen(stringa)-1]='\0';
  printf("\nStringa letta:\t%s\n", stringa);

  if (numeroMassimo(stringa)==-1) {
    printf("\nNon sono stati letti caratteri numerici nella stringa!\n");
  }
  else
    printf("\nIl numero massimo letto nella stringa e':\t%d\n", numeroMassimo(stringa));
  testNumeroMassimo();
  return 0;
}
