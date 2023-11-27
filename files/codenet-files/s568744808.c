#include<stdio.h>
int main(){
  int n;
  int max=0;
  int max1=0;
  int count=0;
  int a[200000];
  int ans;
  scanf("%d",&n);
  for(int i=0;i<n;i++){
    scanf("%d",&a[i]);
    if(a[i]>max){
      max1=max;
      max=a[i];
    }
    else if(a[i]>max1){
      max1=a[i];
    }
  }
  
  for(int i=0;i<n;i++){
    if(max==a[i]){
      count+=1;
    }
  }
  
  for(int i=0;i<n;i++){
    if(count!=1){
      ans=max;
    }
    else{
      if(a[i]==max){
        ans=max1;
      }
      else{
        ans=max;
      }
    }
          printf("%d\n",ans);
  }
    
  return 0;
}


