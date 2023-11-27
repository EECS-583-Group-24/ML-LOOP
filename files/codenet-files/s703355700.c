#include<stdio.h>
int maxi(int a,int b){
  if(a>b) return a;
  return b;
}
  
int main(void){
  int n,max=0,i,j;
  scanf("%d",&n);
  int a[n];
  for(i=0;i<n;i++) scanf("%d",&a[i]);
  int ans[n];
  for(i=1;i<n;i++) max = maxi(max,a[i]);
  ans[0] = max;
  for(i=0;i<n-1;i++){
    if(ans[i]<a[i]) ans[i+1] = a[i];
    else if(ans[i]==a[i+1]){
      max = 0;
      for(j=0;j<n;j++){
        if(i+1!=j){
          max = maxi(max,a[j]);
        }
      }
      ans[i+1] = max;
    }
  }
  for(i=0;i<n;i++) printf("%d\n",ans[i]);
  return 0;
}