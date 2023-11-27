#include<stdio.h>
int main(){
  int a,b,sum,n,m;

  while(scanf("%d %d",&a,&b)!=EOF){
    sum=a+b;
    m = 1;
    for ( n = 1; n <= 1000000; n = n*10){
      if(n<=sum && sum<n*10){printf("%d\n", m);}
      m = m+1;
    }
    
  }
  return 0;
}
