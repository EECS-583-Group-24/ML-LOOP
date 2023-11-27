#include<stdio.h>
int main(){
  int n,a[200001],i,sec=0,max=0;
  scanf("%d",&n);
  for(i=0; i<n; i++){
    scanf("%d",&a[i]);
    if(a[i]>max){
      sec=max;
      max=a[i];
    }
    else if(a[i]>sec){
      sec=a[i];
    }
  }
  for(i=0; i<n; i++){
    if(a[i]==max){
      printf("%d\n",sec);
    }
    else{
      printf("%d\n",max);
    }
  }
  return 0;
}
