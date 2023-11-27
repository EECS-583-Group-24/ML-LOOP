#include <stdio.h>

int main(){
  int w,h,x,y;//w=wiidth,h=height
  scanf("%d %d %d %d",&w,&h,&x,&y);
  double square = w*h/2.0;
  if(2*x == w && 2*y == h){
    printf("%lf 1",square);
  }else{
    printf("%lf 0",square);
  }
  return 0;
}