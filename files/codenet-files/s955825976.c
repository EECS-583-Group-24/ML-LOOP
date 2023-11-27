#include<stdio.h>
int main(void)
{
  int w,h,x,y;
  scanf("%d%d%d%d",&w,&h,&x,&y);
  if(2*x==w&&2*y==h){
    printf("%9f 1",(double)((h*w)/2));
  }else{
    printf("%9f 0",(double)((h*w)/2));
  }
  return 0;
}
