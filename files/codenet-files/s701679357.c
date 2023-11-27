#include<stdio.h>
int main(){
  
  int data[101];
  int i,n;
  
  scanf("%d",&n);
  
  for(i = 1;i <= n;i++){
    scanf("%d",&data[i]);
  }

  for(;0 < n;n--){
    printf("%d ",data[n]);
  }
  
  
  return(0);
}

