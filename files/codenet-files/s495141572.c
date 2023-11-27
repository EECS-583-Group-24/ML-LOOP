#include<stdio.h>
int main(){
  int w,h,x,y;
  float ans=0;
  int cut=0;
  scanf("%d %d %d %d",&w,&h,&x,%y);
  ans=(double)w*h/2;
  if(w==x*2 && h==y*2){
    cut=1;
  }
  printf("%f %d",ans,cut);
  return 0;
}
