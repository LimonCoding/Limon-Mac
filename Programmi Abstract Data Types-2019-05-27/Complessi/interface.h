#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "typeSpec.h"

/******************************************************************/
/**** INTERFACCIA PER IL TIPO DI DATO ASTRATTO NUMERO COMPLESSO ***/
/******************************************************************/

/* funzione per stampare un numero complesso */
void stampa(Complex c);

/* funzione per creare un numero complesso */
Complex crea(float reale, float immaginaria);

/* funzione che restituisce la somma di c1 e c2 */
Complex somma(Complex c1, Complex c2);

/* funzione che restituisce il prodotto di c1 e c2 */
Complex prodotto(Complex c1, Complex c2);

/* funzione che restituisce la parte reale di un numero complesso */
float parteReale(Complex c);

/* funzione che restituisce la parte immaginaria di un numero complesso */
float parteImmaginaria(Complex c);

/* funzione che restituisce il complemento di un numero complesso */
Complex complemento(Complex c1);

/* funzione che restituisce il modulo di un numero complesso */
float modulo(Complex c);

/* funzione per utilizzare numeri complessi */
int main();