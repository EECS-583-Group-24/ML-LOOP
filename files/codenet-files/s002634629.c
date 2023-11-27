#include <stdio.h>
int main(){
  int n,count,a[1000];
  scanf("%d",&n);
  for(count=0;count<n;count++){
    scanf("%d",&a[count]);
  }
  for(count=(n-1);count>=0;count--){
    printf("%d ",a[count]);
  }
  printf("\n");
  return 0;
}