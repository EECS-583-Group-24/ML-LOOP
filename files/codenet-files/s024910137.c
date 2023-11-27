//atcoder clange
#include <stdio.h>
int main(void){
    int N;
      scanf("%d", &N);//数値の取得
  int i= 0;
  int A[N];
  for(i=0;i<N;i++){
	scanf("%d",&A[i]);
  }
	int save = 0;
  int max1 = 0;
  
  /*
  for(i=0;i<N;i++){
	save = A[i];
    A[i] = 0;
   	nummax = max(A,N);
    printf("%d\n",nummax);
    A[i] = save;
     } 
     */
  int no_1 = 0;
  int no_2 = 0;
  
  for(i=0;i<N;i++){
	if(no_1 < A[i]){
        no_2=no_1;
        no_1=A[i];
    }else if(no_2 < A[i]){
        no_2=A[i];
    }
  }
    
  for(i=0;i<N;i++){
   if(A[i] == no_1){
    printf("%d\n",no_2); 
   }else{
    printf("%d\n",no_1); 
   }
  }
    
  
    return 0;
}
     
     
