#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>

int main(){

  int n,i,j;
  int a[200007];
  int max = -999999;
  int t;
  int max2 = -999999;

  scanf("%d", &n);

  for(i = 1;i <= n;i++){
    scanf("%d", &a[i]);

    if(max < a[i]){
      max = a[i];
      t = i;
    }
  }

  for(i = 1;i <= n;i++){
    if(i != t) printf("%d\n", max);

    else{
      for(j = 1;j <= n;j++){
        if(j != t && max2 < a[j]) max2 = a[j];
      }

      printf("%d\n", max2);
    }
  }
  return 0;
}