#include<stdio.h>
int main(){
  int w,h,x,y;
  float ans=0;
  int cut=0;
  scanf("%d %d",&w,&h);
  scanf("%d %d",&x,&y);
  ans=w*h/2;
  if((double)x==(double)w/2 && (double)y==(double)h/2){
    cut=1;
  }
  printf("%f %d",ans,cut);
  return 0;
}
