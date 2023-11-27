// abc134c: Exception Handling
#include <stdio.h>
#define MAX 200001
int main(){
  int n,a[MAX];
  scanf("%d",&n);
  int max1 = 0;
  int max2 = 0;
  for(int i=0;i<n;i++){
    scanf("%d,",a+i);
    if(max1<a[i]){
      max1 = a[i];
    }
    if(max2<a[i] && a[i]<max1){
      max2 = a[i];
    }
  }

  for(int i=0;i<n;i++){
    int max = 0;
    if(a[i]==max1){
      if(max2==0){
        max = max1;
      }else{
        max = max2;
      }
    }else{
      max = max1;
    }
    printf("%d\n",max);
  }
  return 0;
}