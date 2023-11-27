#include <stdio.h>
int main(void) {
  int n, ans=0, d=1;
  scanf("%d", &n);
  for (int i=0; i<3; i++) {
    if (n%10 == 1) {
      ans += 9*d;
    }else {
      ans += d;
    }
    d *= 10;
    n /= 10;
  }
  printf("%d\n", ans);
  return 0;
}
