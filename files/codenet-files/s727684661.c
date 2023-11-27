#include<stdio.h>
#include <stdlib.h>

int desc(const void *a, const void *b) {
  return *(int *)b - *(int *)a;
}

int main(void)
{
  int n;
  int a[20000];
  int b[20000];
  int i,j;
  int p;
  
  scanf("%d",&n);
  for(i=0;i<n;i++)
  {
    scanf("%d",&a[i]);
    b[i]=a[i];
  }
  
  /*for(i=0;i<n-1;i++)
  {
    for(j=0;j<n-i-1;j++)
    {
      if(a[i]<a[i+1])
      {
        p=a[i+1];
        a[i+1]=a[i];
        a[i]=p;
      }
    }
  }*/
  


  qsort(a, sizeof(a) / sizeof(*a), sizeof(*a), desc);
  
  for(i=0;i<n;i++)
  {
    if(b[i]==a[0])
      printf("%d\n",a[1]);
    else
      printf("%d\n",a[0]);
  }
  return 0;
}