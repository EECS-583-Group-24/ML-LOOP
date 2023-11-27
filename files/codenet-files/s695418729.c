#include<stdio.h>
int main()
{
  double w,h,x,y;
  double p1,p2,q1,q2;
  double a,b;
  
  scanf("%lf %lf %lf %lf",&w,&h,&x,&y);
  
  p1=x*h;
  p2=(w*h)-p1;
  q1=y*w;
  q2=(w*h)-q1;
  
  if(p1>=p2){
    a=p2;
  }
  else{
    a=p1;
  }
  
  if(q1>=q2){
    b=q2;
  }
  else{
    b=q1;
  }
  
  if(a>b){
    printf("%lf 0",a);
  }
  else if(b>a){
    printf("%lf 0",b);
  }
  else if(a==b){
    printf("%lf 1",a);
  }
  
  return 0;
}