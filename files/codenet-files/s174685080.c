#include<stdio.h>
int main(){
  double w,h,x,y;
  double squ,tri;
  int cnt=0;
  scanf("%lf %lf %lf %lf",&w,&h,&x,&y);
  if(x<w/2){
    if(y<h/2){
      if(x*h==y*w){
        squ = x*h; cnt=1;
      }else if(x*h>y*w)
        squ = x*h;
      else
        squ = y*w;
    }else{
      if(x*h==(h-y)*w){
        squ = x*h; cnt=1;
      }else if(x*h>(h-y)*w)
        squ = x*h;
      else
        squ = (h-y)*w;
    }
  }else{
    if(y<h/2){
      if((w-x)*h==y*w){
        squ = (w-x)*h; cnt=1;
      }else if((w-x)*h>y*w)
        squ = (w-x)*h;
      else
        squ = y*w;
    }else{
      if((w-x)*h==(h-y)*w){
        squ = (w-x)*h; cnt=1;
      }else if((w-x)*h>(h-y)*w)
        squ = (w-x)*h;
      else
        squ = (h-y)*w;
    }
  }
  if(x==0 || y==0 || x==w || y==h){
    tri = w*h/2;
    if(x==w/2 || y==h/2)
      tri = 0;
  }else if(w-x<h-y)
    tri = 2*(w-x)*(w-x);
  else
    tri = 2*(h-y)*(h-y);
  if(squ==tri){
    cnt=1;
    printf("%f %d\n",squ,cnt);
  }else if(squ>tri)
    printf("%f %d\n",squ,cnt);
  else
    printf("%f %d\n",tri,cnt);
}