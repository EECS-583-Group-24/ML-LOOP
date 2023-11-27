#include<stdio.h>
int main(void){
  
double w=0;
double h=0;
double x=0;
double y=0;
double max;
  
scanf("%lf %lf %lf %lf", &w,&h,&x,&y);
  
max=(w*h)/2;

if(w==x*2 && h==y*2){
  printf("%lf %d",max,1);
}else{
  printf("%lf %d",max,0);
}

return 0;
}