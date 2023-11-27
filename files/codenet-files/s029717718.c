#include <stdio.h>

int main(void) {
  int N;
  scanf("%d", &N);
  int array[N];
  for (int i = 0; i < N; i++) {
    scanf("%d", &array[i]);
  }
  int max=0, max_i;
  for (int j = 0; j < N; j++) {  //最大値探索
    if (*(array+j)>max) {
      max = *(array+j);
      max_i = j;
    }
  }

  for (int i = 0; i < N; i++) {
    if (i!=max_i) {
      printf("%d\n", max);
    } else {
      int max2=0;
      for (int j = 0; j < N; j++) {
        if (j != i) {
          if (*(array+j)>max2) {
            max2 = *(array+j);
          }
        }
      }
      printf("%d\n", max);
    }
  }

  return 0;
}
