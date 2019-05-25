#include <stdio.h>
#include <string.h>
/*funzione corretta!*/
void primaLeAPoiLeZ(char *stringa) {
  int i, j;

  for (i=0; stringa[i]!='\0'; i++) {
    for (j = i+1; stringa[j]!='\0'; j++) {
      if (stringa[j]=='a') {
        stringa[j] = stringa[i];
        stringa[i] = 'a';
      }
    }
  }
  for (i=strlen(stringa)-1; i>0; i--) {
    for (j = i-1; j >= 0; j--) {
      if (stringa[j]=='z') {
        stringa[j] = stringa[i];
        stringa[i] = 'z';
      }
    }
  }
}

void testPrimaLeAPoiLeZ() {
  /*stringa con una sola 'a' in ultima posizione*/
  char stringa1[]="000a";
  primaLeAPoiLeZ(stringa1);
  printf("Test primaLeAPoiLeZ(\"000a\"): Atteso = \"a000\", Calcolato = \"%s\"\n", stringa1);
  /*stringa con una sola 'z' in prima posizione*/
  char stringa2[]="z000";
  primaLeAPoiLeZ(stringa2);
  printf("Test primaLeAPoiLeZ(\"z000\"): Atteso = \"000z\", Calcolato = \"%s\"\n", stringa2);
  /*stringa con una 'z' in prima posizione e una 'a' in ultima posizione*/
  char stringa3[]="z000a";
  primaLeAPoiLeZ(stringa3);
  printf("Test primaLeAPoiLeZ(\"z000a\"): Atteso = \"a000z\", Calcolato = \"%s\"\n", stringa3);
  /* stringa già a posto */
  char stringa4[] = "aaahfdkjzzz";
  primaLeAPoiLeZ(stringa4);
  printf("Test primaLeAPoiLeZ(\"aaahfdkjzzz\"): Atteso = \"aaahfdkjzzz\", Calcolato = \"%s\" \n", stringa4);

  /* stringa con diversi caratteri fuori posto */
  char stringa5[] = "0abaczzaa00z";
  primaLeAPoiLeZ(stringa5);
  printf("Test primaLeAPoiLeZ(\"0abaczzaa00z\"): Atteso = \"aaaa0bc00zzz\", Calcolato = \"%s\" \n", stringa5);
}

int main() {
  char stringa[50];
  printf("Ciao, sono un programma che legge una stringa e riordina\n");
  printf("i caratteri in maniera tale che che le 'a' compaiono nelle prime posizioni\n");
  printf("mentre le 'z' compaiono nelle ultime posizioni.\n");
  printf("\nInserisci una stringa:\t");
  fgets(stringa, 50, stdin);
  stringa[strlen(stringa)-1] = '\0';
  primaLeAPoiLeZ(stringa);
  printf("Ecco la stringa modificata:\t%s\n\n", stringa);
  testPrimaLeAPoiLeZ();
  return 0;
}
