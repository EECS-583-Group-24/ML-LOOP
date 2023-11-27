#include<stdio.h>

int main(){
  int n;
  int a[1000000];
  scanf("%d",&n);
  for(int i=0;i<n;i++){
    scanf("%d",&a[i]);
  }
  
  int best=0,second=0;
  int number=-1;
  for(int i=0;i<n;i++){
    if(best<a[i]){
      second=best;
      best=a[i];
      number=i;
    }else if(second<a[i]){
      second=a[i];
    }
  }
  
  for(int j=0;j<n;j++){
    if(j==number) printf("%d\n",second);
    else printf("%d\n",best);
  }
  
  return 0;
}