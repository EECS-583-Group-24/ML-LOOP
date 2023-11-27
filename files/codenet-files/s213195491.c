#include <stdio.h>
#include <string.h>
int main() {
  int input;
  scanf("%d",&input);
  int a	= input	/ 100;
  int c	= input	% 100;
  int b	= input	- (100*a + c);

  if (a == 1) {
    a = 9;
  } else {
    a = 1;
  }

  if (b == 1) {
    b = 9;
  } else {
    b = 1;
  }

  if (c == 1) {
    c = 9;
  } else {
    c = 1;
  }

  int output = 100*a + 10*b + c;
  printf("%d\n",output);
  return 0;
}