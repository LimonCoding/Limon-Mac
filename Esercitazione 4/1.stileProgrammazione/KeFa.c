#include <stdio.h>
#include <math.h>

/*SCOPERTO! QUESTO PROGRAMMA VERIFICA SE IL NUMERO INSERITO DALL'UTENTE E' PRIMO*/

int main()  {
  int num, divisore, nonPrimo, radiceQuadrata;  //pre-condizione: num>0
  do {
    printf("Ciao utene, scrivi un numero >0 e io verifico se e' primo\n");
    scanf("%d", &num);
  } while(num<=0);
  divisore = 2;
  nonPrimo = 0;
  radiceQuadrata = (int)sqrt(num);
  /*
    Il programma esce dal ciclo:
    o se verifica che il numero inserito 'num' diviso 'divisore' non da' resto
    oppure se il 'divisore' viene incrementato raggiungendo
    la seguente condizione 'divisore > radiceQuadrata'
    */
    while (!nonPrimo && (divisore<=radiceQuadrata))  {
      if (num%divisore==0)
        nonPrimo = 1;
      divisore++;
    }
  if (nonPrimo==1)
    printf("NON e' un numero primo");
  else
    printf("E' un numero primo");
    return 0;
}
