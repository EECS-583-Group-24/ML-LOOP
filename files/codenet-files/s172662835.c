#include <stdio.h>

int main(void){
  int n;
  scanf("%d", &n);
  int m, temp;
  int ans[3];
  m = n;
  for(int i = 2; i >= 0; i--){
    ans[i] = m % 10;
    m /= 10;
  }
  for(int i = 0; i < 3; i++){
    if(ans[i] == 1) ans[i] = 9;
    else ans[i] = 1;
  }
  printf("%d\n", ans[0] * 100 + ans[1] * 10 + ans[2]);
  return 0;
}