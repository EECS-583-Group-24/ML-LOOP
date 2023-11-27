#include <stdio.h>

int main(void){
  int i, n, a[100];

  scanf("%d",&n);

  for(i = 0; i < n; i++) 
    scanf("%d", &a[i]);
  for(i = 1; i <= n; i++){
    printf("%d", a[n-i]);
    if(i == n)
      printf("\n");
    else
      printf(" ");
  }
  return 0;
}
