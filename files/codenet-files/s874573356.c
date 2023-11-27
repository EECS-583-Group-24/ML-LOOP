#include <stdio.h>

int main(){
  int n,i,k;
  int a[100];
  scanf("%d", &n);
  for(k=0;k<n;k++){
    scanf("%d", &a[k]);
  }
  for(i=n-1;i>=0;i--){
    if(i!=n-1) printf(" ");
    printf("%d", a[i]);
  }
  printf("\n");
  return 0;
}