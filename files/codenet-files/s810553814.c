#include <stdio.h>

int main(void){
  int n;
  scanf("%d", &n);
  int m, temp;
  int ans[3];
  m = n;
  for(int i = 2; i >= 0; i--){
    a[i] = m % 10;
    m /= 10;
  }
  for(int i = 0; i < 3; i++){
    if(a[i] == 1) a[i] = 9;
    else a[i] = 1;
  }
  printf("%d\n", a[0] * 100 + a[1] * 10 + a[2]);
  return 0;
}