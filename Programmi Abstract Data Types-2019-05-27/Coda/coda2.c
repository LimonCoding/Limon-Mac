#include <stdio.h>
#include <stdlib.h>

/* per gestire i nodi */
struct Nodo {
	int numero;
	struct Nodo *next;
} ;

/* puntatori alla testa e alla coda della lista */
struct Puntatori {
	struct Nodo* head;
	struct Nodo* tail;
};

/* uno queue è un puntatore ad una struttura puntatori */
typedef struct Puntatori* QUEUE;

/******************************************************
 ********************* CREAZIONE ***********************
 ******************************************************/ 

/* crea la struttura puntatori, che inizialmente non punta a niente */
QUEUE empty() {
	QUEUE q = malloc(sizeof(struct Puntatori));
	q->head = NULL;
	q->tail = NULL;
	return q;
}

/******************************************************
 ********************* TEST CODA VUOTA *****************
 ******************************************************/ 

/* verifica coda vuota */
int null(QUEUE q) {
	return q->head==NULL;
}

/******************************************************
 ********************* INSERIMENTO *********************
 ******************************************************/ 

/* l'inserimento avviene in coda */
QUEUE enqueue(QUEUE q, int x) {
	struct Nodo* nodo = malloc(sizeof(struct Nodo)); 		// nuovo  nodo 
	
	/* valore del campo dati */
	nodo -> numero = x; 							
	/* il nodo è l'ultimo */
	nodo->next = NULL;
	
	/* collega il nodo al precedente, se esiste */
	if(!null(q)) 
		q->tail->next = nodo;
	/* se non esiste questo è il primo nodo */
	else 
		q->head = nodo;
	/* in ogni caso, il nuovo nodo diventa l'ultimo */
	q->tail = nodo;
		
	return q;	
}

/******************************************************
 ********************* CANCELLAZIONE *******************
 ******************************************************/ 

/* funzione che cancella un nodo dalla testa della coda */		
QUEUE deque(QUEUE q) {
	// pre: la coda non è vuota
	
	/* salva il nodo da cancellare */
	struct Nodo* primo = q->head;
	/* ci sono altri nodi? */
	if(q->head!=q->tail) 
		/* il nodo successivo diventa la head */
		q->head = primo->next; 
	else {	// la coda diventa vuota
		q->head = NULL;
		q->tail = NULL;
	}
	/* dealloca il nodo */
	free(primo);
	return q;
}

/******************************************************
 ******************** PRIMO ELEMENTO ******************
 ******************************************************/ 

/* funzione che restituisce l'elemento in testa alla coda */		
int front(QUEUE q) {
	// pre: almeno un elemento
	return q->head->numero;
}

/*********************************************************
 ************************ STAMPA **************************
 *********************************************************/ 
void stampa(QUEUE q) {
	struct Nodo* nodo = q->head;				// per gestire i nodi		
	printf("Ecco la coda, a partire dal primo nodo:\n\n");
	while(nodo!= NULL) {
		printf("%d\n", nodo->numero);
		nodo = nodo -> next;
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