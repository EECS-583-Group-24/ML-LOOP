#include<stdio.h>
#include<stdlib.h>
#include<math.h>

#define df 0

int main(){
  int w,h,x,y;
  scanf("%d%d%d%d",&w,&h,&x,&y);
 printf("%lf %d",w*h*1.0/2,(w%2==0 && h%2==0 && w/2==x && h/2==y)?1:0);
}

///  confirm df==0  ///
