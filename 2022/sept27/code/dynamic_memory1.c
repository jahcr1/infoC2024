#include <stdio.h>
#include <stdlib.h>
#define TAM 1l<<30
// Quien pide uno pide TAM

int main(void)
{

  int* parreglo;
  int tam;

  tam = 1l<<29;

  parreglo = malloc(sizeof(int) * tam);

  scanf("%d", &tam);

  return 0;
}
