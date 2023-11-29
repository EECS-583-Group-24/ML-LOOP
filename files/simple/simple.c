#include <stdio.h>

#define SIZE 1500

int main()
{

  int in[SIZE];
  int i,j;

  for (i = 0; i < SIZE; i++)
    in[i] = 0;

  for (j = 100; j < SIZE; j++)
    in[j] += 10;

  for (i = 0; i < SIZE; i++)
    in[i] *= i;

  for (j = 0; j< SIZE; j++)
    fprintf(stdout,"%d\n", in[j]);

  return 1;
}

