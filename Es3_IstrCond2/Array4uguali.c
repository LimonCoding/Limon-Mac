#include <stdio.h>

int quantiUguali(int *interi);
int coppia2uguali(int *interi);

int main() {
	int interi[4];
	int i, uguali, coppia2;
	printf("Ciao utente, inserisci 4 interi e io controllo quali sono uguali fra di loro :\n");
	for(i=0; i<4; i++){
		scanf("%d", &interi[i]);
	}
	uguali=quantiUguali(interi);
	if(uguali!=0)
		coppia2=coppia2uguali(interi);

/* è possibile utilizzare l'istruzione condizionale 'if' con le diverse condizioni */
	switch(uguali) {
		case 0:
		printf("\nCi sono esattamente 0 numeri fra loro uguali\n");
		break;
		case 1:
		/* ATTTENZIONE nello 'switch case' non funziona l'istruzione 'if' */
		if(coppia2==0)
			printf("\nCi sono esattamente 2 numeri fra loro uguali\n");
		break;
		case 2:
		printf("\nCi sono esattamente 3 numeri fra loro uguali\n");
		break;
		case 3:
		printf("\nCi sono esattamente 4 numeri fra loro uguali\n");
		break;
		}
}
/* ATTTENZIONE questa funzione non funziona con gli ultimi numeri quantiUguali
è necessario che ci sia almeno un numero uguale al primo per ritornare same!=0 */
int quantiUguali(int *interi){
	int same, i;
	printf("sono entrato nella funzione quantiUguali\n" );
	for(i=0; i<3; i++) {
		if(interi[0]==interi[i+1])
			same=same+1;
	}
	return same;
}

int coppia2uguali(int *interi) {
	int same2, i;
	printf("sono entrato nella funzione coppia2uguali\n" );
	for(i=0; i<3; i++) {
		if(interi[i]==interi[i+1]&&interi[i]!=interi[0])
			printf("\nCi sono esattamente due coppie di numeri fra loro uguali\n");
	}
	same2=0;
	return same2;
}
