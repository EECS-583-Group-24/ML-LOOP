#include <stdio.h>
int main(void){
  long long N;
  long long A[2000010];
  scanf("%lld",&N);
  int max=0;
  int max2=0;
  int i;
  for(i=0;i<N;i++){
    scanf("%lld",&A[i]);
    if(max<A[i]){
      max=A[i];
    }
    if((max2<A[i])&&(max>A[i])){
      max2=A[i];
    }
  }
  for(i=0;i<N;i++){
    if(A[i]==max){
      if(max2==0){
        printf("%lld\n",max);
      }
      else{
        printf("%lld\n",max2);
      }
    }
    else{
      printf("%lld\n",max);
    }
  }
  return 0;
}