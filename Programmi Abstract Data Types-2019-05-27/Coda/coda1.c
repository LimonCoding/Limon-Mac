#include <stdio.h>
#include <stdlib.h>

/* per gestire i nodi */
struct Nodo {
	int numero;
	struct Nodo *next;
} ;

/* uno queue è un puntatore al nodo affiorante */
typedef struct Nodo* QUEUE;

/******************************************************
 ********************* CREAZIONE ***********************
 ******************************************************/ 

/* creazione coda vuota */
QUEUE empty() {
	return NULL;
}

/******************************************************
 ********************* TEST CODA VUOTA *****************
 ******************************************************/ 

/* verifica coda vuota */
int null(QUEUE q) {
	return q==NULL;
}

/******************************************************
 ********************* INSERIMENTO *********************
 ******************************************************/ 

/* l'inserimento è la funzione che cambia rispetto alle pile, in quanto 
 * viene fatto in fondo alla coda */
QUEUE enqueue(QUEUE q, int x) {
	QUEUE nodo = malloc(sizeof(struct Nodo)); 		// nuovo  nodo 
	
	/* Il campo dati vale x ed il nuovo nodo è l'ultimo */
	nodo -> numero = x; 							
	nodo->next = NULL;
	
	/* collega il nodo al precedente */
	if(null(q)) 			// coda vuota? 
		q = nodo;		// il nuovo nodo diventa il primo
	else{							// lista non vuota, cerca l'ultimo nodo
		QUEUE nodoCorrente = q;
		while(nodoCorrente->next != NULL)
			nodoCorrente = nodoCorrente->next;
		/* ora nodoCorrente è l'indirizzo dell'ultimo nodo della lista */
		nodoCorrente->next = nodo;							
	}
	
	return q;	
}

/******************************************************
 ********************* CANCELLAZIONE *******************
 ******************************************************/ 

/* funzione che cancella un nodo dalla testa della coda */		
QUEUE deque(QUEUE q) {
	// pre: la coda non è vuota
	QUEUE nodo;			// il nuovo primo nodo della coda
	
	nodo = q->next;
	/* viene deallocata la memoria del primo nodo */
	free(q);
	
	return nodo;
}

/******************************************************
 ******************** PRIMO ELEMENTO ******************
 ******************************************************/ 

/* funzione che restituisce l'elemento in testa alla coda */		
int front(QUEUE q) {
	// pre: almeno un elemento
	return q->numero;
}

/*********************************************************
 ************************ STAMPA **************************
 *********************************************************/ 

/* funzione per la stampa di uno stack */
void stampa(QUEUE q) {
	printf("Ecco la coda, a partire dal primo nodo:\n\n");
	while(q != NULL) {
		printf("%d\n", q->numero);
		q = q -> next;
	}
	printf("\n");
}

/*********************************************************
 ************************ MAIN ****************************
 *********************************************************/ 

/* funzione principale */
int main() {
	int risposta = -1;					// valore inserito dall'utente
	QUEUE q = empty();
 
	/* ciclo di interazione con l'utente */
	while(risposta!=0) {
		printf("Che operazione vuoi svolgere?\n");
		printf("Introduci 1 -> ENQUEUE\n");
		printf("Introduci 2 -> DEQUE\n");
		printf("Introduci 3 -> FRONT\n");
		printf("Introduci 4 -> VISUALIZZA\n");
		printf("Introduci 0 -> Termina il programma\n");
		scanf("%d%*c", &risposta);

		/* ENQUEUE */
		if(risposta==1) {
			int x;
			printf("Che elemento vuoi inserire?\n");
			scanf("%d", &x);
			q=enqueue(q,x);
			printf("Inserito!\n\n");
		}
		/* DEQUE */
		else if(risposta==2) {
			if(null(q))
				printf("Mi dispiace, ma la coda %c vuota!\n\n", 138);
			else {
				q=deque(q);
				printf("Eliminato!\n\n");
			}
		}
		/* FRONT */
		else if(risposta==3)  {
			if(null(q))
				printf("Mi dispiace, ma la coda %c vuota!\n\n", 138);
			else 
				printf("L'elemento affiorante vale %d\n\n", front(q));
		}
		/* Visualizza la coda */
		else if(risposta==4) {
			if(null(q))
				printf("Coda vuota!\n\n");
			else
				stampa(q);
		}
		/* numero sbagliato? */
		else  if(risposta!=0)
			printf("Questo numero non vuol dire niente. Riproviamo!\n\n");
	}
}	