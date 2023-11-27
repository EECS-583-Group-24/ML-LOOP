#include <stdio.h>

int main(){

  int i,k,n;

  scanf("%d",&n);

  int a[100];

  for(i=1;i<=n;i++){

    scanf("%d",&a[i-1]);

  }

  for(k=n;k>=1;k--){

    printf("%d ",a[k-1]);

  } 

  printf("\b\n");

  return 0;

}