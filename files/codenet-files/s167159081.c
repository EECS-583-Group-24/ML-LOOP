#include <stdio.h>

int main(){
  int n;
  int i, j;
  int max = 0, max2 = 0;
  int r = 0;

  scanf("%d",&n);

  int a[n];

  for(i=0;i<n;i++){
    scanf("%d",&a[i]);
  }

  for(i=0;i<n;i++){
    if(a[i] > max){
      max = a[i];
    }
  }

  for(i=0;i<n;i++){
    if(a[i] == max && r == 0){
      for(j=0;j<n;j++){
        if(i == j)continue;
        if(a[j] > max2){
          max2 = a[j];
        }
      }
      printf("%d\n",max2);
      r++;
      continue;
    }
    printf("%d\n",max);
  }

  return 0;
}