#include <stdio.h>
 
int main(void)
{
  int N, i1 = -1, m1 = 0, m2 = 0;
  scanf("%d", &N);
  for(int i = 0; i < N; i++){
    int A;
    scanf("%d", &A);
    if(m1 < A){
        i1 = i;
        m1 = A;
    } else if(m2 < A)
        m2 = A;
  }
  for(int i = 0; i < N; i++)
    printf("%d\n", i == i1 ? m2 : m1);
  return 0;