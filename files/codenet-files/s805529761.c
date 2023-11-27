#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main()
{
  int N;
  int* A;
  int i, j, k;
  int max=0, max2=0;

  scanf("%d", &N);

  A = (int *)malloc(N * sizeof(int));

  for(i=0; i<N; i++){
    scanf("%d", &A[i]);
  }

  for(i=1; i<N; i++){
    if(max < A[i]){
      max = A[i];
      k=i;
    }
  }
  printf("%d\n", max);

  for(i=0; i<N; i++){
    if(i==k){
      for(j=0; j<N; j++){
        if(max2 < A[j] && j != k){
           max2 = A[j];
         }
      }
      printf("%d\n", max2);
    }else{
      printf("%d\n", max);
    }
  }


  free(A);

  return 0;

}