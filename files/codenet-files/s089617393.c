#include<stdio.h>
int main(void){
  int n;
  int a[200000];
  int i,mi;
  int max;
  int max2=0;
  scanf("%d",&n);
  max=0;
  for(i=0;i<n;i++){
    scanf("%ld",&a[i]);
    if(max < a[i]){
      max=a[i];
      mi=i;
    }
  }
  
  for(int j=0;j<n;j++){
    if(max>a[j])printf("%d\n",max);
    else{
      for(i=0;i<n;i++){
        if(max2<a[i]&&max>a[i]){
          max2=a[i];
        }
      }
      printf("%d\n",max2);
    }
  }
  return 0;
}