#include <stdio.h>

int quantiUguali(int *interi, int i);
int coppia2uguali(int *interi, int i);

int main() {
	int interi[4];
	int i, uguali, coppia2;
	printf("Ciao utente, inserisci 4 interi e io controllo quali sono uguali fra di loro :\n");
	for(i=0; i<4; i++){
		scanf("%d", &interi[i]);
	}
	uguali=quantiUguali(interi, i);
	//coppia2=coppia2uguali(interi, i);

/* è possibile utilizzare l'istruzione condizionale 'if' con le diverse condizioni */

	//if(uguali==1&&coppia2==1)
		//printf("\nCi sono esattamente due coppie di numeri fra loro uguali\n");
	switch(uguali) {
		case 0:
		printf("\nCi sono esattamente 0 numeri fra loro uguali\n");
		break;
		case 1:
		printf("\nCi sono esattamente 2 numeri fra loro uguali\n");
		break;
		case 2:
		printf("\nCi sono esattamente 3 numeri fra loro uguali\n");
		break;
		case 3:
		printf("\nCi sono esattamente 4 numeri fra loro uguali\n");
		break;
	}
	scanf("%d\n", &i);
}

int quantiUguali(int *interi, int i){
	int same, j;
	for(i=0; i<4; i++) {
		j=1;
		if(interi[i]==interi[i+j])
			same=same+1;

	}
	return same;
}

/*int coppia2uguali(int *interi, int i){
	int same2, k;
		for(i=0; i<3; i++) {
			printf("\n%d", interi[i]);
		if(interi[i]==interi[i+k])
			same2=same2+1;
			k++;
	}
	return same2;
}*/
