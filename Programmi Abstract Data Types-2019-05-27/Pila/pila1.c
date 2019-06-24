#include <stdio.h>
#include <stdlib.h>

/* per gestire i nodi */
struct Nodo {
	int numero;
	struct Nodo *next;
} ;

/* uno stack è un puntatore al nodo affiorante */
typedef struct Nodo* STACK;

/******************************************************
 ********************* CREAZIONE ***********************
 ******************************************************/ 

/* creazione stack vuoto */
STACK empty() {
	return NULL;
}

/******************************************************
 ********************* TEST PILA VUOTA *****************
 ******************************************************/ 

/* verifica stack vuoto */
int null(STACK s) {
	return s==NULL;
}

/******************************************************
 ********************* INSERIMENTO *********************
 ******************************************************/ 

/* funzione che inserisce un elemento in testa alla pila */		
STACK push(STACK s, int x) {
	STACK nodo = malloc(sizeof(struct Nodo)); 		// nuovo  nodo 
	
	/* valore del campo dati */
	nodo -> numero = x; 							
	
	/* collega il nodo al successivo */
	nodo->next = s;

	/* restituisci l'indirizzo del nuovo primo elemento */
	return nodo;								
}

/******************************************************
 ********************* CANCELLAZIONE *******************
 ******************************************************/ 

/* funzione che cancella un nodo dalla testa della pila */		
STACK pop(STACK s) {
	// pre: la pila non è vuota
	 STACK nodo;			// il nuovo primo nodo della pila
	
	nodo = s->next;
	/* viene deallocata la memoria del primo nodo */
	free(s);
	
	return nodo;
}

/******************************************************
 ******************** PRIMO ELEMENTO ******************
 ******************************************************/ 

/* funzione che restituisce l'elemento in testa alla pila */		
int top(STACK s) {
	// pre: almeno un elemento
	return s->numero;
}

/*********************************************************
 ************************ STAMPA **************************
 *********************************************************/ 
/* funzione per la stampa di uno stack */
void stampa(STACK s) {
	printf("Ecco la pila:\n\n");
	while(s != NULL) {
		printf("%d\n", s->numero);
		s = s -> next;
	}
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
			int x;
			printf("Che elemento vuoi inserire?\n");
			scanf("%d", &x);
			s=push(s,x);
			printf("Inserito!\n\n");
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