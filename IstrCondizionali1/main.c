#include <stdio.h>

int valoreMin(int *interi, int i);
int valoreMax(int *interi, int i);

int main(){
	int interi[3];
	int i, minimo, massimo;
	printf("Ciao utente inserisci 3 numeri interi, io troverò il valore massimo e il valore minimo\n");
	for(i=0; i<3; i++){
		scanf("%d", &interi[i]);
	}
	printf("\nArray letto:\n");
	for(i=0; i<3; i++){
		printf("%d\n", interi[i]);
	}
	minimo=valoreMin(interi, i);
	printf("\n\nIl minimo dell'array %c: %d\n", 138, minimo);
	massimo=valoreMax(interi, i);
	printf("\n\nIl massimo dell'array %c: %d\n\n\n", 138, massimo);
}

int valoreMin(int *interi, int i){
	int min=interi[0];
	for(i=0; i<3; i++){
		if(min>interi[i])
			min=interi[i];
	}
	return min;
}

int valoreMax(int *interi, int i){
	int max=NULL;
	for(i=0; i<3; i++){
		if(max<interi[i])
			max=interi[i];
	}
	return max;
}