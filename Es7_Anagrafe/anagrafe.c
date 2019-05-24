#include <stdio.h>
#include <string.h>
#define DIM 30

/* DEFINIZIONE STRUTTURE CORRETTA*/

typedef struct Data{
  int giorno, mese, anno;
} DATA;

typedef struct Indirizzo{
    char via[DIM];
    int numCivico;
    char citta[DIM];
} INDIRIZZO;

typedef struct Persona{
    char nome[DIM];
    char cognome[DIM];
    DATA dataDiNascita;
    INDIRIZZO indirizzo;
} PERSONA;

/****************************************************
 ******************* STAMPA LISTE *******************
 ****************************************************/

void stampaData(DATA *data) {
  printf("DATA DI NASCITA: %d/%d/%d\n", data->giorno, data->mese, data->anno);
}

void stampaIndirizzo(INDIRIZZO *indirizzo) {
  printf("INDIRIZZO: Via %s %d, %s\n", indirizzo->via, indirizzo->numCivico, indirizzo->citta);
}

/*void stampaPersona(PERSONA *persona) {
  printf("\nNOME: %s\n", persona->nome);
  printf("\nCOGNOME: %s\n", persone->cognome);
  stampaData(&(persona->dataDiNascita));
  stampaIndirizzo(&(persona->indirizzo));
}*/

int main()
{
    int scelta=-1;
    struct Nodo *head = NULL;
    while(scelta<0||scelta>4){
        printf("Ciao utente, fai una scelta");
        printf("\n0. Termina programma");
        printf("\n1. Inserisci persona nell'anagrafe");
        printf("\n2. Ricerca persona nell'anagrafe");
        printf("\n3. Cancella persona dall'anagrafe");
        printf("\n4. Visualizza l'intera anagrafe\n");
        scanf("%d", &scelta);
    switch (scelta){
        case 0:
            return 0;
            break;
        case 1:
            //head = inserisciNodo(head);
            break;
        case 2:

            break;
        case 3:

            break;
        case 4:
            if(head==NULL)
                printf("Lista vuota!\n");
            else
                //stampaLista(head);
            break;
    }
  }
}
