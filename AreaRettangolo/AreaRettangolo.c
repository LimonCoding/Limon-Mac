#include <stdio.h>

/* programma che calcola l'area di un rettangolo */
int main() {
	int base, altezza, area;			// variabili per le misure
	
	/* INPUT */
	printf("Ciao utente, introduci base ed altezza del rettangolo.\n");
	scanf("%d", &base);
	scanf("%d", &altezza);
	
	/* calcola l'area e visualizza il risultato */
	area = base * altezza;
	printf("\nL'area del rettangolo e' %d.\n", area);	
}
