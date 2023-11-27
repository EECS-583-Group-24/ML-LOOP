#include<stdio.h>
int main(){
  int w,h,x,y,c;
  double s;
  scanf("%d%d%d%d", &w, &h, &x, &y);
  if(x*2==w && y*2==h){
    c=1;
  }else{
    c=0;
  }
  s=(double)w*h/2;
  printf("%lf %d", s, c);
  return 0;
}