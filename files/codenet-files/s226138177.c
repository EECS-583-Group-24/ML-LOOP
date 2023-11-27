#include<stdio.h>

int main(){
  int W,H,x,y, s;
  scanf("%d %d %d %d", &W,&H, &x, &y);
  if(x == y){
    s = 1;
  } else {
    s = 0;
  };
  printf("%f %d", (double)W*H/2 ,s);

  return 0;
}