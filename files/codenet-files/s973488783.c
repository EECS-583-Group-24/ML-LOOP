#include<stdio.h>
int main(){
  int i,n,max=0,sec=0;
  scanf("%d",&n);
  int a[n+1];
  for(i=0;i<n;i++){
    scanf("%d",&a[i]);
    if(a[i]>max){
      sec=max;
      max=a[i];
    }
    else if(a[i]>sec)
      sec=a[i];
  }
  for(i=0;i<n;i++){
    if(a[i]==max)
      printf("%d\n",sec);
    else
      printf("%d\n",max);
  }
  return 0;
}
