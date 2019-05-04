#include <stdio.h>
/*dichiarazione delle funzioni utilizzate*/
int valoreMin(int *interi, int i);
int valoreMax(int *interi, int i);

int main(){
	int interi[3]; // dichiarazione dell'array
	int i, minimo, massimo; // dichiarazione del contatore 'i' e delle variabili 'minimo' e 'massimo'
	printf("Ciao utente inserisci 3 numeri interi, io troverò il valore massimo e il valore minimo\n");
	for(i=0; i<3; i++){
		scanf("%d", &interi[i]); // permette di inserire l'array in questo caso di 3 elementi
	}
	printf("\nArray letto:\n"); // legge l'array dato
	for(i=0; i<3; i++){
		printf("%d\n", interi[i]);
	}
	minimo=valoreMin(interi, i); // chiama la funzione per la ricerca del minimo
	printf("\n\nIl minimo dell'array %c %d\n", 138, minimo);
	massimo=valoreMax(interi, i); // chiama la funzione per la ricerca del massimo
	printf("\n\nIl massimo dell'array %c %d\n\n\n", 138, massimo);
}
/*Funzione per la ricerca del minimo nell'array*/
int valoreMin(int *interi, int i){
	int min=interi[0];
	for(i=0; i<3; i++){
		if(min>interi[i])
			min=interi[i];
	}
	return min;
}
/*Funzione per la ricerca del massimo nell'array*/
int valoreMax(int *interi, int i){
	int max=NULL;
	for(i=0; i<3; i++){
		if(max<interi[i])
			max=interi[i];
	}
	return max;
}