#include <stdio.h>
#include <stdlib.h>

int main(void){
  int c, i, j;
  long int a, b, d;
  char tmp[8];
  c = 'a';
  for(j = 0; c != EOF && j < 200; j++){
    i = 0;
    while((c = getchar()) != EOF && c != '\n'){
      tmp[i] = c;
      if(c == ' '){
        tmp[i] = '\0';
        a = atol(tmp);
        i = 0;
        continue;
      }
      i++;
    }
    tmp[i] = '\0';
    b = atol(tmp);

    d = a + b;
    for(i = 0; d != 0; i++){
      d /= 10;
    }
    printf("%d\n", i);
  }
  return 0;
}