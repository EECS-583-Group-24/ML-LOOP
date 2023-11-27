#include<stdio.h>

int main(){
  int N,n,a[200000],max1=0,k,max2=0,i;
  
  scanf("%d",&n);
  for(i=0;i<n;i++){
    scanf("%d",&a[i]);
  }
  for(i=0;i<n;i++){
    if(max1<a[i]){
      max1=a[i];
      k=i;
    }
  }
  for(i=0;i<n;i++){
    if(i == k){
      i++;
    }
    if(max2<a[i]){
      max2=a[i];
    }
  }
   for(i=0;i<n;i++){
      if(i != k){
        printf("%d\n",max1);
      }else{
        printf("%d\n",max2);
      }
    }
    
  return 0;
}