#include <stdio.h>
#include <stdlib.h>

int main()
{
  int n, incepere[100], terminare[100], nr[100];
  int ora, min, i, aux, inlc;

  printf("Introduceti valoarea pentru n (nr. de spectacole): ");
  scanf("%d", &n);

  for (i = 0; i < n; i++)
  {
    nr[i] = i + 1;

    printf("Introduceti momentul de incepere al spectacolului (ora si minutul): ");
    scanf("%d %d", &ora, &min);
    incepere[i] = ora * 60 + min;

    printf("Introduceti momentul de terminare al spectacolului (ora si minutul): ");
    scanf("%d %d", &ora, &min);
    terminare[i] = ora * 60 + min;
  }

  while (inlc != 0)
  {
    inlc = 0;

    for (i = 0; i < n - 1; i++)
    {
      if (terminare[nr[i]] > terminare[nr[i + 1]])
      {
        aux = nr[i];
        nr[i] = nr[i + 1];
        nr[i + 1] = aux;
        inlc = 1;
      }
    }
  }

  for (i = 0; i < n; ++i) {
    if (incepere[nr[i + 1]] >= terminare[nr[i]]){
      printf("\nNumarul maxim posibil de spectacole este: %d ", nr[i] + 1);
    }
  }  

  return 0;
}
