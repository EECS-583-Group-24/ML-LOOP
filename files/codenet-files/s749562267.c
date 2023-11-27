#include <stdio.h>

int main(void){
  int n, i;
  scanf("%d", &n);
  int a[n];
  for (i = 0; i < n; i++) {
    scanf("%d", &a[i]);
  }
  for (i = n - 1; i > n; i--) {
    printf("%d ", a[i]);
  }
  printf("%d\n", a[0]);
}
