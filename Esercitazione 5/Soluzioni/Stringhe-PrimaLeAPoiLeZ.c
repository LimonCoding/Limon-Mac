#include <stdio.h>
#include <string.h>

/* Funzione che riceve come parametro una stringa e riordina i 
 * caratteri della stringa così che tutte le 'a' (minuscole) compaiono all'inizio della 
 * stringa e tutte le 'z' (minuscole) compaiono alla fine della stringa. */
void primaLeAPoiLeZ(char *stringa) {
	int i, j;			// contatori
	
	/* sposta prima le 'a' */
	i = 0;							// scorri da sinistra
	j = strlen(stringa)-1;		// scorri da destra
	
	/* vai avanti fino a che gli indici non si incontrano */
	while(i<j) {
		
		/* a sinistra cerchi un carattere che non sia una 'a' */
		if(stringa[i]=='a')
			i++;
		else {
			/* a destra cerchi una 'a' */
			if(stringa[j]!='a') 
				j--;
			else {
			/* il carattere con indice i è diverso da 'a' e quello con indice
			 * j è una 'a': scambiali */
				char temp = stringa[i];
				stringa[i] = stringa[j];
				stringa[j] = temp;
			}
		}
	}

	/* ora sposta le 'z', lasciando le 'a' dove stanno; osserva che la i 
	 * rappresenta ancora l'indice del primo carattere che non è una 'a' 
	 * a meno che la stringa non sia composta di sole 'a' */
	j = strlen(stringa)-1;		// scorri da destra
	
	/* vai avanti fino a che gli indici non si incontrano */
	while(i<j) {
		
		/* a destra cerchi un carattere che non sia una 'z' */
		if(stringa[j]=='z')
			j--;
		else {
			/* a sinistra cerchi una 'z' */
			if(stringa[i]!='z') 
				i++;
			else {
			/* il carattere con indice i è una 'z' e quello con indice
			 * j è diverso da 'z': scambiali */
				char temp = stringa[i];
				stringa[i] = stringa[j];
				stringa[j] = temp;
			}
		}
	}
}

/* funzione di test per primaLeAPoiLeZ */
void testPrimaLeAPoiLeZ() {
	
	/* stringa vuota */
	char stringa1[] = "";
	primaLeAPoiLeZ(stringa1);
	printf("Test primaLeAPoiLeZ(\"\"): Atteso = \"\", Calcolato = \"%s\" \n", stringa1);

	/* stringa con un solo carattere uguale ad 'a' */
	char stringa2[] = "a";
	primaLeAPoiLeZ(stringa2);
	printf("Test primaLeAPoiLeZ(\"a\"): Atteso = \"a\", Calcolato = \"%s\" \n", stringa2);

	/* stringa con un solo carattere uguale a 'z' */
	char stringa3[] = "z";
	primaLeAPoiLeZ(stringa3);
	printf("Test primaLeAPoiLeZ(\"z\"): Atteso = \"z\", Calcolato = \"%s\" \n", stringa3);

	/* stringa in cui l'unica 'a' fuori posto è in ultima posizione */
	char stringa4[] = "0000a";
	primaLeAPoiLeZ(stringa4);
	printf("Test primaLeAPoiLeZ(\"0000a\"): Atteso = \"a0000\", Calcolato = \"%s\" \n", stringa4);

	/* stringa in cui l'unica 'z' fuori posto è in prima posizione */
	char stringa5[] = "z0000";
	primaLeAPoiLeZ(stringa5);
	printf("Test primaLeAPoiLeZ(\"z0000\"): Atteso = \"0000z\", Calcolato = \"%s\" \n", stringa5);

	/* stringa già a posto */
	char stringa6[] = "aaahfdkjzzz";
	primaLeAPoiLeZ(stringa6);
	printf("Test primaLeAPoiLeZ(\"aaahfdkjzzz\"): Atteso = \"aaahfdkjzzz\", Calcolato = \"%s\" \n", stringa6);

	/* stringa con diversi caratteri fuori posto */
	char stringa7[] = "0abaczzaa00z";
	primaLeAPoiLeZ(stringa7);
	printf("Test primaLeAPoiLeZ(\"0abaczzaa00z\"): Atteso = \"aaaa0bc00zzz\", Calcolato = \"%s\" \n", stringa7);
}

/* funzione principale */
int main(){
	/* input */
	printf("Ciao, sono un programma che legge una stringa e riordina "); 
	printf("i caratteri in maniera tale che che le 'a' compaiono nelle prime posizioni ");
	printf("mentre le 'z' compaiono nelle ultime posizioni.\n"); 
	char stringa[50];
	printf("Introduci una bella stringa: ");
	fgets(stringa, 50, stdin);
	
	/* rimuovi \n */
	stringa[strlen(stringa)-1]='\0';
	
	/* riordina i caratteri */
	primaLeAPoiLeZ(stringa);
	
	/* output */
	printf("Ecco la stringa trasformata: %s\n\n", stringa);
	
	/* fai partire il test */
	testPrimaLeAPoiLeZ();
}