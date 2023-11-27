#include<stdio.h>


int main(void){
  double w;
  double h;
  double x;
  double y;
  scanf("%lf",&w);
  scanf("%lf", &h);
  scanf("%lf", &x);
  scanf("%lf", &y);
  double s[4];
  s[0] = x*h;
  double min1 = 0;
  double min2 = 0;
  s[1] = (w-x)*h;
  s[2] = y*w;
  s[3] = (h-y)*w;
  int i;
  int count = 0;
  double max=0;
  if(s[0]>s[1]){
    min1 = s[1];
  }else{
    min1 = s[0];
  }
  if(s[0]==0||s[1]==0){
    min1 = w*h;
  }
  if(s[2]>s[3]){
    min2 = s[3];
  }else{
    min2 = s[2];
  }
  if(s[2]==0||s[3]==0){
    min2 = w*h;
  }
  if(min1<min2){
    max = min2;
  }else if(min2<min1){
    max = min1;
  }else{
    max = min1;
    count = 1;
  }
  printf("%lf", max);
  printf(" %d", count);
}