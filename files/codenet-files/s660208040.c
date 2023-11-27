#include<stdio.h>
int main(){
  int h,w,x,y;
  int s;
  scanf("%d %d %d %d",&w,&h,&x,&y);
  if(x == w/2 && y == h/2){
    printf("%lf %d",w*h/2,1);
  }else if(x == w/2 || y == h/2){
    printf("%lf %d",w*h/2,0);
  }else{
    if( x < w/2 && y < h/2){
      if( y*w <= x*h){
        printf("%lf %d",y*w,0);
      }else{
        printf("%lf %d",x*h,0);
      }
    }
    if( x < w/2 && y > h/2){
       if( (h-y)*w <= x*h){
          printf("%lf %d",(h-y)*w,0);
        }else{
          printf("%lf %d",x*h,0);
        }
    }
     if( x > w/2 && y > h/2){
       if( (h-y)*w <= (w-x)*h){
          printf("%lf %d",(h-y)*w,0);
        }else{
          printf("%lf %d",(w-x)*h,0);
        }
     }
     if( x > w/2 && y < h/2){
       if(y*w <= (w-x)*h){
          printf("%lf %d",y*w,0);
        }else{
          printf("%lf %d",(w-x)*h,0);
        }
     }
  }
}