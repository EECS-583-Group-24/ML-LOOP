#include <stdio.h>

int main() {
  char s[16];
  char buf[16];
  int top = 0;
  int i;
  
  scanf("%s", s);
  for(i = 0; s[i] != '\0'; i++) {
    if(s[i] == 'B') {
      if(top > 0) top--;
    } else {
      buf[top] = s[i];
      top++;
    }
  }
  for(i = 0; i < top; i++) printf("%c", buf[i]);
  printf("\n");
  
  return 0;
}