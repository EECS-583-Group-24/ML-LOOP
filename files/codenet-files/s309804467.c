#include <stdio.h>

int main(void) {
int N,A[N];
scanf("%d",&N);
for(int k=0;k<N;k++)
  scanf("%d",&A[k]);

int max=A[0];
int i,po,ex=A[0];
for(i=0;i<N;i++)
  if(max<A[i])
    max=A[i];
for(i=0;i<N;i++)
  if(A[i]==max){
    po=i;
  for(int j=0;j<i;j++)
    if(ex<A[j])
      ex=A[j];
  for(int j=i+1;j<N;j++)
    if(ex<A[j])
      ex=A[j];
   }
int n;
for(n=0;n<po;n++)
  printf("%d\n",max);
printf("%d\n",ex);
for(n=po+1;n<N;n++)
  printf("%d\n",max);
  return 0;
}