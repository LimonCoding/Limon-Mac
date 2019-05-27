#include <stdio.h>
#include <stdlib.h>
#include <math.h>
/********************************************/
/** PER CAMBIARE L'IMPLEMENTAZIONE DELLA ****/
/** STRUTTURA DATICOMMENTARE UNA DELLE DUE **/
/********************************************/

/******* per implementare i complessi come un array*/
typedef float Complesso[2];
typedef Complesso* Complex;

#include "complessi2.c"


/******* per implementare i complessi come una struct
struct Complesso {
	float r;	// parte reale
	float im;	// parte immaginaria
};
typedef struct Complesso* Complex;

#include "complessi1.c"
*/