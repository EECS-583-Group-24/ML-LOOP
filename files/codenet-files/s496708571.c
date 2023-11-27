#include <stdio.h>
#include <stdlib.h>
 
int main(void)
{
  int *a;
  int N;
  scanf("%d",&N);
  a = (int)malloc(sizoof(int)*N);
  int i,m1= 0,m2=0;
  for(i = 0; i<N;i++){
    scanf("%d",a+i);
    m1 = (m1>a[i]) ? m1:a[i];
    m2 = (m1> a[i] && a[i] > m2) ? a[i]:m2;
  }
  for(i = 0;i<N;i++){
    if(m1 != a[i]) printf("%d",m1);
    else  printf("%d",m2);
  }
  return 0;
} 