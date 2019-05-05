#include <stdio.h>

int quantiUguali(int *interi); // confronta i numeri uguali
int coppia2uguali(int *interi); // confronta eventualmente la seconda coppia uguale
void stampaCasi(int uguali, int coppia2); // stampa i casi

int main() {
	int interi[4];
	int i, uguali, coppia2;
	printf("Ciao utente, inserisci 4 interi e io controllo quali sono uguali fra di loro :\n");
	for(i=0; i<4; i++){
		scanf("%d", &interi[i]);
	}
	printf("\narray letto:\n");
	for(i=0; i<4; i++){
		printf("%d\n", interi[i]);
	}
	printf("\n");
	uguali=quantiUguali(interi);
	stampaCasi(uguali, coppia2);
}

int quantiUguali(int *interi){
	int same, i, j;
	printf("sono entrato nella funzione quantiUguali\n\n" );
	for(i=0; i<3; i++){
		for(j=i+1; j<4; j++){
			printf("elemento: %d\t=\telemento: %d\n", interi[i], interi[j]);
			if(interi[i]==interi[j])
				same=same+1;
		}
	}
	printf("\nuguali: %d\n\n", same);
	return same;
}

void stampaCasi(int uguali, int coppia2){
	printf("sono entrato nella funzione stampaCasi\n");
		switch(uguali) {
			case 0:
			printf("\nCi sono esattamente 0 numeri fra loro uguali\n");
			break;
			case 1:
			printf("\nCi sono esattamente 2 numeri fra loro uguali\n");
			break;
			case 2:
			printf("\nCi sono esattamente due coppie di numeri fra loro uguali\n");
			break;
			case 3:
			printf("\nCi sono esattamente 3 numeri fra loro uguali\n");
			break;
			case 6:
			printf("\nCi sono esattamente 4 numeri fra loro uguali\n");
			break;
			}
}
