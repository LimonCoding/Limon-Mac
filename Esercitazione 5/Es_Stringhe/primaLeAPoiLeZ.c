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
}

int main() {
  char stringa[50];
  int newline;
  printf("Ciao utente inserisci una stringa:\t");
  fgets(stringa, 50, stdin);
  newline = strlen (stringa) - 1;
  stringa[newline] = '\0';
  primaLeAPoiLeZ(stringa);
  printf("%s\n", stringa);
  testPrimaLeAPoiLeZ();
  return 0;
}
