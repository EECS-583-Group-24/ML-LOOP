#include<stdio.h>

int main(){
  int N,i,r,max;
  scanf("%d",&N);
  
  int A[N];
  
  for(i=0;i<N;i++){
    scanf("%d",&A[i]);
  }
  for(i=0;i<N;i++){
  	for(r=0;i<N;r++){
    	if(r != i){
          if(A[r] > max)max = A[r];
        }
    }
    printf("%d",max);
  }
    return 0;
}