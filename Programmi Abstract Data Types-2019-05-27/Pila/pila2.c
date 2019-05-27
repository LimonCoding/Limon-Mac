#include <stdio.h>
#include <stdlib.h>

#define MAXSIZE 20	// il massimo numero di elementi nella pila

/* uno stack è un puntatore ad un array di interi */
struct pila{
	int elementi[MAXSIZE];
	int numeroElementi;
};

typedef struct pila* STACK;

/******************************************************
 ********************* CREAZIONE ***********************
 ******************************************************/ 

/* creazione stack vuoto */
STACK empty() {
	STACK s =malloc(sizeof(struct pila));
	s->numeroElementi = 0;
	return s;
}

/******************************************************
 ********************* TEST PILA VUOTA *****************
 ******************************************************/ 

/* verifica stack vuoto */
int null(STACK s) {
	return s->numeroElementi==0;
}

/******************************************************
 ********************* PILA PIENA ***********************
 ******************************************************/ 

/* verifica stack pieno */
int full(STACK s) {
	return s->numeroElementi==MAXSIZE;
}

/******************************************************
 ********************* INSERIMENTO *********************
 ******************************************************/ 

/* funzione che inserisce un elemento in testa alla pila */		
STACK push(STACK s, int x) {
	// pre: ci sono posti liberi nello stack
	
	/*  inserisci l'intero in posizione numeroElementi */
	s -> elementi [s -> numeroElementi] = x; 							
	s -> numeroElementi++;

	/* restituisci l'indirizzo del nuovo primo elemento */
	return s;								
}

/******************************************************
 ********************* CANCELLAZIONE *******************
 ******************************************************/ 

/* funzione che cancella un nodo dalla testa della pila */		
STACK pop(STACK s) {
	// pre: la pila non è vuota
	
	/* diminuisci il numero di elementi in pila */
	s -> numeroElementi--;
	
	return s;
}

/******************************************************
 ******************** PRIMO ELEMENTO ******************
 ******************************************************/ 

/* funzione che restituisce l'elemento in testa alla pila */		
int top(STACK s) {
	// pre: almeno un elemento
	return s->elementi[s->numeroElementi-1];
}

/*********************************************************
 ************************ STAMPA **************************
 *********************************************************/ 

/* funzione per la stampa di uno stack */
void stampa(STACK s) {
	printf("Ecco la pila:\n\n");
	for(int i=s->numeroElementi-1;i>=0;i--)
		printf("%d\n", s->elementi[i]);
	printf("\n");
}

/*********************************************************
 ************************ MAIN ****************************
 *********************************************************/ 

/* funzione principale */
int main() {
	int risposta = -1;					// valore inserito dall'utente
	STACK s = empty();

	/* ciclo di interazione con l'utente */
	while(risposta!=0) {
		printf("Che operazione vuoi svolgere?\n");
		printf("Introduci 1 -> PUSH\n");
		printf("Introduci 2 -> POP\n");
		printf("Introduci 3 -> TOP\n");
		printf("Introduci 4 -> VISUALIZZA\n");
		printf("Introduci 0 -> Termina il programma\n");
		scanf("%d%*c", &risposta);

		/* PUSH */
		if(risposta==1) {
			if(full(s))
				printf("Mi dispiace, la pila %c piena\n\n", 138);
			else {
				int x;
				printf("Che elemento vuoi inserire?\n");
				scanf("%d", &x);
				s=push(s,x);
				printf("Inserito!\n\n");
			}
		}
		/* POP */
		else if(risposta==2) {
			if(null(s))
				printf("Mi dispiace, ma la pila %c vuota!\n\n", 138);
			else {
				s=pop(s);
				printf("Eliminato!\n\n");
			}
		}
		/* TOP */
		else if(risposta==3)  {
			if(null(s))
				printf("Mi dispiace, ma la pila %c vuota!\n\n", 138);
			else 
				printf("L'elemento affiorante vale %d\n\n", top(s));
		}
		/* Visualizza la pila */
		else if(risposta==4) {
			if(null(s))
				printf("Pila vuota!\n\n");
			else
				stampa(s);
		}
		/* numero sbagliato? */
		else  if(risposta!=0)
			printf("Questo numero non vuol dire niente. Riproviamo!\n\n");
	}
}	