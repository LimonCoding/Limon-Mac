#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/********************************************/
/* IMPLEMENTAZIONE DELLE FUNZIONI CON ARRAY */
/********************************************/

/* funzione per stampare un numero complesso */
void stampa(Complex c) {
	if((*c)[1]==0)
		printf("Numero complesso %.2f\n", (*c)[0]);
	else
		if((*c)[0]==0)
			printf("Numero complesso %.2f*i\n", (*c)[1]);
		else
			if((*c)[1]>0)
				printf("Numero complesso %.2f +%.2f*i\n", (*c)[0], (*c)[1]);
			else
				printf("Numero complesso %.2f %.2f*i\n", (*c)[0], (*c)[1]);
}

/* funzione per creare un numero complesso */
Complex crea(float reale, float immaginaria) {
	Complex c = malloc(sizeof(Complesso));
	(*c)[0] = reale;
	(*c)[1] = immaginaria;
	return c;
}

/* funzione che restituisce la somma di c1 e c2 */
Complex somma(Complex c1, Complex c2) {
	Complex c = crea(0,0);
	(*c)[0] = (*c1)[0] + (*c2)[0];
	(*c)[1] = (*c1)[1] + (*c2)[1];
	return c;
}

/* funzione che restituisce il prodotto di c1 e c2 */
Complex prodotto(Complex c1, Complex c2){
	Complex c = crea(0,0);
	(*c)[0] = (*c1)[0] * (*c2)[0] - (*c1)[1] * (*c2)[1];
	(*c)[1] = (*c1)[0] * (*c2)[1] + (*c1)[1] * (*c2)[0];
	return c;
}

/* funzione che restituisce la parte reale di un numero complesso */
float parteReale(Complex c) {
	return (*c)[0];
}

/* funzione che restituisce la parte immaginaria di un numero complesso */
float parteImmaginaria(Complex c){
	return (*c)[1];
}

/* funzione che restituisce il complemento di un numero complesso */
Complex complemento(Complex c1){
	Complex c = crea(0,0);
	(*c)[0] = (*c1)[0];
	(*c)[1] = -(*c1)[1];
	return c;
}

/* funzione per il modulo di un numero complesso */
float modulo(Complex c) {
	return sqrt((*c)[0] * (*c)[0] + (*c)[1] * (*c)[1]);
}

