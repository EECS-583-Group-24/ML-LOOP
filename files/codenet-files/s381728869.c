#include<stdio.h>
main(){
  long a,b,n,ans=0;
  while(scanf("%d %d",&a,&b)!=EOF){
    n=a+b;
    while(n>0){
      n/=10;
      ans++;
    }
    if(ans==0) ans++;
    printf("%d\n",ans);
    ans=0;
  }
  return 0;
}