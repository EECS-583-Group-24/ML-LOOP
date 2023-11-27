#include "stdio.h"
#include <stdlib.h>

int main (){
  const int size=200000;
  int array[size];
  int N;
  scanf("%d",&N);
  for (int i=0; i<N; i++){
    scanf("%d",&array[i]);
  }

  for (int i=0; i<N; i++){
    int max = -1;
    for (int j=0; j<N; j++){
      if (i==j){
	continue;
      }
      if (max<array[j]){
	max = array[j];
      }
    }
    printf("%d\n",max);
  }
  return 0;
}
