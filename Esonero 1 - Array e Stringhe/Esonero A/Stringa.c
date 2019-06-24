#include <stdio.h>
#include <string.h>

void alPiuDueConsecutivi(char *stringa) {
  int i=2, j;
  while (stringa[i]!='\0') {
    if (stringa[i]==stringa[i-2] && stringa[i]==stringa[i-1]) {
      for (j=i; stringa[j]!='\0'; j++) {
        stringa[j]=stringa[j+1];
      }
    }
      else
        i++;
  }
}

void testAlPiuDueConsecutivi() {
  printf("\n\n********\tTEST\t***************************************\n");
  /*stringa vuota*/
	char stringa1[]="";
	alPiuDueConsecutivi(stringa1);
	printf("\nTest alPiuDueConsecutivi(\"\"): Atteso=\"\", Calcolato=\"%s\" \n", stringa1);

	/*tre caratteri uguali all'inizio*/
	char stringa2[]="aaa12345";
	alPiuDueConsecutivi(stringa2);
	printf("\nTest alPiuDueConsecutivi(\"aaa12345\"): Atteso=\"aa12345\", Calcolato=\"%s\" \n", stringa2);

	/*tre caratteri uguali alla fine*/
	char stringa3[]="12345aaa";
	alPiuDueConsecutivi(stringa3);
	printf("\nTest alPiuDueConsecutivi(\"12345aaa\"): Atteso=\"12345aa\", Calcolato=\"%s\" \n", stringa3);

	/*tre caratteri uguali al centro*/
	char stringa4[]="12aaa34";
	alPiuDueConsecutivi(stringa4);
	printf("\nTest alPiuDueConsecutivi(\"12aaa34\"): Atteso=\"12aa34\", Calcolato=\"%s\" \n", stringa4);

	/*solo uguali */
	char stringa5[]="aaaaaa";
	alPiuDueConsecutivi(stringa5);
	printf("\nTest alPiuDueConsecutivi(\"aaaaaa\"): Atteso=\"aa\", Calcolato=\"%s\" \n", stringa5);

	/* tutti diversi */
	char stringa6[]="12345";
	alPiuDueConsecutivi(stringa6);
	printf("\nTest alPiuDueConsecutivi(\"12345\"): Atteso=\"12345\", Calcolato=\"%s\" \n", stringa6);

	/*stringa normale, con diverse occorrenze di almeno tre caratteri uguali consecutivi */
	char stringa7[]="1aaa12aaaaa12aaa1";
	alPiuDueConsecutivi(stringa7);
	printf("\nTest alPiuDueConsecutivi(\"1aaa12aaaaa12aaa1\"): Atteso=\"1aa12aa12aa1\", Calcolato=\"%s\" \n", stringa7);
}

int main() {
  int i=0;
  char stringa[50];
  printf("Ciao utente, sono un programma che\nmodifica ogni sequenza di almeno 2 caratteri uguali ");
  printf("in esattemente 2 caratteri consecutivi uguali.\n");

  printf("\nInserisci la stringa:\t");
  fgets(stringa, 50, stdin);
  stringa[strlen(stringa)-1]='\0';

  alPiuDueConsecutivi(stringa);
  printf("\nStringa modificata:\t%s\n", stringa);
  testAlPiuDueConsecutivi();
  return 0;
}
