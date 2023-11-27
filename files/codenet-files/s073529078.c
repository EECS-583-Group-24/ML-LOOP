#include <stdio.h>
main(){
  int a,b,k,ans=0;
  while(scanf("%d %d",&a,&b)!=EOF){
  k=a+b;
  do{    
    k/=10;
    ans++;
  } while(k>0);
  printf("%d\n",ans);
  }
  return 0;
}