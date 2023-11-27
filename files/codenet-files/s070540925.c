#include<stdio.h>

int main(void){
  int w , h;
  scanf("%d %d",&w,&h);
  int x , y;
  scanf("%d %d",&x,&y);
  
  long double ans = (w*h)/2.0;
  printf("%10llf",ans);
 
  if(w%2 == 0 && h%2 == 0&&x == w/2 && y == h/2){
    printf(" 1");
  }
  else{
    printf(" 0");
  }
  
  return 0;
} 