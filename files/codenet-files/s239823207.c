#include<stdio.h>

int main(void){
  int W,H,x,y;
  scanf("%d%d%d%d",&W,&H,&x,&y);
  
  double s;
  s=(double)W*H/2;
  printf("%lf ",s);
  
  if(W==x*2&&H==y*2){
    printf("1");
  }
  else{
    printf("0");
  }
  
  return 0;
}
