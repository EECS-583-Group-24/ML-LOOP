#include<stdio.h>
#include<stdlib.h>

struct unit{
  int a;
  int number;
};

int main(void){
  int N,i,j;
  unit *A;
  scanf("%d",&N);
  A=(unit*)malloc(sizeof(unit)*N);
  for(i=0;i<N;i++){
    scanf("%d",&A[i].a);
    A[i].number=i;
  }
  for(i=0;i<2;i++){
    for(j=N-1;j>i;j--){
      if(A[j].a>A[j-1].a){
        int tmpA,tmpnum;
        tmpA=A[j-1].a;
        tmpnum=A[j-1].number;
        A[j-1].a=A[j].a;
        A[j-1].number=A[j].number;
        A[j].a=tmpA;
        A[j].number=tmpnum;
      }
    }
  }
  for(i=0;i<N;i++){
    if(i!=A[0].number){
      printf("%d\n",A[0].a);
    }else{
      printf("%d\n",A[1].a);
    }
  }
  free(A);
  return 0;
}