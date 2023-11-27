#include <stdio.h>

int main(){

  int i,k,n;

  scanf("%d",&n);

  int a[n];

  for(i=1;i<=n;i++){

    scanf("%d",&a[i]);

  }

  for(k=n;k>=1;k--){

    printf("%d ",a[k]);

  } 

  printf("\b\n");

  return 0;

}