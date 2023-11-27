#include<stdio.h>
int main(){
  int w,h,x,y;
  int cut;
  float ans;
  scanf("%d %d %d %d",&w,&h,&x,&y);
  ans=(double)w*h/2;
  if(w==x*2 && h==y*2){
    cut=1;
  }
  else cut=0;
  printf("%f %d",ans,cut);
  return 0;
}
