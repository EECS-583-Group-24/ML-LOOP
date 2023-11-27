#include <stdio.h>

int digit(int n){
  int d=1;
  while(n>=10){
    d++;
    n/=10;
  }
  return d;
}

int main(void){
  int a,b;
  while(1){
    scanf("%d %d",&a,&b);
    printf("%d\n",digit(a+b));
  }
  return 0;
}