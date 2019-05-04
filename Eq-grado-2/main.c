#include <stdio.h>
#include <math.h>

int main(){
	float a, b, c;							//	coefficienti
	float d;									// discriminante
	float x1, x2;							// soluzioni
	
	/* INPUT */
	printf("Ciao utente, introduci i coefficienti di una");
	printf(" equazione di secondo grado.\n");
	scanf("%f", &a);
	scanf("%f", &b);
	scanf("%f", &c);

	d = b*b-4*a*c;
	if(d<0) printf("\nNon ci sono soluzioni reali.\n");
	else {
		if(d==0) {
			x1 = (-b)/(2*a); 
			printf("\nCi sono due soluzioni reali coincidenti pari a %f.\n", x1);
		}
		else {
			x1 = (-b-sqrt(d))/(2*a); 
			x2 = (-b+sqrt(d))/(2*a); 
			printf("\nCi sono due soluzioni reali distinte pari a %f ed a %f.\n", x1, x2);
		}
	}
}
