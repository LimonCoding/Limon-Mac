/*!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!CORRETO!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!*/
#include <stdio.h>
#include <string.h>

void dueMinuscolePerVolta(char *stringa) {
  int i=2, j;
  /*ALGORITMO DA IMPARARE BENE!*/
  while (stringa[i]!='\0') {
    if ((stringa[i-2]>='a' && stringa[i-2]<='z') && (stringa[i-1]>='a' && stringa[i-1]<='z') && (stringa[i]>='a' && stringa[i]<='z')) {
        for (j=i; stringa[j]!='\0'; j++) {
          stringa[j]=stringa[j+1];
        }
    }
    else {
      i++;
    }
  }
}

void testdueMinuscolePerVolta() {
  printf("\n\n********\tTEST\t***************************************\n");
  /*stringa vuota*/
	char stringa1[]="";
	dueMinuscolePerVolta(stringa1);
	printf("\nTest alPiuDueConsecutivi(\"\"): Atteso=\"\", Calcolato=\"%s\" \n", stringa1);

	/*tre caratteri uguali all'inizio*/
	char stringa2[]="agf12345";
	dueMinuscolePerVolta(stringa2);
	printf("\nTest alPiuDueConsecutivi(\"agf12345\"): Atteso=\"ag12345\", Calcolato=\"%s\" \n", stringa2);

	/*tre caratteri uguali alla fine*/
	char stringa3[]="12345afg";
	dueMinuscolePerVolta(stringa3);
	printf("\nTest alPiuDueConsecutivi(\"12345afg\"): Atteso=\"12345af\", Calcolato=\"%s\" \n", stringa3);

	/*tre caratteri uguali al centro*/
	char stringa4[]="12afg34";
	dueMinuscolePerVolta(stringa4);
	printf("\nTest alPiuDueConsecutivi(\"12afg34\"): Atteso=\"12af34\", Calcolato=\"%s\" \n", stringa4);

	/*solo uguali */
	char stringa5[]="abcdef";
	dueMinuscolePerVolta(stringa5);
	printf("\nTest alPiuDueConsecutivi(\"abcde\"): Atteso=\"ab\", Calcolato=\"%s\" \n", stringa5);

	/* tutti diversi */
	char stringa6[]="12345";
	dueMinuscolePerVolta(stringa6);
	printf("\nTest alPiuDueConsecutivi(\"12345\"): Atteso=\"12345\", Calcolato=\"%s\" \n", stringa6);

	/*stringa normale, con diverse occorrenze di almeno tre caratteri uguali consecutivi */
	char stringa7[]="1aaa12aaaaa12aaa1";
	dueMinuscolePerVolta(stringa7);
	printf("\nTest alPiuDueConsecutivi(\"1aaa12aaaaa12aaa1\"): Atteso=\"1aa12aa12aa1\", Calcolato=\"%s\" \n", stringa7);
}

int main() {
  int i=0;
  char stringa[50];
  printf("Ciao utente, sono un programma che\nmodifica ogni sequenza di almeno 2 caratteri alfabetici minuscoli ");
  printf("in esattemente 2 caratteri alfabetici minuscoli.\n");

  printf("\nInserisci la stringa:\t");
  fgets(stringa, 50, stdin);
  stringa[strlen(stringa)-1]='\0';

  dueMinuscolePerVolta(stringa);
  printf("\nStringa modificata:\t%s\n", stringa);
  testdueMinuscolePerVolta();
  return 0;
}
