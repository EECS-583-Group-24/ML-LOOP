#include<stdio.h>
#include<stdlib.h>

int main(){
  int n,i;
  scanf("%d",&n);
  int a[n];
  for(i=1;i<=n;i++){
    scanf("%d",&a[i]);
  }
  for(i=n;2<=i;i--){
    printf("%d ",a[i]);
  }
  printf("%d\n",a[1]);

  return 0;
}
