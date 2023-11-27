#include <stdio.h>
#include <stdlib.h>

int compare_int(const void *a, const void *b)
{
    return *(int*)a - *(int*)b;
}

int main(){
  int n,max=1,semimax=1,i;
  int a[200001],b[200001];
  scanf("%d",&n);
  
  for(i=0;i<n;i++){
    scanf("%d",&a[i]);
    b[i]=a[i];
  }
  
  qsort(b,n,sizeof(int),compare_int);
  
  max=b[n-1];
  semimax=b[n-2];
  
  for(i=0;i<n;i++){
    if(a[i]==max)printf("%d\n",semimax);
    else printf("%d\n",max);
  }
  
  return 0;
}