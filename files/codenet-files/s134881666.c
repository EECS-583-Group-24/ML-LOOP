#include <stdio.h>
int main(void)
{
  int n, a, b, c;
  scanf("%d", &n);
  a = n / 100;
  b = n / 10 - a * 10;
  c = n - a * 100 - b * 10;
   if (a==1) {
    a = 9;
  }
  else if (a==9) {
    a = 1;
  }
 if (b==1) {
   b = 9;
 }
 else if (b==9) {
   b = 1;
 }
 if (c==1) {
  c = 9;
}
else if (c==9) {
  c = 1;
}
n = 100 * a + 10 * b + c;
printf("%d", n);
return 0;
}
