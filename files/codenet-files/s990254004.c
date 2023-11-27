#include <stdio.h>
#include <string.h>
 
int main(void){
  long long int n;
  long long int max=0;
  long long int next=0;
  long long int a[20005000];
  long long int ans;
  long long int i;
 
  scanf("%lld",&n);
  for (i=0; i<n; i++){
    scanf("%lld", &a[i]);
    if(max<=a[i]){
      next=max;
      max=a[i];
    }else if(next<a[i]){
      next=a[i];
    }
  }
  
  for(i=0; i<n; i++){
    ans=max;
    if(ans==a[i]){
      ans=next;
    }
    printf("%lld\n",ans);
  }
    
  
  return 0;
}
