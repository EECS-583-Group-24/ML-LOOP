#include <stdio.h>

int main()
{
  int n, a[200000], i, max, max2, mnum = 0;
  
  scanf("%d", &n);
  
  for(i = 0; i < n; i++){
    scanf("%d", &a[i]);
  }
  max = max2 = a[0];
  for(i = 1; i < n; i++){
    if(max < a[i]){
      max2 = max;
      mnum = i;
      max = a[i];
    }
    else if(max2 < a[i])
      max2 = a[i];
  }
  
  for(i = 0; i < n; i++){
    if(mnum == i)
      printf("%d\n", max2);
    else
      printf("%d\n", max);
  }
  
  return 0;
}