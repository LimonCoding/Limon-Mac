 /* SPECIFICA
  * Input: Una sequenza s di interi e la sua lunghezza l
  * Pre-condizione: l è la lunghezza di s 
  * Output: Un intero triple
  * Post-condizione: triple è pari a 1 se ogni tripla di interi consecutivi 
  * nella sequenza contiene almeno un intero pari ed uno dispari, è pari a 0 altrimenti
  * TIPO DI PROBLEMA: Verifica universale
  */
  
#include <stdio.h>

/* funzione che prende come parametro un array di interi (e la sua lunghezza) 
 * e verifica se ogni tripla di interi consecutivi nella sequenza contiene 
 * almeno un intero pari ed un intero dispari */
int triplePariDispari(int interi[], int lunghezza) {
	// pre: lunghezza è la lunghezza di interi
	int triple;			// vale 1 se ogni tripla di interi consecutivi contiene un intero pari ed uno dispari 
	int i;					// variabile contatore
	
	/* all'inizio ogni tripla visitata contiene un intero pari ed uno dispari */
	triple = 1;
	
	/* guarda tutte le triple di elementi; interrompi se hai trovato tre elementi consecutivi nessuno
	 * dei quali è pari o nessuno dei quali è dispari */
	i=0;
	while(i<=lunghezza-3 && triple) {
		/* verifica se gli interi con indici i, i+1 e i+2 sono tutti pari o tutti dispari */
		if( (interi[i]%2==0 && interi[i+1]%2==0 && interi[i+2]%2==0) ||
			(interi[i]%2!=0 && interi[i+1]%2!=0 && interi[i+2]%2!=0))
			triple = 0;
		else
			i++;
	}
	return triple;
}
 
/* funzione principale */
int main() {
	int lunghezza;		// numero di elementi dell'array
	
	/* INPUT */
	printf("Ciao utente, sono un programma che legge una sequenza di interi ");
	printf("e verifica se ogni tripla di elementi consecutivi contiene almeno un ");
	printf("elemento pari ed uno dispari.\n\n");
	printf("Quanti interi vuoi introdurre? ");
	scanf("%d", &lunghezza);
	
	int sequenza[lunghezza];
	printf("\n");
	for(int i=0; i<lunghezza; i++) {
		printf("Introduci un intero: ");
		scanf("%d", &sequenza[i]);
	}

	/* OUTPUT */
	if(triplePariDispari(sequenza,lunghezza))
		printf("\nOgni tripla di interi consecutivi contiene un pari ed un dispari!\n");
	else
		printf("\nEsistono delle triple di interi consecutivi senza un pari o senza un dispari!\n");
}
