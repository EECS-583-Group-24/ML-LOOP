#include <stdio.h>

int main(void) {
  int N;
  if ((scanf("%d", &N))!=1) {
    fprintf(stderr, "scanf error\n");
  }
  int *array;
  for (int i = 0; i < N; i++) {
    if ((scanf("%d", array+i))!=1) {
      fprintf(stderr, "scanf error\n");
    }
  }

  for (int i = 0; i < N; i++) {
    int max = 0;
    for (int j = 0; j < N; j++) {
      if (j != i) {
        if (*(array+j)>max) {
          max = *(array+j);
        }
      }
    }
    printf("%d\n", max);
  }

  return 0;
}
