#include<stdio.h>
int main()
{
  int N,i,j,max,B;
  scanf("%d",&N);
  int A[N];
  for(i=0;i<N;i++)
  {
    scanf("%d",&A[i]);
  }
  for(i=0;i<N;i++)
  {
    B=A[i];
    A[i]=0;
    max=0;
    for(j=0;j<N;j++)
    {
      if(A[j]>max)
      {
        max=A[j];
      }
    }
    A[i]=B;
    printf("%d\n",max);
  }
}