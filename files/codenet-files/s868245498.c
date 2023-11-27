#include <stdio.h>
int main(void){
  int N;
  int A[2000010];
  int max=0;
  int t;
  int max2=0;
  int i;
  scanf("%d",&N);
  for(i=1;i<=N;i++){
    scanf("%d",&A[i]);
    if(max<A[i]){
      max=A[i];
      t=i;
    }
  }
  for(i=1;i<=N;i++){
    if((A[i]<max)&&(max2<A[i])){
      max2=A[i];
    }
  }
  if(max2==0){
    max2=max;
  }
  for(i=1;i<=N;i++){
    if(i==t){
      printf("%d\n",max2);
    }
    else{
      printf("%d\n",max);
    }
  }
  return 0;
}