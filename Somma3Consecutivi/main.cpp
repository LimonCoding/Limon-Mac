#include <stdio.h>
#include <iostream>

int main(void)
{
	int elementi;
	int myarray[3];
	int n;
	printf("Ciao, immetti la quantità di numeri ");
	printf("interi che vuoi inserire\n");
	scanf("%d", &elementi);
		while ( elementi < 2 )
		{
			printf("immetti un altro valore > 2\n");
		scanf("%d", &elementi);
	}
	for (n=0; n!=3-1; n++)
		{
		printf("%d", myarray[n]);
	}
}
