#include<stdio.h>


int main(){
  double w,h;
  int x,y;
  scanf("%lf%lf%d%d",&w,&h,&x,&y);
  printf("%lf",(w*h)/2);
  if(x*2==w&&y*2==h){
    printf(" %d",1);
  }else{
    printf(" %d",0);
  }
  return 0;
}
