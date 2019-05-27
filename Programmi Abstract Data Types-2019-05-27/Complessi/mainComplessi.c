#include <stdio.h>
#include <stdlib.h>
#include "interface.h"

/* funzione per utilizzare numeri complessi */
int main() {
	/* crea due numeri complessi e stampali */
	Complex c1, c2, c3;
	c1 = crea(3,-5); 	stampa(c1);
	c2 = crea(3,4);	    stampa(c2);

	/* crea e stampa la loro somma */
	c3 = somma(c1,c2); stampa(c3);

	/* crea e stampa il loro prodotto */
	c3 = prodotto(c1,c2); stampa(c3);

	/* stampa il modulo, la parte reale, la parte immaginaria ed il
	 * complemeneto del secondo */
	stampa(c2);
	printf("Modulo: %.2f\n", modulo(c2));
	printf("Parte reale %.2f\n", parteReale(c2));
	printf("Parte immaginaria %.2f\n", parteImmaginaria(c2));
	printf("Complemento: ");
	c3 = complemento(c2); stampa(c3);
}
