#include <stdio.h>
int main(){
  float H,W,x,y;
  scanf("%f %f %f %f",&H,&W,&x,&y);
  int c = 0;
  if (x*2==(int)H && y*2==(int)W){
    c = 1;
  }
  H = H*(W/2);
  printf("%f %d\n",H,c);
}