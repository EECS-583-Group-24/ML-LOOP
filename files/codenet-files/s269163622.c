#include <stdio.h>
int main(){
  int a,b,c,d=0;
  scanf("%d",&a);
  scanf("%d",&b);
  scanf("%d",&c);
  scanf("%d",&d);
  ans = (a*b)/2;
  if(a==b &&  c==d){
    ans2 = 1;
  }
  printf("%d %d",ans,ans2);
  return 0;
}
    