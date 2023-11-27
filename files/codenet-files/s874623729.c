#include <stdio.h>

int main(void)
{
  int i, n;
  scanf("%d", &n);
  int array[n];
  int max;
  int second_max;
  int ith_max[n];
  for(i = 0; i < n; i++) {
    scanf("%d", &array[i]);
  }

  max = array[0];
  second_max = array[1];
  for(i = 1; i < n; i++) {
    if(max < array[i]) {
      second_max = max;
      max = array[i];
    }
    else if(second_max < array[i]) {
      second_max = array[i];
    }
  }

  for(i = 0; i < n; i++) {
    if(array[i] < max) {
      ith_max[i] = max;
    }
    else {
      ith_max[i] = second_max;
    }
  }

  for(i = 0; i < n; i++) {
    printf("%d\n", ith_max[i]);
  }

  return 0;
}
