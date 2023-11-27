#include<stdio.h>
int main(void)
{
  int n;
  int num[n];
  scanf("%d",&n);
  for(int i=0;i<n;i++){
    scanf("%d",&num[i]);
  }
  for(int j=(n-1);j>=0;j--){
    if(j==(n-1)){
      printf("%d",num[j]);
    }else{
      printf(" %d",num[j]);
    }
  }
  printf("\n");
  return 0;
}
   
