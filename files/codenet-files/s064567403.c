#include<stdio.h>

int main(void){
  int n;
  scanf("%d",&n);
  int i;
  int a[n];
  for(i=0;i<n;i++){
    scanf("%d",&a[i]);
  }
  int max=0;
  int j;
  for(i=0;i<n;i++){
    max=0;
    for(j=0;j<n;j++){
      if(i!=j&&a[j]>max){
        max=a[j];
      }
    }
    printf("%d\n",max);
  }
}