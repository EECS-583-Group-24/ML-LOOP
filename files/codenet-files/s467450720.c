#include <stdio.h>

int main(void){
  int a[3]=000;
  for(int i=1;i<=3;i++){
  if(a[i]==1){
    a[i]=9;
  }else {
    a[i]=1;
  }
  }
  printf("%d",a);
  return 0;
}