#include <stdio.h>
#include <string.h>
#define DIM 50

int doppiaStringa(char *stringa){
  int i=0, j=1;
  int dimStr1, dimStr2;
  char sottoStringa1[DIM], sottoStringa2[DIM];

  /*printf("\nSono entrato nella funzione doppiaStringa\n");*/

  /*              CREA sottoStringa1
    fin tanto che: il carattere con indice 'j' è diverso dal carattere di fine stringa
    ed è diverso dal primo carattere della stringa inserita dall'utente
    assegna il carattere con indice 'i' alla sottoStringa1
                    ATTENZIONE!
    l'ultimo carattere non viene assegnato a 'sottoStringa1' essendo la prima condizione NON verificata*/
  while (stringa[j] != stringa[0] && stringa[j] != '\0') {
    sottoStringa1[i] = stringa[i];
    j++, i++;
  }
  /*RISOLVE il "problema" del precedente while, ovvero assegna a sottoStringa1
    l'ultimo carattere prima che si ripeta di nuovo il primo carattere*/
  sottoStringa1[i] = stringa[i];
  i++;
  sottoStringa1[i]='\0'; //aggiunge il caratteri di fine stringa altrimenti possono esserci errori

  /*printf("\nLunghezza sottoStringa1: %d\n", strlen(sottoStringa1));*/

  dimStr1=strlen(sottoStringa1); //assegna a dimStr1 la dimensione dalla stringa sottoStringa1
  dimStr2=0; //assegna a dimStr2 la dimensione di '0'

  /*printf("\nLunghezza sottoStringa2: %d\n", dimStr2);*/
  /*printf("\nHo creato la sotto stringa 1:\t%s\n\n", sottoStringa1);*/

  /*              CREA sottoStringa2
    fin tanto che: la dimensione della sottoStringa2 è diversa dalla  dimensione della sottoStringa1
    e il carattere della 'stringa[i]' è diverso dal carattere di fine stringa
    assegna il carattere con indice 'i' alla sottoStringa2*/
  for (j = 0; stringa[i] != '\0' && dimStr1!=dimStr2; j++, i++, dimStr2++) {
    sottoStringa2[j] = stringa[i];

    /*printf("\nLunghezza sottoStringa2: %d\n", dimStr2);*/

  }
  sottoStringa2[j]='\0'; //aggiunge il carattere di fine stringa altrimenti possono esserci errori

  /*printf("\nHo creato la sotto stringa 2:\t%s\n\n", sottoStringa2);*/

/*Compara le due sotto stringhe e ritorna il valore 'negato', ovvero opposto*/
  return !strcmp(sottoStringa1,sottoStringa2);;
}

void testDoppiaStringa() {
  /*stringa vuota*/
  char stringa1[]="";
  printf("\nTEST doppiaStringa(\"\"): Atteso = 1, Calcolato = %d\n", doppiaStringa(stringa1));
  /*stringa con un solo carattere*/
  char stringa2[]="a";
  printf("\nTEST doppiaStringa(\"a\"): Atteso = 0, Calcolato = %d\n", doppiaStringa(stringa2));
  /*stringa con due caratteri diversi*/
  char stringa3[]="ab";
  printf("\nTEST doppiaStringa(\"ab\"): Atteso = 0, Calcolato = %d\n", doppiaStringa(stringa3));
  /*stringa con due caratteri uguali*/
  char stringa4[]="aa";
  printf("\nTEST doppiaStringa(\"aa\"): Atteso = 1, Calcolato = %d\n", doppiaStringa(stringa4));
  /*stringa con due parole diverse*/
  char stringa5[]="ciaocari";
  printf("\nTEST doppiaStringa(\"ciaocari\"): Atteso = 0, Calcolato = %d\n", doppiaStringa(stringa5));
  /*stringa vuota*/
  char stringa6[]="ciaociao";
  printf("\nTEST doppiaStringa(\"ciaociao\"): Atteso = 1, Calcolato = %d\n", doppiaStringa(stringa6));
}

int main() {
  char stringa[DIM];
  printf("Ciao utente inserisci una stringa:\t");
  fgets(stringa, DIM, stdin);

  /* rimuovi \n */
  stringa[strlen(stringa)-1]='\0';
  if (doppiaStringa(stringa)) {
    printf("\nLa stringa inserita ha una doppia sottostringa\n");
  }
  else
    printf("\nLa stringa inserita non ha una doppia sottostringa\n");
  testDoppiaStringa();
  return 0;
}
