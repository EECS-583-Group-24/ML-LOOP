#include <stdio.h>

#define SIZE 5

int main()
{
  int i, j, k, l;

  int result = 0;
  for (i = 0; i < SIZE; i++) {
    for(j = 0; j < SIZE; j++) {
      result++;
    }

    for(j = 0; j < SIZE; j+=2) {
      result++;
      for(k = 0; k < SIZE; k++) {
        result++;
      }
    }
  }

  for (i = 0; i < SIZE; i++) {
    for(j = 0; j < SIZE; j++) {
      result++;
    }

    for(j = 0; j < SIZE; j+=2) {
      result++;
      for(k = 0; k < SIZE; k++) {
        result++;
      }
    }
  }
  
  //fprintf(stdout,"%d\n", result);

  return 0;
}

