#include <stdio.h>

int main()
{
	float numero1,numero2;
	printf("Inserisci 2 numeri reali\n");
	scanf("%f%f", &numero1, &numero2);
	printf("Il prodotto dei numeri %f e %f e':\n%f\n" ,numero1,numero2, numero1*numero2);
}
