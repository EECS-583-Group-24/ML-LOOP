#include <stdio.h>

void Do(int n){
  if(n > 10) Do(n / 10);
  if(n % 10 == 1) printf("9");
  else printf("1");
}

int main(void){
  int n;
  scanf("%d", &n);
  Do(n);
  printf("\n");
  return 0;
}
