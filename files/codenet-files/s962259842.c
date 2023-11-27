#include<stdio.h>
int main(){
  int w,h,x,y;
  double ans=0;
  int cut=0;
  scanf("%d %d",&w,&h);
  scanf("%d %d",&x,&y);
  ans=w*h/2;
  if(x==w/2&&y==h/2){
    cut=1;
  }
  printf("%f %d",ans,cut);
  return 0;
}