#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/*********************************************/
/* IMPLEMENTAZIONE DELLE FUNZIONI CON STRUCT */
/*********************************************/

/* funzione per stampare un numero complesso */
void stampa(Complex c) {
	if(c->im==0)
		printf("Numero complesso %.2f\n", c->r);
	else
		if(c->r==0)
			printf("Numero complesso %.2f*i\n", c->im);
		else
			if(c->im>0)
				printf("Numero complesso %.2f +%.2f*i\n", c->r,c->im);
			else
				printf("Numero complesso %.2f %.2f*i\n", c->r,c->im);
}

/* funzione per stampare un numero complesso */
void stampa2(struct Complesso c) {
	if(c.im==0)
		printf("Numero complesso %.2f\n", c.r);
	else
		if(c.r==0)
			printf("Numero complesso %.2f*i\n", c.im);
		else
			if(c.im>0)
				printf("Numero complesso %.2f +%.2f*i\n", c.r,c.im);
			else
				printf("Numero complesso %.2f %.2f*i\n", c.r,c.im);
}

/* funzione per creare un numero complesso */
Complex crea(float reale, float immaginaria) {
	Complex c = malloc(sizeof(struct Complesso));
	c->r = reale;
	c->im = immaginaria;
	return c;
}

/* funzione che restituisce la somma di c1 e c2 */
Complex somma(Complex c1, Complex c2) {
	Complex c = crea(0,0);
	c->r = c1->r + c2->r;
	c->im = c1->im + c2->im;
	return c;
}

/* funzione che restituisce il prodotto di c1 e c2 */
Complex prodotto(Complex c1, Complex c2){
	Complex c = crea(0,0);
	c->r = c1->r * c2->r - c1->im * c2->im;
	c->im = c1->r * c2->im + c1->im * c2->r;
	return c;
}

/* funzione che restituisce la parte reale di un numero complesso */
float parteReale(Complex c) {
	return c->r;
}

/* funzione che restituisce la parte immaginaria di un numero complesso */
float parteImmaginaria(Complex c){
	return c->im;
}

/* funzione che restituisce il complemento di un numero complesso */
Complex complemento(Complex c1){
	Complex c = crea(0,0);
	c->r = c1->r;
	c->im = - c1->im;
	return c;
}

/* funzione per il modulo di un numero complesso */
float modulo(Complex c) {
	return sqrt(c->r * c->r + c->im * c->im);
}

