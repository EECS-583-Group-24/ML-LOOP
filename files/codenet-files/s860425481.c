#include <stdio.h>
#include <math.h>

int gcd (x, y){
  long tmp = 0;;
  if(x < y){
    tmp = x;
    x = y;
    y = tmp;
  }
  while(y > 0){
    tmp = x % y;
    x = y;
    y = tmp;
  }

  return x;
}

int main(){
  long x, y;

  scanf("%d %d", &x, &y);

  printf("%d\n",gcd(x, y));

  return 0;
}