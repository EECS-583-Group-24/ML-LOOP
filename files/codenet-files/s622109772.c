#include <stdio.h>

int main(void){
  int n;
  scanf("%d",&n);
  int a[n],cnt[n];
  for(int i=0;i<n;i++){
    a[i]=0;
    cnt[i]=0;
  }
  for(int i=0;i<n;i++){
    scanf("%d",&a[i]);
  }
    for(int i=0;i<n;i++){
      for(int j=0;j<n;j++){
        if(i!=j){
          if(cnt[i]<a[j]){
            cnt[i]=a[j];
          }
        }
      }
  }
  for(int i=0;i<n;i++){
    printf("%d\n",cnt[i]);
  }

}
