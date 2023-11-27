#include <stdio.h>
#include <stdlib.h>

int main() {
  char s[4];
  fgets(s, 4, stdin);
  for (int i=0; i<3; i++) {
    if (s[i] == '1') s[i] = '9';
    else if (s[i] == '9') s[i] = '1';
  }
  int a = atoi(s);
  printf("%d\n", a);
  return 0;
}
